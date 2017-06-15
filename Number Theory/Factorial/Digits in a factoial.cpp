#include <iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main() {

	int t,x,m;
	double k;

	scanf("%d", &t);

	while(t--)
	{
	    k=0;
	    scanf("%d", &x);
	    for(int i=1; i<=x; i++)
	    {
	        k += log10 (i);
	    }
	    m=k+1;

	    printf("%d\n", m);
	}

	return 0;
}
