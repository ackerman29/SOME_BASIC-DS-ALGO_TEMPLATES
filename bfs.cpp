#include<bits/stdc++.h>
using namespace std;
const int N=1e2;
vector<int>g[N];
int level[N];
int vis[N];

void bfs(int source)
{
    queue<int>q;
    q.push(source);
    vis[source]=1;

    while(!q.empty())
    {
        int cur_vertex=q.front();
        q.pop();
        cout<<cur_vertex<<" ";
        for(int child : g[cur_vertex])
        {
            if(!vis[child])
            {
                q.push(child);
                vis[child]=1;
                level[child]=level[cur_vertex]+1;
            }
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(1);
    for(int i=1;i<=n;i++) // Fixed the loop limit here
    {
        cout<<i<<":"<<level[i]<<endl;
    }

    return 0;
}

