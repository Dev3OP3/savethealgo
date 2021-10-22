#include <bits/stdc++.h>
using namespace std;
 
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, ele, j;
    for (i = 1; i < n; i++)
    {
        ele = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than ele, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > ele)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = ele;
    }
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
/*  code */
int main()
{
    // size of array
    int s=0;
    cout<<"Enter Size of Array: "<<endl;
    cin>>s;

    // INput for array

    int arr[s];
    cout<<"Enter elements : " <<endl;
    for (int i=0;i<s;i++){
        cin>>arr[i];
    }

    //Sorting
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    printArray(arr, n);
 
    return 0;
}