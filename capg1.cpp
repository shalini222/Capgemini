/******************************************************************************

              // CAPG1 

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;
void cF(int a[], int n){
    if(n==0){
         return;
    }
    
    map<int, int>mp;
    
     for (int i = 0; i < n; i++)
        mp[a[i]]++;
        
        
    for (auto x : mp){
      cout<<x.first<<" "<<"occurs"<<" "<<x.second<<" "<<"times"<<endl;
      }
    
    
    
    
    
}


int main() {
  int n;
  cin>>n;
  
  int a[n];
  for(int i=0; i<n; i++){
      cin>>a[i];
  }
  

  
   cF(a,n);
 
  
  
    return 0;
}