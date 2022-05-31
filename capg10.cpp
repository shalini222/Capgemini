/******************************************************************************

                             CAPG 10
                            //  perfect num within range

*******************************************************************************/
#include <iostream>

using namespace std;


#define pi 3.141592653589793238
int isPerfect(int n){
    if(n==0){
        return 0;
    }
    int sum =0;
    for(int i=1; i<n; i++){
        if(n%i==0){
            sum += i;
        }
    }
    
    return sum;
}

int main(){
    
  
    int n, m;
    cin>>n>>m;
    
    int s=0;
   
    for(int i=n; i<=m; i++){
        
        
        int s = isPerfect(i);
        
        if(s == i){
            cout<<i<<" ";
        }
        
       
        }
}

