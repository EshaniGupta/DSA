//maximum sum sub-array
//1st sol is brute force ... sum all possible subarrays o(n^3) 
//2nd sol prev sum array ...o(n^2)
//3rd sol kadane's algo...
#include <iostream>
#include<climits>
using namespace std;
void func1(){
    int n;
    cin>>n;
    int a[n+1];
    for (int i =1;i<=n;i++) cin>>a[i];
    int maxarr=INT_MIN;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
            int s=0;
            for (int k=i;k<=j;k++){
                s=s+a[k];
            }
            if (s>maxarr){
                maxarr=s;
            }
            
        }
    }
    cout<<maxarr;
}

void func2(){
    int n;
    cin>>n;
    int a[n+1];
    for (int i =1;i<=n;i++) cin>>a[i];
    int pre[n+1];
    pre[0]=0;
    for (int i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    
    int maxarr=INT_MIN;
    for (int i=1;i<=n;i++){
        for (int j=i;j<=n;j++){
                int s=pre[j]- pre[i-1];
                if (s>maxarr){
                    maxarr=s;
                }
            
            }
        }   
        cout<<maxarr;
}

void func3(){
    int n;
    cin>>n;
    int a[n+1];
    for (int i =1;i<=n;i++) cin>>a[i];
    
    int max_so_far = INT_MIN, max_ending_here = 0;
    
    for (int i =1;i<=n;i++) {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }       
    cout<<max_so_far;
}


int main()
{
    func3();
    return 0;
}
