//find the kth min or max element from an array
// the sort solution has time complexity of o(mlogn)
//min heap approach has time complexity of o(k+mlogn)

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a;//input no.of testcases in the array
    cin>>a;
    while(a--)//loop to input elements
    {
        int b;
        cin>>b;
        int c[b];
        for(int i=0;i<b;i++)// loop to add elements in the array
        {
            cin>>c[i];
        }
        int k;//input the position
        cin>>k;
        //solution 1
        // sort(c,c+b);// built in dunction with 2 parameters: starting point and starting point plus size 
        
        // cout<<c[k-1]<<endl;//printing kth value...i.e. kth minimum
        
        //solution 2
        
        priority_queue<int,vector<int>,greater<int>>p;//basic syntax
        for (int i=0;i<b;i++)//pushing values in the queue from the input array
        {
            p.push(c[i]);
        }
        int ans,i=1;
        while(!p.empty())
        {
            if(i==k){
                ans=p.top();//poping elements till kth is on top
                break;
            }
            i++;
            p.pop();//popping the kth element
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}
//A priority queue is an extension of a queue that contains the following characteristics:
// Every element in a priority queue has some priority associated with it.
// An element with the higher priority will be deleted before the deletion of the lesser priority.
// If two elements in a priority queue have the same priority, they will be arranged using the FIFO principle.
