//Move all the negetive element to one side of the array.
#include <iostream>

using namespace std;

int main()
{
    int n;  //take input as n 
    cin>>n;
    int a[n];    //take array of n elements 
    for(int i=0;i<n;i++) cin>>a[i];     //run a loop from 0 to n
    
    int i=-1;              //going to run a partition algorithm so here we will start from one place before
    int pivot = 0;         //take pivot element as 0 to compare between -ve and +ve element
    for (int j=0;j<n;j++){ //run a loop aroung j from 0 to n 
        if(a[j] < pivot){       //if value of j is less than pivot
            i++;                //increment the value of i 
            swap(a[i],a[j]);    //swap the value of i and j here
        }
    }       // now our elements are arranged in such a way that -ve value on left & +ve value on right
    
    for(int i=0;i<n;i++) cout<<a[i]<<" ";   //print the array we arranged

    return 0;
}
