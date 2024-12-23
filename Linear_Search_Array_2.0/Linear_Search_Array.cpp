#include<iostream>
using namespace  std;


int find( int arr[],int size, int key)
{
    for( int i=0; i<size; i++)
    {
        if( arr[i] == key)
        return true;
    }
     return false;
    cout<<endl;
}
int main()
{
    int arr[100];
    int key;
    int size;
    cout<<" Enter The Size Of The Array :";
    cin>>size;

    for( int i=0; i<size; i++)
    {
        cout<<" Enter THe ElemenT Of The Array: ";
        cin>>arr[i];
    }
    cout<<" Enter The Element You Have Find:";
    cin>>key;

    if( find( arr,size, key ))
    {
        cout<<" Found:";
    }
    else{
        cout<<" Not Found:";
    }
    return 0;
}