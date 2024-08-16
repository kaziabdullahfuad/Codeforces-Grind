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
    	
    	if(n==2){

    		if(v1[0]==v1[1]){
    			cout<<0<<endl;
    		}
    		else{
    			cout<<max(v1[0],v1[1])<<endl;
    		}
    	}
    	else{
    	// puratar gcd

    	ll hold=0;
    	for(int i=0;i<n;i++){
    		hold=__gcd(v1[i],hold);
    	}

    	//cout<<hold<<endl;
    	ll one_gcd=0;
    	ll two_gcd=0;
    	for(int i=0;i<n;i+=2){
    		//cout<<v1[i]<<" ";
    		one_gcd=__gcd(one_gcd,v1[i]);
    	}
    	//cout<<endl;
    	for(int i=1;i<n;i+=2){
    		//cout<<v1[i]<<" ";
    		two_gcd=__gcd(two_gcd,v1[i]);
    	}
    	//cout<<endl;
    	//debug(one_gcd)
    	//debug(two_gcd)

    	bool found_one=true;
    	bool found_two=true;

    	for(int i=0;i<n;i+=2){
    		
    		if(v1[i]%two_gcd==0){
    			found_two=false;
    			break;
    		}
    	}

    	for(int i=1;i<n;i+=2){
    		
    		if(v1[i]%one_gcd==0){
    			found_one=false;
    			break;
    		}
    	}

    	if(found_one){
    		cout<<one_gcd<<endl;
    	}
    	else if(found_two){
    		cout<<two_gcd<<endl;
    	}
    	else{
    		cout<<0<<endl;
    	}

    }

    	t--;
    }

    return 0;
}