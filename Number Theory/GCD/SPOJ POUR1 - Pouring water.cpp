/*
* Solution to POUR1 - Pouring water (SPOJ)
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>

using namespace std;

int big,small,fil;

int gcd(int a, int b)
{
    if(b==0)  return a;
    if(a%b==0)  return b;
    return  gcd(b, a%b);
}

void pour(int a, int b)
{
    int k=0;
    int x,y;
    x=y=0;
    while(1)
    {
        fill(&x);
        k++;
        if(x==fin)
        {
            printf("%d\n", k);
            break;
        }
        else
        {
            fill(&x,&y);
            k++;

            if(x==fin)
            {
                printf("%d\n", k);
                break;
            }

            if(x!=0)
            {
                fill(&x, &y);
                break;
            }
        }
    }
}

int main()
{
    int a,b,big,small,fil,t;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d %d %d", &big,&small, &fin);
        if(big<small)
        swap(big,small);

        if(fin%gcd(big,small))
        {
            printf("-1\n");
        }
        else if(big<fin && small <fin)
        {
            printf("-1\n");
        }
        else
        {
            pour(big,small);
        }
    }

    return 0;
}
