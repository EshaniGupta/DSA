// chocolate distribution problem
// sort+compare :- Time Complexity: O(N*log(N)), Space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

// arr[] represents sizes of packets, m is number of students.
// Returns minimum difference between maximum and minimum values of distribution.

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++) cin>>arr[i];
        int m;
        cin>>m;
        // if there are no chocolates or number of students is 0
    	if (m == 0 || n == 0)
    		return 0;
    	// Sort the given packets
    	sort(arr, arr + n);
    	// Number of students cannot be more than number of packets
    	if (n < m)
    		return -1;
    
    	// Largest number of chocolates
    	int min_diff = INT_MAX;
    
    	// Find the subarray of size m such that difference between last (maximum in case of sorted) and first (minimum in case of sorted) elements of subarray is minimum.
    	for (int i = 0; i + m - 1 < n; i++) {
    		int diff = arr[i + m - 1] - arr[i];
    		if (diff < min_diff)
    			min_diff = diff;
    	}
    	cout << "Minimum difference is "<< min_diff;
    	
            
    }
    return 0;
}

