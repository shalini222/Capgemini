/******************************************************************************

                            // capg2
                            
                            There are multiple dealerships of cars and bikes.

Write a program that calculates how many tyres are in each dealership.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    int c[t];
    int b[t];
    int cal =0;
   for(int i=0; i<t; i++){
       cin>>c[i]>>b[i];
   }
    
    
    for(int i=0; i<t; i++){
        cout<<(c[i]*4+b[i]*2)<<endl;
    }    
    return 0;
}
