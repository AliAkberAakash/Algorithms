#include<cstdio>


int main()
{
    int* num= new int(1000);
    int i,j,n,x;
    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &num[i]);

    for(i=1; i<n; i++)
    {
        x=num[i];
        j=i-1;

        while(j>=0&& num[j]>x)
        {
            num[j+1]=num[j];
            j--;
        }

        num[j+1]=x;
    }


     for(i=0; i<n; i++)
        printf("%d ", num[i]);

    return 0;
}
