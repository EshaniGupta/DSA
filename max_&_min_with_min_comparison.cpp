//Find Max and Min element in array using minimum number of comparisions
//IN CASE OF TAKING FIRST 2 AS PAIR AND COMPARING REST OF THE ELEMENTS ON BY once...NO. OF COMPARISONS IS 2*(N-2)+1
//(optimized solution) IN CASE OF TAKING FIRST 2 AS PAIR AND COMPARING REST OF THE ELEMENTS AS PAIR OF 2 AGAIN IN AN ARRAY..NO. OF COMPARISONS (odd) IS 3*(n-1)/2 and for even is 1+3*(n-2/2)
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for (int i=0;i<n;i++) cin>>a[i];
  int max, min;
  int i;

  if n%2==0{
    if (a[0]>a[1]){
      max = a[0];
      min = a[1];
    }
    else{
      max = a[1];
      min = a[0];
    }
    i=2;

    }
    else{
      max = a[0];
      min = a[0];
      i=1;
    }
    while (i<n-1){
      if (a[i]>max){
        max = a[i];
      }
      if (a[i+1]<min){
        min = a[i+1];
      }
      else{
          if (a[i+1]>max){
            max=a[i+1];  
          }
          if (a[i]<min){
            min=  a[i];
      }
    }
    i=i+2;
    }
  cout<<"Maximum value = "<<max<<endl;
  cout<<"Minimum value = "<<min<<endl;

  return 0;
}
