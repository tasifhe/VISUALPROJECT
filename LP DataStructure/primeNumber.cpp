//* Find if a number prime or not
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int div = 2;
    while(div<n)
    {
        if(n%div==0)
        {
            cout<<"Not Prime";
            break;
        }
        else div += 1;
    }
    if(div==n) cout<<"Prime";
    return 0;
}

//? Another Optimizing Way
// #include <iostream>
// #include <cmath>

// int main()
// {
//     int n;
//     std::cin >> n;

//     if (n == 2)
//     {
//         std::cout << "Prime";
//         return 0;
//     }
//     else if (n % 2 == 0 || n == 1)
//     {
//         std::cout << "Not Prime";
//         return 0;
//     }

//     int div = 3;
//     int limit = std::sqrt(n);

//     while (div <= limit)
//     {
//         if (n % div == 0)
//         {
//             std::cout << "Not Prime";
//             return 0;
//         }
//         div += 2;
//     }

//     std::cout << "Prime";
//     return 0;
// }


//? Another Optimizing Way using Data Structure(Vector)
// #include <iostream>
// #include <vector>
// #include <cmath>

// bool isPrime(int n, const std::vector<int>& primes)
// {
//     int limit = std::sqrt(n);
//     for (int i = 0; i < primes.size(); i++)
//     {
//         if (primes[i] > limit)
//         {
//             break;
//         }
//         if (n % primes[i] == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     std::cin >> n;

//     std::vector<int> primes;
//     primes.push_back(2);

//     for (int i = 3; i <= n; i += 2)
//     {
//         if (isPrime(i, primes))
//         {
//             primes.push_back(i);
//         }
//     }

//     if (isPrime(n, primes))
//     {
//         std::cout << "Prime";
//     }
//     else
//     {
//         std::cout << "Not Prime";
//     }

//     return 0;
// }