/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int partition(int arr[],int l,int h)
{
    int i=l;
    int j=h;
    int temp;
    int pivot=arr[l];
    while(i<j){
        while(arr[i]<=pivot)i++;
        while(arr[j]>pivot)j--;
        if(i<j)
        {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        }
        temp=arr[l];
        arr[l]=arr[j];
        arr[j]=temp;
    }
    return j;

}
void Quick(int arr[],int l,int h)
{
    if(l<h){
    int pivot=partition(arr,l,h);
    Quick(arr,l,pivot-1);
    Quick(arr,pivot+1,h);
    }

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0;
    int h=n-1;

  Quick(arr,l,h);
  for(int i=0;i<n;i++)
  {
      cout<<arr[i];
  }
    return 0;
}
