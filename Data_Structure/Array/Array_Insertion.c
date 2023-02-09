// Write a program to insert a element in the array in the index provided by the user
#include<conio.h>
#include<stdio.h>


// inserting the element at the given position
void insertion(int arr[], int a)
{
    int element,index;
    printf("enter the element and the index: ");
    scanf("%d%d",&element,&index);
    
    for(int i=a-1;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
    return;
}

// Display the elements of the array
void display(int arr[], int y)
{
    printf("the elements in the array are: ");
    for(int i=0;i<y;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return;
}

// creating the array
void create(int arr[], int x)
{
    printf("Enter the elements: ");
    for (int i=0;i<x;i++)
    {
        scanf("%d",&arr[i]);
    }
    return;
}

int main()
{
    int size;
    printf("enter the size of the array:  ");
    scanf("%d",&size);
    int arr[size];
    printf("\n");
    create(arr,size);
    printf("Before insertion ");
    display(arr,size);
    insertion(arr,size);
    printf("After insertion ");
    display(arr,size+1);
    return 0;
}




/* int main()
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
    cout<<"Enter the element and index of the element which you want to insert: ";
    cin>>element>>index;

    // shifting the elements to free the position for the insertion of the element
    for (int i=size+1;i>=index;i--)
    {
        arr[i]=arr[i-1];
        if (i==index)
        {
            arr[i]=element;
            break;
        }
    }
    
    // printing the updated array
    for( int i=0;i<size+1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
 */