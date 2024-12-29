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
bool check(string s,ll mid){


	//map<char,ll> m1;
	map<char,ll> m1;
	ll n=s.size();
	bool found=false;
	
	for(int i=0;i<mid;i++){

		//cout<<s[i]<<" ";
		m1[s[i]]++;
	}
	
	if(m1.size()>=3){
		return true;
	}
	ll start=0;
	for(int i=mid;i<n;i++){

		
		m1[s[i]]++;
		m1[s[start]]--;
		if(m1.size()>=3){
			//cout<<"YES"<<endl;
			bool temp=true;
			for(auto x:m1){
				if(x.second==0){
					temp=false;
					break;
				}
			}
			//cout<<"DONE"<<endl;
			if(temp){
				found=true;
				break;
			}
			
		}

		//s1.erase(s[start]);
		start++;
	}
	// 
	// debug(found)
	return found;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	string s;
    	cin>>s;

    	ll n=s.size();
    	//debug(n)
    	map<char,ll> m1;
    	for(int i=0;i<n;i++){

    		m1[s[i]]++;
    	}

    	if(m1.size()<=2){

    		cout<<0<<endl;
    	}
    	else{

    		ll low=0;
    		ll high=n-1;
    		ll ans=n;
    		while(low<=high){

    			ll mid=low+(high-low)/2ll;
    			//debug(mid)
    			if(check(s,mid)){

    				
    				ans=min(ans,mid);
    				high=mid-1;
    			}
    			else{
    				low=mid+1;
    			}
    		}

    		cout<<ans<<endl;
    	}


    	t--;
    }

    return 0;
}