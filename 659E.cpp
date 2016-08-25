#include<iostream>
#include<vector>
using namespace std;
const int N=100005;
int vis[N]={0};
int ver;
int road;
vector<int> G[N];

void dfs(int u)
{
    vis[u]=1;
    ver++;
    for(int i=0;i<G[u].size();++i){
        road++;
        if(!vis[G[u][i]])
            dfs(G[u][i]);
    }

}

int main(void)
{
    int m,n;
    cin>>n>>m;

    for(int i=0;i<m;++i){
        int a,b;
        cin>>a>>b;
        G[a].push_back(b);
        G[b].push_back(a);
    }
    int result=0;
    for(int i=1;i<=n;++i){
        if(!vis[i]){
            ver=0;
            road=0;
            dfs(i);
            if(ver-road/2>0)
                result+=(ver-road/2);
        }
    }

    cout<<result<<endl;
}
