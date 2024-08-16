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
bool is_pali(vector<ll> &v1){

	ll n=v1.size();
	ll left=0;
	ll right=n-1;
	bool found=true;
	while(left<right){

		if(v1[left]!=v1[right]){
			//cout<<left<<" "<<right<<endl;
			found=false;
			break;
		}

		left++;
		right--;
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

    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1 || is_pali(v1)){
    		cout<<"YES"<<endl;
    	}
    	else{

    		// find first instance where they differ
    		vector<ll> v2;
    		vector<ll> v3;

    		ll left=0;
    		ll right=n-1;
    		ll val1,val2;
    		while(left<right){

    			if(v1[left]!=v1[right]){
    				val1=v1[left];
    				val2=v1[right];
    				break;
    			}
    			left++;
    			right--;
    		}

    		for(int i=0;i<n;i++){

    			if(v1[i]!=val1){
    				v2.push_back(v1[i]);
    			}
    			if(v1[i]!=val2){
    				v3.push_back(v1[i]);
    			}
    		}

    		//cout<<val1<<" "<<val2<<endl;

    		//printVector(v2);
    		//printVector(v3);

    		if(is_pali(v2) || is_pali(v3)){

    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}

    	t--;
    }

    return 0;
}