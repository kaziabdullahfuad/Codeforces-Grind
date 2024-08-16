#include<iostream>
#include<numeric>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
//const int len=2e5+5;
const ll INF = 0xFFFFFFFFFFFFFFFLL;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	 int n, m, k; 
        cin >> n >> m >> k;
        string s;
        cin >> s;
        vector<int> dp(n + 2, -1);
        dp[0] = k;
        for (int i = 1; i <= n + 1; i++) {
            if (i != n + 1 && s[i - 1] == 'C') 
                continue;
            for (int t = 1; t <= m; t++)
                if (i - t >= 0 && (i - t == 0 || s[i - t - 1] == 'L'))
                    dp[i] = max(dp[i], dp[i - t]);
            if (i > 1 && s[i - 2] == 'W') 
                dp[i] = max(dp[i], dp[i - 1] - 1);
        }
        if (dp[n + 1] >= 0) 
            cout << "YES\n";
        else 
            cout << "NO\n";

    	t--;
    }

    return 0;
}