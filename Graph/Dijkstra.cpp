#include<bits/stdc++.h>

using namespace std;

class node
{
public:
    int in,cost;
    node(int _in, int _cost)
    {
        in=_in;
        cost=_cost;
    }
};

bool operator<(node A, node B)
{
    return A.cost>B.cost;
}

class edge
{
public:
    int v,w;
};

vector <edge> adj[100];
priority_queue<node> pq;
int dist[100];
int n;

void dijkstra(int s)
{
    for(int i=1; i<=n; i++)
        dist[i]=1000000000;

    dist[s]=0;

    pq.push(node(s,0));

    while(!pq.empty())
    {
        node u=pq.top();

        pq.pop();

        if(u.cost!=dist[u.in])
            continue;

        for(int i=0; i<adj[u.in].size(); i++)
        {
        	edge e=adj[u.in][i];
            if(dist[e.v]>u.cost+e.w)
            {
                dist[e.v]=u.cost+e.w;
                pq.push(node(e.v, dist[e.v]));
            }
        }
    }

}


int main()
{
    edge x;
    int a,b,c,ed;
    scanf("%d %d", &n, &ed);

    for(int i=0; i<ed; i++)
    {
        scanf("%d %d %d", &a, &b, &c);
        x.v=b;
        x.w=c;
        adj[a].push_back(x);
    }

    dijkstra(1);

    for(int i=1; i<=n; i++)
        cout<<dist[i]<<endl;

    return 0;
}
