#include<cstdio>
#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)  return a;
    if(a%b==0)  return b;
    return  gcd(b, a%b);
}

int main()
{
    int a,b,c,l;

    scanf("%d %d", &a, &b);

    if(a>b)
        c=gcd(a,b);
    else
        c=gcd(b,a);

    l=(a*b)/c;

    printf("The GDC of %d and %d is %d\n", a,b,c);
    printf("The LCM of %d and %d is %d\n", a,b,l);


    return 0;
}
