#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cin>>num;
    while(num--){
    int x,n;
    cin>>n>>x;

    vector<int>a(n);
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    
    }

    int diff=0;
    for(int i=1;i<n;i++){

        diff=max(diff,a[i]-a[i-1]);

    }
    int ans=max(diff,a[0]);
    ans=max(ans,2*(x-a[n-1]));
    cout<<ans<<endl;
    return 0;
}
}

