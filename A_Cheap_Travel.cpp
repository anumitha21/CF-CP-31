#include<iostream>
#include <algorithm>
using namespace std;


int main(){

    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x;
    x=n%m;
    int y=n/m;
    int result = min(n*a ,min( y*b + x*a , b + y*b));
    cout<<result<<endl;
    
    
    return 0;
}
