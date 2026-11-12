int main(){
int n;
cin>>n;
while(n--){
int n,k;
cin>>n>>k;
vector<int>a(n);
for(inti=0;i<n;i++){
cin>>a[i];
}
for(int i=0;i<n;i++){
if(k==a[i]){
cout<<"YES";
break;
}
}
cout<<"NO";


}
return 0;
}