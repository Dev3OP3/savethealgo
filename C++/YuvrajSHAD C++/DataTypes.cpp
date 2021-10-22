#include <iostream>
using namespace std;

int main(){
    int mark1;           // Declare an int variable called mark1
    mark1 = 76;          // Use mark1
    int mark2;           // Declare int variable mark2
    mark2 = mark1 + 10;  // Use mark2 and mark1
    double average;      // Declare double variable average
    average = (mark1 + mark2) / 2.0;   // Use average, mark1 and mark2
    cout<<average;
    // int mark1;           // Error: Declare twice
    // mark2 = "Hello";     // Error: Assign value of a different type
    
    return 0;
}
