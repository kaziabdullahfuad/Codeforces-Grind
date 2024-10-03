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
bool checkval(ll mid,ll k){


	ll first=mid/2;
	
	if(first>=k){
		return true;
	}

	// a chara dekho 
	ll mid_point=(mid+1)/2ll;
	if(mid_point==1){
		return false;
	}
	ll ar_double=(mid_point*2ll);
	if(ar_double==mid){
		mid_point++;
	}
	if(mid==10){
		//debug(mid)
		//debug(mid_point)
	}

	if(mid==11){
		//debug(mid_point)
	}
	ll segments=mid-mid_point+1;
	ll ans=0;

	if(mid_point%2==0){

		ans+=(segments/2);
	}
	else{

		ans+=(segments+1)/2;
	}
	if(mid==11){

		//cout<<"EKHANE"<<endl;
		//debug(segments)
		//debug(ans)
	}
	ans+=first;
	if(mid==11){
		//debug(ans)
	}
	if(ans>=k){
		return true;
	}
	else{
		return false;
	}

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll k;
    	cin>>k;

    	ll low=0;
    	ll high=LLONG_MAX;
    	ll ans=LLONG_MAX;
    	while(low<=high){


    		ll mid=low+(high-low)/2;
    		//debug(mid)
    		if(checkval(mid,k)){

    			// ar mane paise now check aro choto jaga te ase ki na
    			ans=min(ans,mid);
    			high=mid-1;
    		}
    		else{

    			// pai nai so boro jagai dekho

    			low=mid+1;
    		}
    	}

    	//cout<<ans<<endl;
    	//ans++;
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}