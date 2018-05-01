/*
* Solution to Finding path using bfs
* Solved by: Ali AKber Aakash
* Email: cedward318@gmail.com or ali852609@gmail.com
*/

#include<bits/stdc++.h>
#define inf 999999  // defining constant as infinite

using namespace std;

bool adj[100][100]; // array to store the edged
bool visited[100];  // array to keep track of visited nodes
int path[100];      // array to store the path
int cost[100];      // array to store the cost

void printPath(int i) // function to recursively print the path
{
    if(i==1)
    {
        printf("1");
        return;
    }

    printPath(path[i]);
    printf(" %d", i);

}


//main function

int main()
{
    int nodes, edges, node1, node2, initialCost, dest;
    queue <int> q;

    scanf("%d %d", &nodes, &edges);

    //storing the edges
    for(int i=0; i<edges; i++)
    {
        scanf("%d %d", &node1, &node2);
        adj[node1][node2]=1;
        adj[node2][node1]=1;
    }

    //setting the value for all the cost as infinite
    for(int i=1; i<=nodes; i++)
    {
        cost[i]=inf;
    }

    //bfs starts here
    q.push(1);
    visited[1]=1;
    cost[1]=0;

    while(!q.empty())
    {
        int temp=q.front();
        q.pop();

        for(int i=0; i<nodes; i++)
        {
            if(adj[temp][i])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i]=1;
                    //updating the cost of ith node
                    if(cost[temp]+1 < cost[i])
                    {
                        cost[i]=cost[temp]+1;
                        //updating the path
                        path[i]=temp;
                    }
                }

            }
        }
    }

    //input the destination node
    scanf("%d", &dest);

    //printing output
    printf("Cost of finding %d is %d\n", dest,cost[dest]);
    printf("Path to find %d is:\n", dest);
    printPath(dest);

    return 0;
}
