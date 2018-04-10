#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j)
{
  int temp=arr[i];
  arr[i]=arr[j];
  arr[j]=temp;

}

void max_heapify(int arr[],int N,int index)
{
  int leftChild=2*index+1;
  int rightChild=2*index+2;

  int largest=index;

  if(leftChild<N && arr[leftChild]>arr[largest])
  {
    largest=leftChild;
  }
  if(rightChild <N && arr[rightChild]>arr[largest])
  {
    largest=rightChild;
  }

  if(largest!=index)
  {
    swap(arr,largest,index);
    max_heapify(arr,N,largest);
  }


}

void buildHeap(int arr[],int N)
{
  for(int i=N/2-1;i>=0;i--)
  {
    max_heapify(arr,N,i);
  }

}

int main(){

  int arr[]={11,2,33,4,5};
  buildHeap(arr,5);
  for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
}
