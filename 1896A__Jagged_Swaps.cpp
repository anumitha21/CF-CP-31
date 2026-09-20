#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int j=0;j<n;j++){
            cin>>a[j];
            
        }
        if(a[0]!=1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
            
        }
 
 
 
    
    return 0;
}

/*
Approach
in qn they gave 
Select an index i
 from 2
 to n−1
 such that ai−1<ai
 and ai>ai+1
. Swap ai
 and ai+1
.


means tht , the swapping is from only second index (they are following 1 to n-1)
so first element is never swapped ,if it is never swapped then , the first element is always 1.as thts how it stays in the sorted order .else no.
*/