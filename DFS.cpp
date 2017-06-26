#include<iostream>
#include <vector>
#include<string.h>
#include<fstream>
using namespace std;
int n, e;
vector <int> a[100];
bool b[100];
void dfs(int v)
{
if(b[v]) return;
b[v] = true;
cout<<v<<" ";
for (int i=0;i<a[v].size();i++)
{
dfs(a[v][i]);
}
}
int main()
{
cin>>n >> e ;
for(int i = 0;i < e;i++)
{
int start, end;
cin >> start >> end;
a[start].push_back(end);
a[end].push_back(start);
}
memset(b,0,sizeof(b));
dfs(0);
//system ("pause");
return 0;
}
