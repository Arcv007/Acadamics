// write a program to delete the elment from the given index by the user
#include<bits/stdc++.h>
using namespace std; 

int main()
{
    int size,index,element;
    cout<<"enter the size of the array:  ";
    cin>>size;
    cout<<endl;

    // creation of the array
    int arr[size];
    cout<<"Enter the elements in the array: ";
    
    // inserting elements in the array
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    // taking element and the position form the user
    cout<<"Enter the index of the element which you want to delete: ";
    cin>>index;

    // shifting the elements to free the position for the insertion of the element
    for (int i=0;i<size-1;i++)
    {
        if (i>=index)
        {
            arr[i]=arr[i+1];
        }
    }
    // printing the updated array
    for( int i=0;i<size-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
