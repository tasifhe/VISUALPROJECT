#include <iostream>
#include <cstdlib>
#include <cmath>

const int WIDTH = 640;
const int HEIGHT = 480;

struct Vec3 {
    double x, y, z;
    Vec3(double x = 0, double y = 0, double z = 0) : x(x), y(y), z(z) {}
};

struct Matrix {
    double m[4][4];
    Matrix() {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                m[i][j] = (i == j) ? 1 : 0;
            }
        }
    }
};

struct Pixel {
    int x, y;
    unsigned char r, g, b;
};

struct Vertex {
    Vec3 position;
    Vec3 normal;
    Vec3 color;
};

struct Triangle {
    Vertex v[3];
};

struct Mesh {
    Triangle *triangles;
    int triangleCount;
    Matrix transform;
};

struct Camera {
    Vec3 position;
    Vec3 target;
    Vec3 up;
    double fov;
};

Matrix operator*(const Matrix &a, const Matrix &b) {
    Matrix c;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            c.m[i][j] = a.m[i][0] * b.m[0][j] + a.m[i][1] * b.m[1][j] + a.m[i][2] * b.m[2][j] + a.m[i][3] * b.m[3][j];
        }
    }
    return c;
}

Vec3 operator*(const Matrix &m, const Vec3 &v) {
    Vec3 u;
    u.x = v.x * m.m[0][0] + v.y * m.m[1][0] + v.z * m.m[2][0] + m.m[3][0];
    u.y = v.x * m.m[0][1] + v.y * m.m[1][1] + v.z * m.m[2][1] + m.m[3][1];
    u.z = v.x * m.m[0][2] + v.y * m.m[1][2] + v.z * m.m[2][2] + m.m[3][2];
    double w = v.x * m.m[0][3] + v.y * m.m[1][3] + v.z * m.m[2][3] + m.m[3][3];
    if (w != 0) {
        u.x /= w;
        u.y /= w;
        u.z /= w;
    }
    return u;
}

Matrix makeTranslationMatrix(double dx, double dy, double dz) {
    Matrix m;
    m.m[3][0] = dx;
    m.m[3][1] = dy;
    m.m[3][2] = dz;
    return m;
}

Matrix makeScaleMatrix(double sx, double sy, double sz) {
    Matrix m;
    m.m[0][0] = sx;
    m.m[1][1] = sy;
    m.m[2][2] = sz;
    return m;
}

Matrix makeRotationMatrix(double angle, double ax, double ay, double az) {
    Matrix m;
    double c = cos(angle);
    double s = sin(angle);
    m.m[0][0] = c + (1 - c) * ax * ax;
    m.m[0][1] = (1 - c) * ax * ay - s * az;
    m.m[0][2] = (1 - c) * ax * az + s * ay;
    m.m[1][0] = (1 - c) * ax * ay + s * az;
    m.m[1][1] = c + (1 - c) * ay * ay;
    m.m[1][2] = (1 - c) * ay * az - s * ax;
    m.m[2][0] = (1 - c) * ax * az - s * ay;
    m.m[2][1] = (1 - c) * ay * az + s * ax;
    m.m[2][2] = c + (1 - c) * az * az;
    return m;
}

Matrix makeViewMatrix(const Camera &cam) {
    Vec3 z = (cam.position - cam.target).normalized();
    Vec3 x = (cam.up.cross(z)).normalized();
    Vec3 y = z.cross(x);
    Matrix m;
    m.m[0][0] = x.x;
    m.m[0][1] = x.y;
    m.m[0][2] = x.z;
    m.m[1][0] = y.x;
    m.m[1][1] = y.y;
    m.m[1][2] = y.z;
    m.m[2][0] = z.x;
    m.m[2][1] = z.y;
    m.m[2][2] = z.z;
    m.m[3][0] = -x.dot(cam.position);
    m.m[3][1] = -y.dot(cam.position);
    m.m[3][2] = -z.dot(cam.position);
    return m;
}

Matrix makePerspectiveMatrix(double fov, double aspect, double zNear, double zFar) {
    Matrix m;
    double f = 1.0 / tan(fov / 2.0);
    m.m[0][0] = f / aspect;
    m.m[1][1] = f;
    m.m[2][2] = (zFar + zNear) / (zNear - zFar);
    m.m[3][2] = (2 * zFar * zNear) / (zNear - zFar);
    m.m[2][3] = -1;
    m.m[3][3] = 0;
    return m;
}

Pixel project(const Vertex &v, const Matrix &view, const Matrix &proj) {
    Pixel pixel;
    Vec3 position = v.position * view * proj;
    pixel.x = (int)((position.x + 1) * WIDTH / 2);
    pixel.y = (int)((1 - position.y) * HEIGHT / 2);
    pixel.r = (unsigned char)(v.color.x * 255);
    pixel.g = (unsigned char)(v.color.y * 255);
    pixel.b = (unsigned char)(v.color.z * 255);
    return pixel;
}

