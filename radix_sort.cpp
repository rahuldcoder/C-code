#include<bits/stdc++.h>
using namespace std;
void counting_sort(int arr[],int n,int mul){
int frequency[10]={0};
int output[n];
for(int i=0;i<n;i++)
frequency[(arr[i]/mul)%10]++;
for(int i=1;i<10;i++)
frequency[i]+=frequency[i-1];
for(int i=n-1;i>=0;i--)
{
output[ frequency[ (arr[i]/mul)%10 ]-1 ]=arr[i];
frequency[(arr[i]/mul)%10]--;
}
for(int i=0;i<n;i++)
arr[i]=output[i];
}
void radix_sort(int arr[],int n,int max){
int mul=1;
while(max){
counting_sort(arr,n,mul);
mul=mul*10;
max=max/10;
}
}
int main(){
int n;
cout<<"Enter the number of elements"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int max=*max_element(arr,arr+n);
//cout<<max;
radix_sort(arr,n,max);
for(int i=0;i<n;i++)
cout<<arr[i];
}
