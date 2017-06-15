#include <iostream>
using namespace std;

int main() {
	//code
	int n, t,c;

	scanf("%d", &t);

	while(t--)
	{
	    scanf("%d", &n);

	    c=0;

	    for(int i=5; n/i>=1; i*=5)
	        c+=n/i;

	    printf("%d\n", c);
	}

	return 0;
}