int main() {
    Triangle triangles[] = {
    {{{-1, -1, -1}, {0, 0, -1}, {1, 0, 0}}, {{1, -1, -1}, {0, 0, -1}, {0, 1, 0}}, {{1, 1, -1}, {0, 0, -1}, {0, 0, 1}}},
    {{{-1, -1, -1}, {0, 0, -1}, {1, 0, 0}}, {{1, 1, -1}, {0, 0, -1}, {0, 0, 1}}, {{-1, 1, -1}, {0, 0, -1}, {1, 1, 0}}},
    {{{-1, -1, 1}, {0, 0, 1}, {1, 0, 0}}, {{1, 1, 1}, {0, 0, 1}, {0, 0, 1}}, {{1, -1, 1}, {0, 0, 1}, {0, 1, 0}}},
    {{{-1, -1, 1}, {0, 0, 1}, {1, 0, 0}}, {{-1, 1, 1}, {0, 0, 1}, {1, 1, 0}}, {{1, 1, 1}, {0, 0, 1}, {0, 0, 1}}},
    {{{-1, -1, -1}, {-1, 0, 0}, {0, 1, 0}}, {{-1, 1, 1}, {-1, 0, 0}, {0, 0, 1}}, {{-1, -1, 1}, {-1, 0, 0}, {0, 0, 1}}},
    {{{-1, -1, -1}, {-1, 0, 0}, {0, 1, 0}}, {{-1, 1, -1}, {-1, 0, 0}, {0, 1, 0}}, {{-1, 1, 1}, {-1, 0, 0}, {0, 0, 1}}},
    {{{1, -1, -1}, {1, 0, 0}, {0, 1, 0}}, {{1, -1, 1}, {1, 0, 0}, {0, 0, 1}}, {{1, 1, 1}, {1, 0, 0}, {0, 0, 1}}},
    {{{1, -1, -1}, {1, 0, 0}, {0, 1, 0}}, {{1, 1, 1}, {1, 0, 0}, {0, 0, 1}}, {{1, 1, -1}, {1, 0, 0}, {0, 1, 0}}},
    {{{-1, -1, -1}, {0, -1, 0}, {1, 0, 0}}, {{1, -1, 1}, {0, -1, 0}, {0, 0, 1}}, {{1, -1, -1}, {0, -1, 0}, {0, 1, 0}}},
    {{{-1, -1, -1}, {0, -1, 0}, {1, 0, 0}}, {{1, -1, 1}, {0, -1, 0}, {0, 0, 1}}, {{1, -1, -1}, {0, -1, 0}, {0, 1, 0}}},
    {{{-1, -1, 1}, {0, -1, 0}, {1, 0, 0}}, {{1, -1, 1}, {0, -1, 0}, {0, 0, 1}}, {{1, -1, -1}, {0, -1, 0}, {0, 1, 0}}},
    {{{-1, 1, -1}, {0, 1, 0}, {1, 0, 0}}, {{1, 1, -1}, {0, 1, 0}, {0, 1, 0}}, {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}}},
    {{{-1, 1, -1}, {0, 1, 0}, {1, 0, 0}}, {{1, 1, 1}, {0, 1, 0}, {0, 0, 1}}, {{-1, 1, 1}, {0, 1, 0}, {1, 0, 0}}},
};

Mesh mesh = {triangles, sizeof(triangles) / sizeof(Triangle), makeTranslationMatrix(0, 0, 4)};

Camera camera = {{0, 0, 0}, {0, 0, 1}, {0, 1, 0}, M_PI / 3};

Matrix view = makeViewMatrix(camera);
Matrix proj = makePerspectiveMatrix(camera.fov, (double)WIDTH / HEIGHT, 0.1, 100);

Pixel *pixels = new Pixel[WIDTH * HEIGHT];

for (int i = 0; i < mesh.triangleCount; i++) {
    Triangle triangle = mesh.triangles[i];
    for (int j = 0; j < 3; j++) {
        triangle.v[j] = triangle.v[j] * mesh.transform;
    }
    for (int j = 0; j < 3; j++) {
        pixels[triangle.v[j].position.y * WIDTH + triangle.v[j].position.x] = project(triangle.v[j], view, proj);
    }
}

for (int y = 0; y < HEIGHT; y++) {
    for (int x = 0; x < WIDTH; x++) {
        std::cout << (int)pixels[y * WIDTH + x].r << ' ' << (int)pixels[y * WIDTH + x].g << ' ' << (int)pixels[y * WIDTH + x].b << ' ';
    }
    std::cout << std::endl;
}

delete[] pixels;

return 0;
}