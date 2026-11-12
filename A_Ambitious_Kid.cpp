#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main(){
    int n;
    int ans=INT_MAX;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        }
    for(int i=0;i<n;i++){
        ans=min(ans,abs(a[i])) ;

        }
    
    cout<<ans;
}