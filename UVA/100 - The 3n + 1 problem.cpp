#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    while (scanf("%lld %lld", &a, &b) == 2 && a > 0 && b > 0)
    {
        cout << a << " " << b << " ";
        if (a > b)
            swap(a, b);

        int sum = 0;
        for (int i = a; i <= b; i++)
        {
            int ans = 0;
            int j = i;
            while (j != 1)
            {
                if (j % 2 == 0)
                    j /= 2;
                else
                    j = 3 * j + 1;
                ans++;
            }
            sum = max(sum, ans);
        }
        cout << sum << endl;
    }
    return 0;
}
