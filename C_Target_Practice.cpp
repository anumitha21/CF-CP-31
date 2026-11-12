include<iostream>
#include <string>
#include <algorithm>
using namespace std;
 
int main(){
    int t;
    int n=10;
    
    
    string a[10];
    cin>>t;
    while(t--){
        int sum=0;
        for(int i=0;i<n;i++){
            
                cin>>a[i];
            
        }
 
    
        for(int i = 0; i < n; i++){
            for(int j=0;j<n;j++){
                if(a[i][j] == 'X'){
                     int score = min(min(i, j), min(9-i, 9-j)) + 1;
                     sum += score;
        }
    
}
 
            cout<<sum<<endl;
    }
}
return 0;
 
}
