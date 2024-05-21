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
ll mod=1e9+7;
//ll mod=15;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	// age to highest contiguous sum paite hobe
    	ll n,k;
    	cin>>n>>k;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll max_val=0;
    	ll val=0;
    	ll left=0;
    	ll right=0;
    	ll act_left=0;
    	ll act_right=0;
    	ll neg_count=0;
    	while(left<n && right<n){

    		// val paisi ekta
    		// debug(left) debug(right) debug(val) debug(max_val)
    		// debug(v1[right])

    		if(v1[right]<0){
    			neg_count++;
    		}

    		if(v1[right]>0){

    			val+=v1[right];
    			//left=right;
    			if(val>max_val){

    				max_val=val;
    				act_left=left;
    				act_right=right;
    			}
    		}
    		else if(v1[right]<0 && val+v1[right]>0){

    			val+=v1[right];
    		}
    		else if(v1[right]<0 && val+v1[right]<=0){

    			left=right;
    			left++;
    			val=0;
    		}
    		right++;
    	}

    	//debug(max_val);
    	//cout<<act_left<<" "<<act_right<<endl;

    	// jodi act left=0 and act right=n-1 hoi tahole puratai nise

    	if(max_val==0 && neg_count>=1){

    		// ar mane shob negative
    		//debug(max_val)
    		ll sum=0;
    		for(auto x:v1){
    			sum+=x;
    		}

    		// cout<<sum<<endl;
    		// cout<<sum%mod<<endl;
    		// cout<<mod<<endl;

    		if(abs(sum)==mod){
    			cout<<0<<endl;
    		}
    		else{
    			cout<<mod-(abs(sum)%mod)<<endl;
    		}


    	}
    	else if(max_val==0 && neg_count==0){
    		cout<<0<<endl;
    	}
    	else if(act_left==0 && act_right==n-1){

    		ll holder=max_val;

    		for(ll i=1;i<=k;i++){

    			holder%=mod;
    			//debug(holder)
    			holder*=2;
    			//debug(holder)
    		}
    		cout<<holder%mod<<endl;
    	}
    	else{

    		ll rest_sum=0;
    		//debug(max_val)

    		for(int i=0;i<n;i++){

    			if(i<act_left || i>act_right){
    				rest_sum+=v1[i];
    			}
    		}
    		//debug(rest_sum)

    		ll holder=max_val;

    		for(ll i=1;i<=k;i++){

    			holder%=mod;
    			//debug(holder)
    			holder*=2;
    			//debug(holder)
    		}
    		holder=holder%mod;

    		//cout<<rest_sum<<endl;
    		holder+=rest_sum;

    		if(holder>=0){
    			cout<<holder%mod<<endl;
    		}
    		else{

    			if(abs(holder)==mod){
    				cout<<0<<endl;
    			}
    			else{
    				cout<<mod-(abs(holder)%mod)<<endl;
    			}
    		}

    	}

    	t--;
    }

    return 0;
}