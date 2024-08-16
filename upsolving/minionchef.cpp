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
bool check(ll mid,vector<ll> &v1,ll n,ll h){

	// 0 diye divide korate problem hocchilo
	// so ata ekta edge case.
	if(mid==0){
		return false;
	}
	ll hour=0;

	for(int i=0;i<n;i++){

		if(mid>=v1[i]){
			hour++;
		}
		else{
			hour+=(v1[i])/mid;

			if(v1[i]%mid>=1){
				hour++;
			}
		}
	}

	//debug(hour)
	//debug(hour)
	if(hour<=h){
		return true;
	}

	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,h;
    	cin>>n>>h;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);
    	
    	ll max_val=*max_element(all(v1));

    	ll low=0;
    	ll high=1e9;

    	//check(3,v1,n,h);
    	ll ans=high;

    	while(low<=high){

    		ll mid=(low+high)/2;
    		//debug(mid)
    		if(check(mid,v1,n,h)){
    			//jodi kaaj kore tahole aro choto ase ki na dekhbo
    			// jehetu kaaj hocche minimize kora
    			ans=mid;
    			high=mid-1;
    		}
    		else{
    			low=mid+1;
    		}
    	}

    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}