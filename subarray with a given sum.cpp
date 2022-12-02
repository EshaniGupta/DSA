// subarray with a given sum
// sol1 is only for non negative values...o(n^2)
// sol2 is acceptimg negative values...o(n)

#include <bits/stdc++.h>
using namespace std;

int sol1(int arr[], int n, int sum)
{
	int curr_sum, i, j;
	for (i = 0; i < n; i++) {
		curr_sum = 0;
		for (j = i; j < n; j++) {
			curr_sum = curr_sum + arr[j];
			if (curr_sum == sum) {
				cout << "Sum found between indexes " << i
					<< " and " << j;
				return 1;
			}
		}
	}
	cout << "No subarray found";
	return 0;
}

void sol2(int arr[], int n, int sum)
{
	unordered_map<int, int> map;
	int curr_sum = 0;
	for (int i = 0; i < n; i++) {
		curr_sum = curr_sum + arr[i];
		if (curr_sum == sum) {
			cout << "Sum found between indexes " << 0
				<< " to " << i << endl;
			return;
		}
		if (map.find(curr_sum - sum) != map.end()) {
			cout << "Sum found between indexes "
				<< map[curr_sum - sum] + 1 << " to " << i
				<< endl;
			return;
		}
		map[curr_sum] = i;
	}
	cout << "No subarray with given sum exists";
}


int main()
{
    int arr1[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
	int n1 = sizeof(arr1) / sizeof(arr1[0]);
	int sum1 = 23;
	sol1(arr1, n1, sum1);
	cout<<endl;
	
	int arr2[] = { 10, 2, -2, -20, 10 };
	int n2 = sizeof(arr2) / sizeof(arr2[0]);
	int sum2 = -10;
	sol2(arr2, n2, sum2);
	return 0;
}
