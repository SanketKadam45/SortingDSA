/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void heapify(int arr[],int n,int i)
{
    int temp;
    int largest=i;
    int l=2*i;
    int r=2*i+1;

    if(l<=n&& arr[l]>arr[largest])
    {
        largest=l;
    }
    if(r<=n&&arr[r]>arr[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        temp=arr[i];
        arr[i]=arr[largest];
        arr[largest]=temp;
        heapify(arr,n,largest);
    }
}

void build(int arr[],int n)
{
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
}
void heapsort(int arr[],int n)
{
    int temp;
    for(int i=n;i>1;i--)
    {
        temp=arr[1];
        arr[1]=arr[i];
        arr[i]=temp;
        heapify(arr,i-1,1);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
    cin>>arr[i];
    }
    build(arr,n);
   /* for(int i=1;i<=n;i++)
    {
        cout<<arr[i], " ";
    }*/
    heapsort(arr,n);
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
