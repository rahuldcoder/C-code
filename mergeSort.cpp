#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int beg,int mid ,int end)
{
    int Arr[end-beg+1],p=beg,q=mid+1,k=0;
    
    for(int i=beg;i<=end;i++)
    {
        if(p>mid)
        {
            Arr[k++]=arr[q++];
        }
        else if(q>end)
        {
            Arr[k++]=arr[p++];
        }
        else if(arr[p]>=arr[q])
        Arr[k++]=arr[q++];
        else
        Arr[k++]=arr[p++];
    }
    for(int i=0;i<end-beg+1;i++)
    arr[beg++]=Arr[i];



}
void mergeSort(int arr[],int beg,int end)
{
    if(beg<end)
    {
        int mid=beg+(end-beg)/2;
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }

}
int main()
{
    int size=5;
    int arr[5]={5,4,3,2,1};
     for (int i=0;i<size;i++)
    cout<<arr[i]<<endl;
    mergeSort(arr,0,size-1);
    for (int i=0;i<size;i++)
    cout<<arr[i]<<endl;


}