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

    	ll n,w;
    	cin>>n>>w;
    	vector<ll> v1(n);
    	
    	// multiset<ll,greater<ll>> m1;
    	multiset<ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		
    	}

    	sort(all(v1),greater<ll>());

    	// if(m1.find(v1[0])==m1.end()){
    	// 	cout<<"YES"<<endl;
    	// 	m1.insert(w);
    	// }

    	// auto it=m1.lower_bound(v1[0]);
    	// debug(*it)
    	// debug(v1[0])
    	// ll hold=*it-v1[0];
    	// debug(hold)
    	ll ans=0;
    	for(int i=0;i<n;i++){

    		 //debug(i)
    		// debug(v1[i])
    		if(m1.lower_bound(v1[i])==m1.end()){

    			// maane pai nai
    			//cout<<"PAI NAI so ans barbe and width bhorbo"<<endl;
    			ans++;
    			m1.insert(w);
    		}
    		//debug(ans)
    		//cout<<"SIZE of multiset: "<<m1.size()<<endl;
    		
    		// finding the val
    		auto it=m1.lower_bound(v1[i]);
    		// kototuk baki
    		m1.insert(*it-v1[i]);
    		// now jeta chilo oita ber kore dibo
    		m1.erase(m1.find(*it));

    		// if(m1.size()>=1){
    		// 	cout<<"SET ITERATION: ";
    		// 	for(auto temp:m1){
    		// 		cout<<temp<<" ";
    		// 	}
    		// 	cout<<endl;
    		// }
    	}

    	// debug(ans)
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}