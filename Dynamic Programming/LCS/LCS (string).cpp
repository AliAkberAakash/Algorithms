#include<cstdio>
#include<iostream>
#include<string>

using namespace  std;

int lcs[1024][1024];

vector <int> v;

int lcsLength(string x, int m, string y, int n)
{
    for(int i=0; i<=m; i++)
        lcs[i][n]=0;
    for(int j=0; j<n; j++)
        lcs[m][j]=0;

    for(int i=m-1; i>=0; i--)
    {
        for(int j=n-1; j>=0; j--)
        {
            lcs[i][j]=lcs[i+1][j+1];

            if(x[i]==y[j])
                lcs[i][j]++;

            if(lcs[i][j+1]>lcs[i][j])
                lcs[i][j]=lcs[i][j+1];

            if(lcs[i+1][j]>lcs[i][j])
                lcs[i][j]=lcs[i+1][j];
        }
    }

    return lcs[0][0];
}


int main()
{
    string x,y,z;

    getline(cin, x);
    getline(cin, y);

    int x=lcsLength(x,x.length(),y,y.length());

    printf("%d\n", x);

    return 0;
}
