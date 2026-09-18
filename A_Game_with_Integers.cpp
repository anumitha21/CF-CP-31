#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i];
        if((a[i]+1)%3==0 || (a[i]-1)%3==0){
           cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;

}