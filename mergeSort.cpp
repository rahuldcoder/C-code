#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int end)
{
    int lenLeft=mid-low+1;
    int lenRight=end-mid;
    int left[lenLeft],right[lenRight];

    for(int i=0;i<lenLeft;i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<lenRight;i++)
    {
        right[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=low;

    while(i<lenLeft&&j<lenRight)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else
        {
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<lenLeft)
    {
        arr[k++]=left[i++];
    }
    while(j<lenRight)
    {
        arr[k++]=right[j++];
    }


}

void mergeSort(int arr[],int low,int end)
{
    if(low<end)
    {
        int mid=(low+end)/2;

        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,low,mid,end);
    }

}


int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    mergeSort(arr,0,9);
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
    cout<<endl;





}