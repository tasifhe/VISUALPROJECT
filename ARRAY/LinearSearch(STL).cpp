//*SequentialSearch//LinearSearch(STL)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,x;
    cout << "Enter the number of elements in the vector: ";
    cin >> n;
    cout << "Enter the elements of the vector: ";
    for(int i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int key;
    cout << "Enter the key to search for: ";
    cin >> key;
    vector<int>::iterator it;
    it=find(v.begin(),v.end(),key);
    if(it!=v.end())
    {
        cout<<key<<" is Present in the vector"<<endl;
    }else{
        cout<<key<<" is Not-Present in the vector"<<endl;
    }
    return 0;
}
