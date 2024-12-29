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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll k,l1,r1,l2,r2;
    	cin>>k>>l1>>r1>>l2>>r2;

    	ll u = 1;
    	ll ans = 0;
	    while(u <= 1e9) {
	        ans += max(min(r2/u,r1) - max((l2 + u-1)/u , l1) + 1, 0LL); 
	 
	        u *= k;
	    }
	    
	    cout << ans << endl;

    	t--;
    }

    return 0;
}