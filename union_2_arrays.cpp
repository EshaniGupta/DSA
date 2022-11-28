//Union of two arrays
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        
        int a[n], b[m]; //array a is of size n and b is of size m
        
        unordered_map<int, int> map; //used unordered map of constant time complexity (map keeps the count of all the distinct occured element)
        
        for (int i = 0; i < n; i++) //loop through n using array a
        {
            cin >> a[i];
            
            map[a[i]]++; //put array element inside the map 
        }
        
        for (int i = 0; i < m; i++) //loop through m using array b
        {
            cin >> b[i];
            
            map[b[i]]++; //put array element inside the map 
        }
        
        cout << map.size() << endl; //print the size of the map
    }

    return 0;
}
