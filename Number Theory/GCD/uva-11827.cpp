/*
* Solution to uva-11827
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int gcd(int a, int b)
{
    if(b==0)    return a;
    if(a%b==0)  return b;
    return  gcd(b, a%b);
}

int main()
{
    int i,a[101];

    scanf("%d", i);

    while(i--)
    {

    }

    return 0;
}
