#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;

vector<int> divisors[100];


void Divisors(int n)
{
    int i,j,k;

    for(i=1; i<=n; i++)
            for(j=i; j<=n; j+=i)
                divisors[j].push_back(i);
}

int main()
{
    int n,i,j;
    scanf("%d", &n);

    Divisors(n);

   for(i=1; i<=n; i++)
   {
        for(j=0; j<divisors[i].size(); j++)
            printf("%d ", divisors[i].at(j));
        printf("\n");
   }


    return 0;
}
