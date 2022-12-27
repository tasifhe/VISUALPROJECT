// #include <cstring>
// #include <iostream>

// using namespace std;

// int main()
// {
//     char dest[50];
//     int a=5;
//     memset(dest, a, 1);

//     cout << "After calling memset" << endl;
//     cout << "dest contains " << dest; 
//     return 0;
// }

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

int a[10];

memset(a, 23, sizeof(a));

cout << "Output is " << a;

// for(int i; i = 0; i <= 4; i++)
// {
//     printf("output is %d \n", a[i]);
// }

return 0;
}