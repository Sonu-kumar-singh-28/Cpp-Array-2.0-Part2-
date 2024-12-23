#include<iostream>
using namespace std;



int printarr( int arr[] , int size)
{
    cout<< endl;
    for( int i=0; i<size; i++)
    {
    arr[i] = arr[i]+10;
    
    cout<<" The Increment Of The Element : " << arr[i] << endl;
    }
cout<<endl;
}


int inc( int arr[], int size)
{
    cout<< endl;
    for(int i=0; i<size; i++)
    {
        cout<< "The  Double Of  The Array Is: " <<  2*arr[i]<<  endl;
    }
}


int main()
{
    int arr[100];
    int size;

    cout<<" Enter The Size Of The Array:";
    cin>>size;

    for(int i=0; i<size; i++)
    {
        cout<<" Enter The Element Of THe Array :";
        cin>>arr[i];
    }


    printarr( arr, size);
    inc( arr, size);
    return 0;
}