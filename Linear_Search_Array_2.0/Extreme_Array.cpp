#include<iostream>
using namespace std;

int main()
{
    int arr[100];
      int size;
   

    cout<<" Enter The Size OF The Array :";
    cin>>size;

    for( int i=0; i<size; i++)
    {
        cout<<" Enter THe Number You Insert : ";
        cin>>arr[i];
    }

     int start = 0;
    int end = size-1;
  
    while( start<=end)
    {
        if( start >end)
        break;

    if( start == end)
    {
        cout<<arr[start] <<" ";
    }
    else
    {
        cout<< arr[start]<< " ";
        cout<<arr[end]<<" ";
    }
    start++;
    end--;
    }
}