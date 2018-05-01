#include<bits/stdc++.h>

using namespace std;

int n,e,m; //n-> number of nodes, e->number of edges, m->number of allowed colors
bool adj[100][100]; //adjacent matrix to store the edges
int color[100]; //matrix to store colors

//function to print the color array
void print ()
{
    for(int i=0; i<n; i++)
        printf("%d = %d\n", i,color[i]);
    puts("");
}

//function to check if its possible to put a color in a node
bool isPossible(int a, int c)
{
    for(int i=0; i<n; i++)
        if(adj[a][i] && color[i]==c)
            return false;
    return true;
}

//the recursive m coloring algorithm
void mColoring(int k)
{

    for(int c=1; c<=m; c++)
    {
        if(isPossible(k,c))
        {
            color[k]=c;

            if(k+1<n)
                mColoring(k+1);
            else
                print();
        }
    }
}

int main()
{
    int x, y;
    scanf("%d %d %d", &n,&e,&m);

    for(int i=0; i<e; i++)
    {
        scanf("%d %d", &x, &y);

        adj[x][y]=true;
        adj[y][x]=true;
    }

    mColoring(0);

    return 0;
}
