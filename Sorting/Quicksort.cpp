/*
* Solution to Quicsort
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<cstdio>
#include<iostream>

void swaP(int* x, int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

int partitioN(int* a,int start, int enD)
{
    int pivot=a[enD];
    int pIndex=start;

    for(int i=start; i<enD; i++)
    {
        if(a[i]<=pivot)
        {
            swaP(&a[i],&a[pIndex]);
            ++pIndex;
        }
    }
    swaP(&a[pIndex], &a[enD]);

    return pIndex;
}

void qSort(int* a, int start, int enD)
{
    if(start<enD)
    {
        int pIndex=partitioN(a, start, enD);
        qSort(a, start, pIndex-1);
        qSort(a,  pIndex+1, enD);
    }
}

int main()
{
    int i,n,a[100];

    scanf("%d", &n);

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    qSort(a,0,n-1);

    for(i=0; i<n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
