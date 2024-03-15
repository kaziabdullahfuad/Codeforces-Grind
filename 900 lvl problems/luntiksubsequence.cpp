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
    	ll sum=0;
    	ll no_ones=0;
    	ll no_zeroes=0;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		sum+=v1[i];
    		if(v1[i]==0){
    			no_zeroes++;
    		}
    		else if(v1[i]==1){
    			no_ones++;
    		}
    	}

    	
    	if(no_ones==0){
    		cout<<0<<endl;
    	}
    	else if(no_zeroes==0){

    		cout<<no_ones<<endl;
    	}
    	else{

    		ll sub_ones=pow(2,no_zeroes);

    		cout<<sub_ones*no_ones<<endl;
    	}


    	t--;
    }

    return 0;
}