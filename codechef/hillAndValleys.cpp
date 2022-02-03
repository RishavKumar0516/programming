#include <bits/stdc++.h>
using namespace std;

   void createstring(int n, int m){
      string s = "";
      if(n > m){
       for(int i = 0; i < m; i++){
          s+="01";
       }
       for(int i = 0; i < n-m; i++ ){
          s+="010";
       }
      }
      
      else if(m > n){
       for(int i = 0; i < n; i++){
          s+="10";
       }
       for(int i = 0; i < m-n; i++ ){
          s+="101";
       }
      }
      
      else if(m == n){
       for(int i = 0; i < n+1; i++){
        s+="01";
       }
      }
      
      cout<<s.size()<<endl;
      cout<<s<<endl;
    
   }
int main() {
	// your code goes here
	
	int t;
	cin>>t;

	while(t--){
    int n,m;
	 cin>>n>>m;
	 createstring(n, m);
	 
	}
	return 0;
}