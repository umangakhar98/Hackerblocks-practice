#include<bits/stdc++.h> 
using namespace std;
int lis( int arr[], int n )  
{  
    int lis[n]; 
    lis[0] = 1;  
    for (int i = 1; i < n; i++ )  
    { 
        lis[i] = 1; 
        for (int j = 0; j < i; j++ )   
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)  
                lis[i] = lis[j] + 1;  
    } 
    return *max_element(lis, lis+n); 
}  
/* Driver program to test above function */
int main() 
{ 
int n; cin>>n;
    int arr[n] ; 
for(int i=0;i<n;i++) cin>>arr[i];
  // int n = sizeof(arr)/sizeof(arr[0]); 
    printf("%d", 
           lis( arr, n )); 
    return 0; 
} 
