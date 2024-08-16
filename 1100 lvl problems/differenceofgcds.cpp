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
bool check(ll val){
	bool found=true;
	for(ll i=2;i*i<=val;i++){

			if(val%i==0){
				found=false;
				break;
			}
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

    	ll n,l,r;
    	cin>>n>>l>>r;

		bool found=true;
		vector<ll> ans;
		for(ll i=1;i<=n;i++){
			
			ll hold=(l+i-1)/i;

			//cout<<hold<<" "<<hold*i<<endl;;
			if(hold*i>=l && hold*i<=r){
				ans.push_back(hold*i);
			}
			else{
				found=false;
				break;
			}
		}

		if(found){
			cout<<"YES"<<endl;
			printVector(ans);
		}
		else{
			cout<<"NO"<<endl;
		}
    	
    	

    	t--;
    }

    return 0;
}