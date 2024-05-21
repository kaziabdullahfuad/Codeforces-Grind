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

    	vector<ll> v1(n);
    	vector<ll> v2(m);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    	}

    	map<ll,ll> m1,m2,m3;

    	for(int i=0;i<m;i++){
    		m2[v2[i]]++;
    	}

    	ll cur=0;
    	ll ans=0;

    	// for(auto x:m2){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	for(int i=0;i<m;i++){
    		//debug(v1[i])
    		// jodi a ar moddhe thake
    		if(m2[v1[i]]>0){
    			cur++;
    			m2[v1[i]]--;
    			m1[v1[i]]++;
    		}
    		else{
    			m3[v1[i]]++;
    		}
    	}

    	if(cur>=k)ans++;

    	// for(auto x:m1){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }
    	// cout<<"M2 start"<<endl;
    	// for(auto x:m2){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	// for(auto x:m3){
    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	// debug(cur)

    	for(int i=m;i<n;i++){

    		ll x=v1[i];

    		// jodi m2 te thake tahole cur barbe
    		// ar m2 theke shorabo ar m1 a add korbo
    		if(m2[x]>0){

    			cur++;
    			m2[x]--;
    			m1[x]++;
    		}
    		else{
    			// useless
    			m3[x]++;
    		}

    		// first element bcs sliding window technique here
    		ll y=v1[i-m];

    		if(m3[y]>0){
    			// useless element
    			m3[y]--;
    		}
    		else{

    			cur--;
    			m2[y]++;
    			m1[y]--;
    		}

    		if(cur>=k)ans++;
    		//debug(cur);
    	}

    	cout<<ans<<endl;





    	t--;
    }

    return 0;
}