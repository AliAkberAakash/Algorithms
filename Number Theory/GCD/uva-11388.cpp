/*
* Solution to uva-11388
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<iostream>
#include<cstdio>

int main()
{
    long long int a,b,i;

    scanf("%lld", &i);

    while(i--)
    {
        scanf("%lld %lld", &a, &b);

        if(b%a==0)
            printf("%lld %lld\n", a,b);
        else
            printf("-1\n");
    }

    return 0;
}
