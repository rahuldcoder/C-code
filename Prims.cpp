#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> P;
vector<P> adj[100];
bool visited[100]={false};
int Prims(int x){
int min=0;
priority_queue<P,vector<P>,greater<P> > Q;
Q.push(make_pair(0,0));
while(!Q.empty()){
P v1=Q.top();
Q.pop();
int v2=v1.second;
if(!visited[v2])
{
visited[v2]=true;
min+=v1.first;
for(int i=0;i<adj[v2].size();i++)
{
if(!visited[adj[v2][i].second])
Q.push(adj[v2][i]);
}
}
}
return min;
}
int main(){
int vertices,edges;
cout<<"Enter the number of vertices and edges"<<endl;
cin>>vertices>>edges;
for(int i=0;i<edges;i++)
{
  int x,y,weight;
  cin>>x>>y>>weight;
  adj[x].push_back(make_pair(weight,y));
  adj[y].push_back(make_pair(weight,x));
}
cout<<Prims(1);
}
