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
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return (a.second < b.second);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,p;
    	cin>>n>>p;
    	vector<ll> v1(n);
    	
    	
    	vector<pair<ll,ll>> v2(n);

    	for(int i=0;i<n;i++){

    		cin>>v2[i].first;

    	}

    	for(int i=0;i<n;i++){

    		cin>>v2[i].second;

    	}

    	
    	sort(all(v2),greater<pair<ll,ll>>());
    	sort(all(v2),sortbysec);
    	// cout<<"AFTER SORTING"<<endl;
    	// for(auto x:v2){

    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }

    	ll min_val=p;
    	ll ans=p;

    	if(n==1){
    		cout<<p<<endl;
    	}
    	else if(min_val<=v2[0].second){

    		cout<<n*min_val<<endl;
    	}
    	else{

    		ll remain=n-1;

    		

    		for(int i=0;i<n;i++){

    			//cout<<v2[i].first<<" "<<v2[i].second<<endl;
    			//debug(remain)
    			//debug(ans)
    			if(p<=v2[i].second){
    				ans+=(remain*p);
    				break;
    			}
    			else if(v2[i].first>=remain){

    				ans+=(remain*v2[i].second);
    				break;
    			}
    			else{

    				ans+=(v2[i].second*v2[i].first);
    				remain-=v2[i].first;
    			}
    		}

    		cout<<ans<<endl;

    	}

    	t--;
    }

    return 0;
}