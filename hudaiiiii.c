#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b, c, d, e, i;

    scanf("%d %d %d", &a, &b, &c);

    if (12 <= a && 12 <= b && 12 <= c)
    {
        d = a + b + c;
        for(i = 1; i <= 10; i++)
        {
            e = 2 * i + 1 * i + 3 * i;
            
            if (e == d)
            {
                printf("YES");
                return 0;
            }
        }

        printf("NO");
    }

    else
    {
        printf("NO");
    }
    
    return 0;
}