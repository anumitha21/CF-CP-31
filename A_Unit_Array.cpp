#include<iostream>
#include<vector>
using namespace std;

int main(){
   int t;
   cin>>t;
   while(t--){

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(a[i]==1){ x++;}
        else{ y++;}
    }
    if(x%2==1 && y%2==1){
        cout<<"1"<<endl;
    }
    else if(x%2==0 && y%2==0){
        cout<<"0"<<endl;
    }
    else {
       cout<<min(y,(abs(x-abs(x-y))))<<endl;
    }
    
}
return 0;
}