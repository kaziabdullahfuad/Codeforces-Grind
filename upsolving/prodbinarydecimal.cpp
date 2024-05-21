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
bool okay(ll j){

	bool found=true;

	while(j){

		ll val=j%10;
		if(val>1){
			found=false;
			break;
		}
		j/=10;
	}

	if(found) return true;
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    ll len=1e5;
    vector<ll> holder;

   	//holder.push_back(1);
   	// prothome shob binary gula rakhbo
   	for(int i=1;i<=len;i++){

   		ll val=i;

   		bool found=true;

   		while(val){

   			ll mod=val%10;
   			if(mod>1){
   				found=false;
   				break;
   			}
   			val/=10;
   		}

   		if(found){
   			holder.push_back(i);
   		}

   	}

   	//cout<<holder.size()<<endl;

   	//printVector(holder);

   	// now dekhbo puratar multiple less than 10^5

   	vector<ll> result(len+1);
   	result[0]=1;
   	result[1]=1;
   	ll mul;
    for(ll i=0;i<holder.size();i++){

    	for(ll j=1;j<=len;j++){

    		if(result[j] && (holder[i]*j)<=len){

    			mul=holder[i]*j;
    			result[mul]=1;
    		}

    	}
    }

    //cout<<result.size()<<endl;
    //cout<<result[14641]<<endl;

    // for(auto x:result){
    // 	cout<<x<<" ";
    // }
    // cout<<endl;

    


    while(t){

    	ll n;
    	cin>>n;

    	if(result[n]==1){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}