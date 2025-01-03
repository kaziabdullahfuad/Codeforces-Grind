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
    	
    	ll max_val=*max_element(all(v1));
    	ll min_val=*min_element(all(v1));
    	vector<ll> a(n,max_val);
    	vector<ll> b;

    	if(n==1){
    		cout<<0<<endl;
    	}
    	else{

    		b.push_back(max_val);

    		sort(all(v1));

    		
    		for(int i=0;i<n-1;i++){

    			b.push_back(min_val);
    		}

    		// printVector(v1);
    		// printVector(a);
    		// printVector(b);

    		ll sum=0;

    		for(int i=0;i<n;i++){

    			sum+=a[i]-b[i];
    		}

    		cout<<sum<<endl;


    	}

    	t--;
    }

    return 0;
}