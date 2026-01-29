#include "bits/stdc++.h"
using namespace std;
int main(){
    //printing  a number in shape of right angle triangle shape using **for loops
    int n=5;                   
    for(int i=1;i<=n;i++){     
        for(int j=1;j<=i;j++){  
            cout<<j<<" ";       
        }
        cout<<endl;             
    }
//**while loops 
    int m=5;
    int i=1;                    
    while(i<=m){               
        int j=1;               
        while(j<=i){          
            cout<<j<<" ";     
            j++;              
        }
        cout<<endl;          
        i++;                 
    }
   
        

    return 0;
}