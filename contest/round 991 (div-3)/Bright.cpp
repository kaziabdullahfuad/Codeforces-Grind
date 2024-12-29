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

    	// observation of this problem is parity
    	// odd indices ar summation and even indices ar summation
    	// duitar summation/n should be equal
    	ll n;
    	cin>>n;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	//printVector(v1);

    	vector<ll> even;
    	vector<ll> odd;

    	for(int i=0;i<n;i++){

    		if(i%2==0){
    			odd.push_back(v1[i]);
    		}
    		else{
    			even.push_back(v1[i]);
    		}
    	}

    	ll sum1,sum2;
    	ll sum=accumulate(all(v1),0ll);
    	sum1=accumulate(all(odd),0ll);
    	sum2=accumulate(all(even),0ll);

    	//cout<<sum1<<" "<<sum2<<endl;

    	ll len1=odd.size();
    	ll len2=even.size();
    	
    	if(sum1%len1!=0 || sum2%len2!=0){
    		//cout<<"HERE"<<endl;
    		cout<<"NO"<<endl;
    	}
    	else if((sum1/len1)==(sum2/len2)){
    		// cout<<"HERE"<<endl;
    		// cout<<sum1/len1<<endl;
    		// cout<<sum2/len2<<endl;
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}