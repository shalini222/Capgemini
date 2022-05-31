/******************************************************************************

                            // capg3
                            
                           A string contains multiple characters which are repeated consecutively. Write a program that reduces the size of the string using given mathematical logic.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;


void sc(string s){
   
    int n =s.length();
   
   
    if(n ==0){
        return;
    }
    
    
    map<char,int>mp;
    
    
    for(int i=0; i<n; i++){
        mp[s[i]]++;
    }
    
    
    
    for(auto x : mp){
        cout<<x.first<<x.second;
    }
    
}







int main()
{
    
    
    
    string s;
    cin>>s;
    
    sc(s);
    return 0;
}
