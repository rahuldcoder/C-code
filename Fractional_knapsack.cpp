#include<bits/stdc++.h>
using namespace std;

int main(){int o;
float k, weight,value,total=0;
vector<pair<float,pair<float,float> > >v;
cout<<"Enter the number of objects"<<endl;
cin>>o;
cout<<"Enter the capacity of knapsack"<<endl;
cin>>k;

for(int i=0;i<o;i++)
{cout<<"Enter the object  weight adn its value ";
  cin>>weight>>value;
  v.push_back(make_pair(weight/value,make_pair(weight,value)));
}
sort(v.begin(),v.end());
int i=0;
while(k>0 and i<v.size())
{
if(v[i].second.first<= k)
{ total+=v[i].second.second;
  cout<<"kept weight "<<v[i].second.first<<" in knapsack completely"<<endl;
  k-=v[i].second.first;
}
else
{
cout<<"kept weight"<<v[i].second.first<<"in knapsack "<<k/v[i].second.first<<" in ratio"<<endl;
total+=(k/v[i].second.first)*v[i].second.second;
k=0;
}
i++;
}
cout<<"total profit"<<total<<endl;
}
