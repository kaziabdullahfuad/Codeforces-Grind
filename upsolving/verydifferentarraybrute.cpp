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
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,m;
    	cin>>n>>m;

    	vector<ll> v1(n);
    	vector<ll> v2(m);
    	ll max_val=-1;
    	ll min_val=1e10;
    	ll max_valtwo=-1;
    	ll min_valtwo=1e10;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		min_val=min(min_val,v1[i]);
    		max_val=max(max_val,v1[i]);
    	}

    	for(int i=0;i<m;i++){
    		cin>>v2[i];
    		min_valtwo=min(min_valtwo,v1[i]);
    		max_valtwo=max(max_valtwo,v1[i]);
    	}	

    	// printVector(v1);
    	// printVector(v2);

    	// if(abs(min_val-max_valtwo)<abs(max_val-min_valtwo)){
    	// 	reverse(v1.begin(),v1.end());
    	// }

    	sort(v1.begin(),v1.end());
    	sort(v2.begin(),v2.end());

    	//reverse(v1.begin(),v1.end());
    	//printVector(v1);
    	 printVector(v1);
    	// printVector(v2);

    	ll sum=0;
    	ll left=0;
    	ll right=m-1;

    	// test case 8 a jhamela 5 5
    	// out pai 19 but hobe 25
    	for(int i=0;i<n;i++){

    		// range ar khela
    		if(abs(v1[i]-v2[left])>abs(v1[i]-v2[right])){

    			ll val=abs(v1[i]-v2[left]);
    			//cout<<val<<endl;
    			sum+=val;
    			//cout<<sum<<endl;
    			left++;
    		}
    		else{

    			ll val=abs(v1[i]-v2[right]);
    			//cout<<val<<endl;
    			sum+=val;
    			//cout<<sum<<endl;
    			right--;
    		}
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}