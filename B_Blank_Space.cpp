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
    int count=0;
    int count_m=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
        count++;
    }
    else{
        count_m=max(count_m,count);
        count=0;
    }
    
}
  count_m=max(count_m,count);
  cout<<count_m<<endl;
   }
 
return 0;
}