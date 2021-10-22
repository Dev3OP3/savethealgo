#include<iostream>
using namespace std;

void palindrome(int arr[], int n)
{
    int sum=0;
    // Initialise flag to zero.
    int flag = 0;
 
    // Loop till array size n/2.
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        // Check if first and last element are different
        // Then set flag to 1.
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }
 
    // If flag is set then print Not Palindrome
    // else print Palindrome.
    if (flag == 1)
        cout << "Not Palindrome";
    else
        cout << "Palindrome";
        cout<<"The Sum is : ";
        for (int n = 0; n < 5; ++n) {
            sum+= arr[n];
            }
        cout<<sum;
}

int main()
{
    //int size=0;

   // cout<<"Enter Size of The Array : "<<endl;
    //cin>>size;
    int arr[5];

    cout<<"Enter 5 Elements For the Array : "<<endl;

    for (int i = 0; i < 5; ++i) {
        cin >> arr[i];
    }

    int n = sizeof(arr) / sizeof(arr[0]);
 
    palindrome(arr, n);
    return 0;
}