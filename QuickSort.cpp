// Implementation of Quick Sort Algorithm

#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;

}

int partition(int arr[],int beg,int end)
{
int pivot=arr[beg];
int i=beg+1;
for(int j=beg+1;j<=end;j++)
{
    if(arr[j]<=pivot)
    {
        swap(arr,i,j);
        i++;
    }

}

swap(arr,beg,i-1);
return i-1;

}

void quickSort(int arr[],int beg ,int end)
{
    if(beg<end)
    {
        int pivot=partition(arr,beg,end);
        quickSort(arr,beg,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}


int main()
{
    int arr[5]={15,44,9,2,11};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

}