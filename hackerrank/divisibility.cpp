#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<stdio.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
        {
        long long int a,b; 
        cin>> a>>b;
        if(a%b==0)
            cout << "0" << endl;
        else 
            cout<< b-(a%b)<<endl;
        }    
    return 0;
}

// int main ()
// {
//     int t;
//     scanf("%d", &t);
//     for (int i = 0; i < t; i++)
//     {
//         long long int a,b;
//         scanf("%lld %lld", &a, &b);
//         if (a%b==0)
//         {
//             printf("0\n");
//         }
//         else
//         {
//             printf("%d", b-(a%b));
//         }
//         return 0;
//     }
    
// }