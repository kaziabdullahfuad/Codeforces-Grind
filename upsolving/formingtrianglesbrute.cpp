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
ll facto(ll val){

	ll result=1;
	for(ll i=2;i<=val;i++){

		result*=i;
	}

	return result;
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

    	// 7
		//1 1 1 1 1 1 1
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}

    	// for(auto x:m1){

    	// 	cout<<x.first<<" "<<x.second<<endl;
    	// }
    	
    	sort(all(v1),greater<ll>());
    	int hold=n;

    	//cout<<facto(3)<<endl;
    	//cout<<facto(2)<<endl;

    	//cout<<facto(3)/(facto(2)*facto(1))<<endl;
    	ll sum=0;
    	for(int i=0;i<=n-3;i++){
    		hold--;
    		m1[v1[i]]--;

    		cout<<v1[i]<<endl;
    		if(m1[v1[i]]>=1){
    			// combination
    			cout<<"ASCHE"<<endl;
    			cout<<facto(hold)/(facto(hold-2)*facto(2))<<endl;
    			sum+=facto(hold)/(facto(hold-2)*facto(2));
    			//cout<<sum<<endl;
    		}
    	}

    	cout<<sum<<endl;
    	//debug(sum);

    	t--;
    }

    return 0;
}