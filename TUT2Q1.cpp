#include<iostream>
#include<string>

using namespace std;

int binarysearch(int arr[] , int n , int key){

    int left = 0 , right = n-1;

    while (left<=right)
    {
        int mid = (left+right)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){

    cout<<"enter the size of array : ";
    int n;
    cin>>n;
    int arr[n];

    cout<<"array must be sorted !"<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the "<<i+1<<" element of the array : ";
        cin>>arr[i];
    }
    cout<<"the entered sorted array is : "<< endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"enter the number you want to find in array : ";
    int a;
    cin>>a;
    int f = binarysearch(arr , n , a);
    if (f==-1)
    {
        cout<<"the number you have entered is not found !ERROR!";
    }
    else{
        cout<<"The number is FOUND";
    }
}