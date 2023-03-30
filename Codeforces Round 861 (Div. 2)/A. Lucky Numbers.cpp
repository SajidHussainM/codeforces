#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
                
                
                
int main()
{
int t;
cin>>t;
while(t--)
{
   int l , r;
   cin >> l >> r;
 
   int lucky = 0 ,  maxLucky = INT_MIN;
 
   for(int i=max(l,r-100); i<=r; i++){
       string s = to_string(i);
       sort(s.begin() , s.end());
 
       if(  int(s[s.size()-1] )  -  int(s[0])  > maxLucky){
           maxLucky = int(s[s.size()-1]) - int(s[0]);
            lucky = i;
       }
       
       if(maxLucky == 9) break ;
   }
 
    cout<< lucky <<endl ;            
                
}
    return 0;
}
