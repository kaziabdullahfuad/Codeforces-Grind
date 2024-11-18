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
bool isPrime(ll n,ll &val){


	for(int i=2;i*i<=n;i++){

		if(n%i==0){
			val=i;
			return false;
		}
	}

	return true;
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

    	// find all divisors and sort

    	vector<ll> divisors;

    	// first dekho ata prime diye gochano jai ki na
    	ll hold=n;
    	ll val=2;
    	for(ll i=2;i<=n;i++){

    		//debug(i)
    		//debug(n)
    		while(n%i==0){

    			divisors.push_back(i);
    			n/=i;
    		}

    		if(n==1){
    			break;
    		}
    		else if(isPrime(n,val)){
    			break;
    		}
    		else{
    			i=val-1;
    		}
    	}

    	if(n>1){
    		divisors.push_back(n);
    	}
    	sort(all(divisors));
    	//printVector(divisors);



    	if(divisors.size()<=2){

    		cout<<"NO"<<endl;
    	}
    	else{


    		ll first=divisors[0];
    		ll second=first;

    		//printVector(divisors);

    		for(int i=0;i<divisors.size();i++){

    			if(divisors[i]!=second){

    				second=divisors[i];
    				break;
    			}
    		}

    		//debug(second)

    		if(first!=second){

    			ll third=hold/(first*second);


    			if(hold%third==0 && third!=first && third!=second
    				&& third!=1){
    				cout<<"YES"<<endl;
    				cout<<first<<" "<<second<<" "<<third<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    		else{

    			// first second shoman
    			//cout<<"HERE"<<endl;
    			second=first*first;
    			//debug(second)
    			ll third=hold/(first*second);
    			//debug(third)

    			if(hold%third==0 && third!=first && third!=second
    				&& third!=1){
    				cout<<"YES"<<endl;
    				cout<<first<<" "<<second<<" "<<third<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}

    	}

    	t--;
    }

    return 0;
}