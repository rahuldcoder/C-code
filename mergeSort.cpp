#include<bits/stdc++.h>
using namespace std;


void merge(int arr[],int beg,int mid,int end)
{   int p=beg,q=mid+1;
    int Arr[end-beg+1];
    for(int i=0;i<=end;i++)
    {
        if(p>mid)
        {
        Arr[i]=arr[q++];
        }
        else if(q>end)
        {
            Arr[i]=arr[p++];
        }
        else
        {
            if(arr[p]<=arr[q])
            {
                Arr[i]=arr[p++];
            }
            else
            {
                Arr[i]=arr[q++];
            }

        }
    }
    for (int i=0;i<=end;i++)
    arr[i]=Arr[i];
}

void mergeSort(int arr[],int beg,int end)
{
    if(beg<end)
    {
        int mid=(beg+end)/2;
        mergeSort(arr,beg,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }

}


int main()
{
    int arr[]={1,5,2,3,7,63,9,6};
    mergeSort(arr,0,7);
    for(int i=0;i<8;i++)
    cout<<arr[i]<<endl;




}