#include<iostream> 
 
using namespace std; 
int main(){ 
    int t; 
    cin>>t; 
    int m,n; 
    string s,x; 
    while(t--){ 
        cin>>n>>m; 
        cin>>x; 
        cin>>s; 
        int ans=0;
    while(x.length()<s.length()){
        x.append(x);
        ans++;
    }
    if(x.find(s) != string::npos){
           cout<<ans<<endl;
    }
        else{
            x.append(x);
            ans++;
            if(x.find(s) != string::npos){
              cout<<ans<<endl;
    }
            else {
                cout<<-1<<endl;
          

        }
    }
 
    } 
 
    return 0; 
     
} 
   