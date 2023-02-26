//*FindingTheMaximumOfThreeGivenNumbers
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int maxNum = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << maxNum;
    return 0;
}


// #include <iostream>
// #include <vector>

// int main()
// {
//     int n;
//     std::cin >> n;

//     std::vector<int> numbers(n);
//     for (int i = 0; i < n; i++)
//     {
//         std::cin >> numbers[i];
//     }

//     int maxNum = numbers[0];
//     for (int i = 1; i < n; i++)
//     {
//         if (numbers[i] > maxNum)
//         {
//             maxNum = numbers[i];
//         }
//     }

//     std::cout << "Maximum number is " << maxNum << std::endl;
//     return 0;
// }
