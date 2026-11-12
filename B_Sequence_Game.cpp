#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int s;
        cin>>s;
        vector<int> a(s);
        for(int i=0;i<s;i++){
            cin>>a[i];
        }

        vector<int> b;
        b.push_back(a[0]);
        for(int i=1;i<s;i++){
            if(a[i-1] <= a[i]){
                b.push_back(a[i]);
                
            }
            else{
              b.push_back(a[i]);
            }
            
    }
        cout<<b.size()<<endl;
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
    cout<<endl;
    }
    return 0;

}