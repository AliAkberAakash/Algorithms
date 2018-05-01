/*
* Implementation of segment tree
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/
#include<bits/stdc++.h>

using namespace std;

int createSegmentTree(int a[], int seg[], int s, int e, int si)
{


}

int main()
{
    int n, a[100000], seg[100000];
    int q,s,e;

    scanf("%d", &n);

    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);

    createSegmentTree(a,seg,0,n-1);


    return 0;
}
