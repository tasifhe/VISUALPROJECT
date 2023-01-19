//Solved by Tasif Hossain Emon
 //Student of SMUCT //BATCH 29th //ID:221071042
//*Search elements in an array
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    int i, j, n, a[101], element, count = 0;
    cout << "Enter size of the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout << "Enter the element to be searched: ";
    cin >> element;
    for (i = 0; i < n; i++)
    {
        if (a[i] == element)
        {
            count = 1;
            break;
        }
    }
    if (count == 1)
    {
        cout << "Element found at position " << i + 1 << endl;
        cout<<"\nDONE"<<endl;        
        system("Color A0");
    }
    else
    {
        cout << "Element not found" << endl;
        system("Color C0");
    }
    return 0;
}