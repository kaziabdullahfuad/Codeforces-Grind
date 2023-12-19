//problem link:https://codeforces.com/problemset/problem/1850/C
#include<iostream>
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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	vector<string> mp(8);
    for (int i = 0; i < 8; i++) {
        cin >> mp[i];
    }
    // for(auto x:mp){
    // 	cout<<x<<endl;
    // }
    
    string ans;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (mp[j][i] != '.') {
                ans += mp[j][i];
            }
        }
    }
 
    cout << ans << '\n';

    	// string s="abcde";
		// string monga;
		// monga.append(s,1,3); // from b to e
		// cout<<monga<<endl; // shows bcd

    	// for(int i=0;i<n;i++){
    	// 	string holder="";
    	// 	bool found=false;
    	// 	for(int j=0;j<n;j++){

    	// 		if(v1[j][i]!='.'){
    	// 			cout<<v1[j][i]<<endl;
    	// 		}
    	// 	}
    	// 	cout<<holder<<endl;
    	// }


    	t--;
    }

    return 0;
}