#include<bits/stdc++.h>
using namespace std;
const int N=1e2;
vector<int> g[N];
int depth[N];

void dfs(int vertex,int par=-1)
{
    for(int child : g[vertex])
    {
        if(child==par)
        {
            continue;
        }
        dfs(child,vertex);
        depth[child]+=depth[vertex]+1;
    }
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
    int maxnodepos;
    int maxnode=-1;
    dfs(1);
    
    for(int i=1;i<=n;i++)
    {
        if(depth[i]>maxnode)
        {
            maxnode=depth[i];
            maxnodepos=i;
        }
        depth[i]=0;
    
    }
    maxnode=-1;
    dfs(maxnodepos);
    
        for(int i=1;i<=n;i++)
    {
        if(depth[i]>maxnode)
        {
            maxnode=depth[i];
            
        }
        
    }
    
    cout<< maxnode<<endl;
    
return 0;
}
