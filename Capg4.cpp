/******************************************************************************

                            // capg4
                            
                        //   function rotate

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;



void r(int n, int a[], int d){
    if(n ==0){
        return;
    }
    
    int b[n];
    
    for(int i=n-1; i>d; i--){
      
            cout<<a[i]<<" ";
        
    }
      
    for(int i=i; i<n-d; i++){
      
            cout<<a[i]<<" ";
        
    }
    
}




int main()
{
    
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
   
   int d;
   cin>>d;
   
   r(n,a, d);
    return 0;
}
