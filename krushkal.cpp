#include<bits/stdc++.h>
using namespace std;
int p[100];
vector<pair<int,pair<int,int > > > x;
void initialise(){
 for(int i=0;i<100;i++)
 p[i]=i;
}
int root(int i){
while(p[i]!=i)
{
  i=p[i];
}
return i;
}

void union1 (int a,int b){
int l=root(a);
int y=root(b);
p[l]=y;
}
int krushkal(int edges,int vertices)
{
  int x1,y1;
  int cost,min=0;
  for(int i=0;i<edges;i++){
    x1=x[i].second.first;
    y1=x[i].second.second;
    cost=x[i].first;
    if(root(x1)!=root(y1))
    {
      min+=cost;
      union1(x1,y1);
    }

  }
  return min;
}

int main()
{
int edges,vertices;
initialise();
cout<<"Enter the number of vertices and edges"<<endl;
cin>>vertices>>edges;
for(int i=0;i<edges;i++)
{int x1,y1,weight;
  cin>>x1>>y1>>weight;
  x.push_back(make_pair(weight,make_pair(x1,y1)));
}
sort(x.begin(),x.begin()+edges);
cout<<krushkal(edges,vertices);
}
