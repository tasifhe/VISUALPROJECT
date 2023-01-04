//*Search elements in an array
#include <iostream>
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
        cout << "Element found at position " << i + 1 << endl;
    else
        cout << "Element not found" << endl;
    cout<<"\nDONE"<<endl;        
    system("Color A0");
    return 0;
}