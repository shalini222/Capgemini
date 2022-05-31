/******************************************************************************
                            // CAPG6
                            
                            Write a function to solve the following equation a3 + a2b + 2a2b + 2ab2 + ab2 + b3.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a;
   cin>>a;
   
   int b;
   cin>>b;
   
   int r1 = pow(a, 3);
   int r2 = pow(a, 2)*b;
   int r3 = 2*pow(a, 2)*b;
   int r4 = 2*a*pow(b, 2);
   int r5 = a*pow(b, 2);
   int r6 = pow(b, 3);
   
   
   
   int cal = r1+r2+r3+r4+r5+r6;
   
   cout<<cal;
   

    return 0;
}
