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
    	vector<ll> v2(n);
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	//printVector(v1);
    	//printVector(v2);

    	ll min_val1=*min_element(all(v1));

    	ll min_val2=*min_element(all(v2));

    	ll sum1=0,sum2=0;
    	//cout<<min_val1<<" "<<min_val2<<endl;

    	for(int i=0;i<n;i++){

    		sum1+=(v1[i]+min_val2);
    		sum2+=(v2[i]+min_val1);
    		//cout<<sum1<<endl;
    	}

    	//cout<<sum1<<" "<<sum2<<endl;

    	ll ans=min(sum1,sum2);
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}