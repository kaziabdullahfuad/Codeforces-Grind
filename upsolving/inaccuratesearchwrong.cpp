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
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,m,k;
    	cin>>n>>m>>k;

    	// k= required number of matching elements
    	vector<ll> v1(n+1);
    	set<ll> s1;
    	for(int i=1;i<=n;i++){
    		cin>>v1[i];
    	}

    	vector<ll> v2(m+1);

    	for(int i=1;i<=m;i++){
    		cin>>v2[i];
    		s1.insert(v2[i]);
    	}
    	// for(int i=1;i<=n;i++){
    	// 	cout<<v1[i]<<" ";
    	// }
    	// cout<<endl;
    	ll count=0;
    	for(int i=1;i<=m-1;i++){

    		if(s1.find(v1[i])!=s1.end()){
    			cout<<v1[i]<<endl;
    			count++;
    		}
    	}

    	ll left=1;
    	ll right=m;
    	debug(count)
    	ll ans=0;
    	while(right<=n){

    		if(s1.find(v1[right])!=s1.end()){
    			count++;
    		}
    		
    		//debug(left) debug(right)
    		//debug(count)
    		if(count>=k){
    			ans++;
    		}

    		if(s1.find(v1[left])!=s1.end()){
    			count--;
    		}

    		left++;
    		right++;
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}