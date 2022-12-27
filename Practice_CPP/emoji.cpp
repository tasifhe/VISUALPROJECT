#include <cstring>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char q[50];
    char w[50];
    char e[50];
    
    int a;
    
    printf("Take 1 / 2 / 3 as a input number ---- ");

    scanf("%d", &a);

    switch (a)
    {
    case 1 :
        memset(q, a, 3);
         cout << q ;
        break;
    case 2 :
        memset(w, a, 3);
        cout << w ;
        break;
    case 3 :    
        memset(e, a, 3);
        cout << e;
        break;
    default:
        cout << "Operation failed" << endl;
        break;
    }

    return 0;
}