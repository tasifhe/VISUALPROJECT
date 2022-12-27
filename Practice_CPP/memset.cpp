// #include <bitset>
// #include <climits>
// #include <cstring>
// #include <iostream>
 
//  using namespace std;
 
// int main()
// {
//     int a[4];
//     using bits = std::bitset<sizeof(int)*CHAR_BIT>;
//     std::memset(a, 0b1111'0000'0011, sizeof a);
//     for (int ai : a) std::cout << bits(ai) << '\n';
// }
// #include <iostream>  
// #include <cstring>             // header file that contains the memset ( ) function, without it            // we cannot able to access the use of memset ( ) function  
// using namespace std ;  
  
// int main()  
// {  
//     char st [ ] = "JavaT" ;  
//     char ch ;  
//     cout << " Printing the given string : " << st << endl ;  
//     cout << " Enter an alphabet from which you want to replace the each charater of the given string : " ;  
//     cin >> ch ;  
//     memset ( st , ch , sizeof ( st ) ) ;  
//     cout << " Printing the string after replacing the each character of the string with the given substitute : " << endl ;  
//     cout << " " << st ;  
//     return 0 ;  
// }  
#include <iostream>  
#include <cstring>  
           // header file that contains the memset ( ) function, without it 
           //we cannot able to access the use of memset ( ) function   
using namespace std ;  

int main()  
{  
    int arr [100] ;  
    int n , i , p ;  

    cout << " Enter size of an integer array: " ;   
    cin >> n ;  

    cout << " Enter an array elements: " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cin >> arr [ i ] ;  
    }  

    cout << " Printing the given array : " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cout << " " << arr [ i ] << endl ;  
    }  

    cout << " Enter an integer value from which you want to replace the each charater of the given string : " ;  
    cin >> p ;  

    memset ( arr , p , sizeof( arr ) ) ; 

    cout << " Printing the array after replacing the each value of the array with the given substitute : " << endl ;  
    for ( i = 0 ; i < n ; i++ )  
    {  
        cout << " " << arr [ i ] << endl ;  
    }  
  
    return 0 ;  
}  