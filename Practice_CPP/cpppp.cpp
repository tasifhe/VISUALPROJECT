#include <iostream>
using namespace std;

class shape
{
  public:
  string a ;
    void erase()
    {
      cout << "Type ERASE to erase the shape" << endl;
      cin >> a ;
      cout << "......................" << endl;
      cout << "The shape has been erased" << endl;
    };
};

class circle : public shape
{

 private:
   double radius;

   public:
  void Val(double radius)
  {
    this->radius=radius;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the circle is ---- " << 2*3.1416*radius <<endl;
    };

    public:
    void drawn()
    {
        string b;
      cout << "Type DRAW to draw the circle" << endl;
      cin >> b;
      cout << "The circle has been drawn" << endl;
    };
};
class square : public shape
{
    private:
    int side;

    public:
  void Val(double side)
  {
    this->side=side;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the Square is ---- " << side * side <<endl;
    };

    public:
    void drawn()
    {
        string b;
      cout << "Type DRAW to draw the square" << endl;
      cin >> b;
      cout << "The square has been drawn" << endl;
    };
};
class rectangle : public shape
{
       private:
    int length, width;

    public:
  void Val(int length, int width)
  {
    this->length = length;
    this->width = width;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the RECTANGLE is ---- " << length * width <<endl;
    };

    public:
    void drawn()
    {
        string b;
      cout << "Type DRAW to draw the rectangle" << endl;
      cin >> b;
      cout << "The rectangle has been drawn" << endl;
    };
};
class triangle : public shape
{
      private:
    double base, hight;

    public:
  void Val(double base, double hight)
  {
    this->base = base;
    this->hight = hight;
  };
  public:
    void shape_calc()
    {
      cout << "The area of the TRIANGLE is ---- " << 0.5 * base * hight <<endl;
    };

    public:
    void drawn()
    {
        string b;
      cout << "Type DRAW to draw the triangle" << endl;
      cin >> b;
      cout << "The triangle has been drawn" << endl;
    };
};
int main()
{
    double R;
    double S;
    int L, W;
    double B, H;
    
    circle c;
    cout << "Enter RADIOUS of the circle" << endl;
    cin >> R;
    c.Val(R);
    c.shape_calc();
    c.drawn();
    cout << "..........................." << endl;
    c.erase();

    

    square s;
    cout << "Enter SIDE of the square" << endl;
    cin >> S;
    s.Val(S);
    s.shape_calc();
    s.drawn();
    cout << "**********************" << endl;
    s.erase();
    
   

    rectangle r;
    cout << "Enter Length of the rectangle" << endl;
    cin >> L ;
    cout << "Enter Width of the rectangle" << endl;
    cin >> W;
    r.Val(L,W);
    r.shape_calc();
    r.drawn();
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^" << endl;
    s.erase();

    

    triangle t;
    cout << "Enter Base of the triangle" << endl;
    cin >> B ;
    cout << "Enter Hight of the triangle" << endl;
    cin >> H;
    r.Val(B , H);
    r.shape_calc();
    r.drawn();
    cout << "---------------------------------------" << endl;
    r.erase();

    
    return 0;
};