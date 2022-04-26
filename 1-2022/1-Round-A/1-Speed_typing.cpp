#include<bits/stdc++.h>
using namespace std;
  int sru=1;

void solve(){
   string s1,s2;
   cin >> s1 >> s2;

   int n=s1.size();
   int m=s2.size();

   int i=0,j=0;
   int cont=0;

   while(i<n&&j<m){
       if(s1[i]==s2[j]){
           i++;
       }
       else{
           cont++;

       }
       j++;


   }
   cout<<"Case #"<<sru<<": ";

   if(i==n){
       cout<<cont+(m-j)<<endl;
   }
   else{
       cout<<"IMPOSSIBLE"<<endl;
   }
   sru++;


}



int main(){
    int t;
    cin>>t;
  
    while(t--){
        solve();
    }
}