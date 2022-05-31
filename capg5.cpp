/******************************************************************************
                                CAPG5
                                // move #;s

*******************************************************************************/

#include<bits/stdc++.h>

using namespace std;


void move(string s){
    int n =s.size();
    
    string p1 =" ";
    string p2 = " ";
   string f =""; 
    
    for(int i =0; i<n; i++){
        if(s[i]=='#'){
            p1 += '#';
        }else{
            p2 += s[i];
        }
    }
    f = p1+p2;
    
    int h = f.size();
    string b = " ";
    
    for(int i = 0; i<h; i++){
        if(f[i] == ' '){
           b += f[i]; 
        }else{
           cout<<f[i]; 
        }
    }
    
   
}




int main()
{
    string s;
    getline(cin, s);
    
    move(s);

    return 0;
}
