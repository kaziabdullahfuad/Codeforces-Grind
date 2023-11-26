#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
void printVector(vector<ll> v1){

	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll summation=n*(n+1)/2;
    //cout<<summation<<endl;

    if(summation%2==0){
    	cout<<"YES"<<endl;
    	ll summation_half=summation/2;
    	//cout<<summation_half<<endl;
    	vector<ll> v1;

    	for(int i=1;i<=n;i++){
    		v1.push_back(i);
    	}
    	//printVector(v1);

    	ll left=0;
    	ll right=1;
    	ll sum=0;
    	sum+=v1[left];

    	while(right<v1.size()){
    		//cout<<sum<<endl;
    		if(sum==summation_half){
    			break;
    		}
    		else if(sum>summation_half){
    			sum-=v1[left];
    			left++;
    		}
    		else{
    			sum+=v1[right];
    			right++;
    		}
    	}

    	//cout<<sum<<endl;
    	// cout<<left<<endl;
    	// cout<<right<<endl;

    	cout<<right-left<<endl;
    	for(ll i=left;i<right;i++){
    		cout<<v1[i]<<" ";
    	}
    	cout<<endl;

    	cout<<n-(right-left)<<endl;
    	for(ll i=0;i<v1.size();i++){

    		if(i<left || i>right-1){
    			cout<<v1[i]<<" ";
    		}
    	}

    }
    else{
    	cout<<"NO"<<endl;
    }

    return 0;
}