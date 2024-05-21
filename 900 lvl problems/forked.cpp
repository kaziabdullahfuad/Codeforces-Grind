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
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	 int a, b; cin >> a >> b;
        int x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        set<pair<int, int>> st1, st2;
        for(int j = 0; j < 4; j++){
            st1.insert({x1+dx[j]*a, y1+dy[j]*b});
            st2.insert({x2+dx[j]*a, y2+dy[j]*b});
            st1.insert({x1+dx[j]*b, y1+dy[j]*a});
            st2.insert({x2+dx[j]*b, y2+dy[j]*a});
        }
        int ans = 0;
        for(auto x : st1)
        	//cout<<x.first<<" "<<x.second<<endl;
            if(st2.find(x) != st2.end())
                ans++;
        cout << ans << '\n';

    	t--;
    }

    return 0;
}