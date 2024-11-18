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
    	
    	ll total=accumulate(all(v1),0ll);

    	//debug(total)

    	ll max_val=v1[0];
    	ll min_val=0;
    	ll sum=0;
    	vector<ll> prefix(n);
    	prefix[0]=v1[0];

    	for(int i=1;i<n;i++){

    		prefix[i]=prefix[i-1]+v1[i];
    	}

    	//printVector(prefix);

    	for(int i=0;i<n-1;i++){

    		//ll hold=prefix[i]-min_val;
    		//cout<<i<<" "<<prefix[i]<<" "<<hold<<endl;
    		max_val=max(max_val,prefix[i]-min_val);
    		//debug(max_val)
    		if(prefix[i]<min_val){
    			min_val=prefix[i];
    		}
    	}

    	//debug(max_val)

    	for(int i=1;i<n;i++){
    		prefix[i]-=prefix[0];
    	}
    	ll second_max=v1[1];
    	min_val=0;
    	sum=0;
    	//printVector(prefix);

    	for(int i=1;i<n;i++){

    		second_max=max(second_max,prefix[i]-min_val);


    		if(prefix[i]<min_val){
    			min_val=prefix[i];
    		}
    	}

    	//debug(second_max)

    	ll ekdom_max=max(max_val,second_max);
    	//debug(ekdom_max)

    	if(total>ekdom_max){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}