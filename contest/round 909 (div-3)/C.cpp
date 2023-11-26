#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
void printVector(vector<ll> v1){

	for(auto x: v1){
		cout<<x<<" ";
	}

	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t){

    	ll n;
    	cin>>n;

    	vector<ll> v1;

    	for(int i=0;i<n;i++){
    		ll val;
    		cin>>val;
    		v1.push_back(val);
    	}

    	//printVector(v1);

    	ll sum=v1[0];
    	ll left=0;
    	ll right=1;
    	ll max_val=sum;
    	ll holder=sum;

    	while(right!=v1.size()){

    		if((v1[left]%2==0 && v1[right] %2==0) || (v1[left]%2!=0 && v1[right]%2!=0)){
    			holder=max(v1[left],v1[right]);
    			sum=v1[right];
    			left++;
    			right++;
    		}
    		else{

    			if(v1[right]>sum+v1[right]){
    				sum=v1[right];
    				right++;
    				left++;
    			}
    			else{
    				// cout<<max_val<<endl;
    				// cout<<v1[left]<<endl;
    				// cout<<v1[right]<<endl;
    				// cout<<"Before adding "<<sum<<endl;
    				sum+=v1[right];
    				// cout<<"After adding "<<sum<<endl;
    				// if(sum==13){

    				// 	cout<<left<<endl;
    				// 	cout<<right<<endl;
    				// 	// cout<<v1[left]<<endl;
    				// 	// cout<<v1[right]<<endl;
    				// }
    				right++;
    				left++;
    			}
    		}

    		// if(sum==6){
    		// 	cout<<"SIXER STARTS"<<endl;
    		// 	cout<<max_val<<endl;
    		// 	cout<<sum<<endl;
    		// 	cout<<v1[left]<<endl;
    		// 	cout<<v1[right]<<endl;
    		// }

    		if(sum>max_val){
    			max_val=sum;
    		}
    		if(holder>max_val){
    			max_val=holder;
    		}
    		// cout<<max_val<<endl;
    		// cout<<v1[left]<<endl;
    		// cout<<v1[right]<<endl;
    	}

    	//cout<<sum<<endl;
    	cout<<max_val<<endl;

    	t--;
    }

    return 0;
}