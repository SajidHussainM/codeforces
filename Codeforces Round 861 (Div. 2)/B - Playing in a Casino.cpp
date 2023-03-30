#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define int long long
                
                
                
signed main()
{
int t;
cin>>t;
while(t--)
{
    int n , m ;
    cin>>n >> m ;

    vector<int> v[m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int x ; cin >> x;
            v[j].push_back(x);
        }
    }

    for(int i=0; i<m; i++)    sort(v[i].begin() , v[i].end());
    
    int ans = 0;
    
    for(int i=0; i<m; i++){
        vector<int> res(n,0);
            res[n-1] = v[i][n-1];
        for(int j=n-2; j>=0; j--){
            res[j] = res[j+1] + v[i][j];
        }
        
        for(int j=0; j<n-1; j++){
            ans += res[j+1] - (n - 1 - j ) * v[i][j];
        }
        
    }
    
    cout << ans << endl;
}
    return 0;
}
