#include<iostream>
using namespace std;

void countingSort(int arr[],int n,int k)
{
    int count[k];
    for(int i=0;i<k;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    for(int i=1;i<k;i++)
    {
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i] = output[i];
    }
}

void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {1,4,4,1,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 5;
    countingSort(arr,n,k);
    printArray(arr,n);
    return 0;
}
