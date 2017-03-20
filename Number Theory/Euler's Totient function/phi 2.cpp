#include<cstdio>

int gcd(int a, int b);

int phi(int n);

int main()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", phi(n));

    return 0;
}

int gcd(int a, int b)
{
    if(b==0)  return a;
    if(a%b==0)  return b;
    return  gcd(b, a%b);
}

int phi(int n)
{
    int i,c,k=0;


    for(i=1; i<n; i++)
    {
        if(i>n)
        c=gcd(i,n);
        else
        c=gcd(n,i);
        if(c==1)
            k++;
    }

    return k;
}
