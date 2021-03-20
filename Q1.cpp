#include<bits/stdc++.h>
using namespace std;

void Reverse(int arr[],int start,int end)
{


while(start<end)
{
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}

void printarray(int arr[],int size)
{

    for(int i=0;i<size;i++)
    {

        cout<<arr[i]<<" ";
    }
}

int main()
{
    cout<<"hello world\n";
    cout<<"ENTER THE SIZE OF ARRAY\n";
    int size;
    cin>>size;
    int arr[size];
    cout<<"\n ENTER THE ELEMENT OF ARRAAY\n";
    for(int i=0;i<size;i++)
        cin>>arr[i];
        printarray(arr,size);
        Reverse(arr,0,size-1);
        cout<<"\n\n\n";

        printarray(arr,size);
        return 0;

}
