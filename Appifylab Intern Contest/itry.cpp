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
	set<char> s1;
	ll n=s.size();
	bool found=false;
	for(int i=0;i<=n-mid;i++){

		for(int j=i;j<i+mid;j++){
			//cout<<s[j]<<" ";
			//m1[s[j]]++;
			s1.insert(s[j]);
		}
		//cout<<endl;

		if(s1.size()>=3){

			found=true;
			break;
		}

		//m1[s[i]]--;
		if(s1.size()>=1){
			s1.erase(s[i]);
		}
		//debug(s[i])
	}
	
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
    			
    			if(check(s,mid)){

    				// now look for smaller
    				ans=mid;
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