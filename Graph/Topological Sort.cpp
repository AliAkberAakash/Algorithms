#include<bits/stdc++.h>

using namespace std;

int main()
{
    int inDegree[100], adj[100][100];
    int nodes, edges, x,y;
    queue <int> q, lis;

    memset(inDegree, 0, sizeof(inDegree));
    memset(adj, 0, sizeof(adj));

    cin>>nodes;
    cin>>edges;

    for(int i=0; i<edges; i++)
    {
        cin>>x>>y;

        adj[x][y]=1;
        inDegree[y]++;
    }

    for(int i=0; i<nodes; i++)
        if(!inDegree[i])
            q.push(i);

    while(!q.empty())
    {
        int z=q.front();
        q.pop();
        lis.push(z);

        for(int i=0; i<nodes; i++)
        {
            if(adj[z][i])
            {
                inDegree[i]--;
                if(!inDegree[i])
                    q.push(i);
            }
        }
    }

    while(!lis.empty())
    {
        cout<<lis.front()<<"->";
        lis.pop();
    }

    return 0;

}


