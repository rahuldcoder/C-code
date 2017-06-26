#include<bits/stdc++.h>
using namespace std;
#define V 9
bool visited[V]={false};
int distance[9]={999};
int minimum_distance(){
int index=-1;
int min=INT_MAX;
for(int i=0;i<V;i++)
{if(!visited[i] && distance[i]<=min)
  {
    min=distance[i];
    index=i;
  }
  return i;
}
}
void dik(int arr[V][V],int src)
{
d[src]=0;
for(int i=0;i<V-1;i++){
int u=minimum_distance();
visited[u]=true;
for(int i=0;i<V;i++)
{
if(!visited[i]&&arr[u][i]&&distance[u]!=INT_MAX&&distance[i]>distance[u]+arr[u][i])
distance[i]=distance[u]+arr[u][i];
}
}
}
int main(){
  int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                       {4, 0, 8, 0, 0, 0, 0, 11, 0},
                       {0, 8, 0, 7, 0, 4, 0, 0, 2},
                       {0, 0, 7, 0, 9, 14, 0, 0, 0},
                       {0, 0, 0, 9, 0, 10, 0, 0, 0},
                       {0, 0, 4, 14, 10, 0, 2, 0, 0},
                       {0, 0, 0, 0, 0, 2, 0, 1, 6},
                       {8, 11, 0, 0, 0, 0, 1, 0, 7},
                       {0, 0, 2, 0, 0, 0, 6, 7, 0}
                      };
dik(graph,0);
//for(int i=0;i<V;i++)
//cout<< i <<" "<<distance[i]<<endl;

}
