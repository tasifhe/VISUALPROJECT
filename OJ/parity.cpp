#include <stdio.h>
int main()
{
	int n, c=0;
	int t, i=1, x=1;
	scanf("%d", &t);
	while(t--)
	{
		c=0;
		scanf("%d", &n);
		while(n!=0)
		{
			if(n%2 == 1)
			c++;
			n=n/2;
		}
		if(c%2 == 0)
        {
		printf("Case %d: even\n", i);
        }
		else
        {
			++i;
        printf("Case %d: odd\n", i);
        }
	}
		return 0;
}