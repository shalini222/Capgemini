/******************************************************************************
                            // CAPG7
                            
                        //   .spiral printing  

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  
   int re;
   cin>>re;
   
   int ce;
   cin>>ce;
   
   
   
   int mat[re][ce];
   
   for(int i=0; i<re; i++){
       for(int j = 0; j<ce; j++){
           cin>>mat[i][j];
       }
   }
   
  
 int rs=0;
 int cs =0;
 
 
 
 
 
 while(rs<re and cs<ce){
     
    //  first row
     for(int i=cs; i<ce; i++){
         cout<<mat[rs][i]<<" ";
     }
     rs++;
     
     
     
    //  last col
    
     for(int i=rs; i<re; i++){
         cout<<mat[i][ce-1]<<" ";
     }
     ce--;
    
    
    
    // last row
    
    
    if(rs<re){
        
        
        for(int i=ce-1; i>=cs; i--){
         cout<<mat[re-1][i]<<" ";
     }
     re--;
    }
    
    
    //first col
    
    
    
    if(cs<ce){
        
        
        for(int i=re-1; i>=rs; i--){
         cout<<mat[i][cs]<<" ";
     }
     cs++;
    }
    
    
    
    
     
 }
 
 
 
 


// 1  2  3  4  8  12  16  20  19  18  17  13  9  5  6  7  11  15  12  14 10  





    return 0;
}
