#include<bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
int dp[40005][500];
vector<int> pl;
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
void solve(){
    int n;cin >> n;
    cout << dp[n][0] << '\n';
}
bool check(int x){
    string s=to_string(x),s1=s;
    reverse(s.begin(),s.end());
    return s1==s;
}
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    for(int i=1;i<=40000;i++){
        if(check(i)) pl.push_back(i);
    }
    //cout<<pl.size()<<endl;
    //printVector(pl);
    for(int i=0;i<=(int)pl.size();i++) dp[0][i]=1;



    for(int i=1;i<=40000;i++){
        for(int j=0;j<(int)pl.size();j++){
            int v=pl[j];
            if(i<pl[j]) break;
            dp[i][j]=dp[i-v][j];
        }
        for(int j=(int)pl.size()-1;j>=0;j--){
            dp[i][j]+=dp[i][j+1];
            if(dp[i][j]>=mod) dp[i][j]-=mod;
        }
    }
    int t;cin >> t;
    while(t--) solve();
}

