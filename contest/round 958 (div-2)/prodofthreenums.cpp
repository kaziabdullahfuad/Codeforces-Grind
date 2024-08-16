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
bool check(ll n,ll &val){
	bool found=true;
	
	for(ll i=2;i*i<=n;i++){

		if(n%i==0){
			val=i;
			found=false;
			break;
		}
	}

	return found;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    // finding all prime till 1e9
    // if(check(12973)){
    // 	cout<<"PRIME"<<endl;
    // }
    // else{
    // 	cout<<"NO PRIME"<<endl;
    // }

    while(t){

    	ll n;
    	cin>>n;

    	// find the prime representation of this
    	// if no of divisors less than 3 then no
    	// otherwise if a*b*c then okay
    	// if a*a*a then hobe na if a*a*a*a*a*a a=a,b=a^2, c=a^3

    	vector<ll> divisors;
    	ll val=2;

    	for(ll i=2;i<n;i++){

    		//cout<<i<<" "<<n<<endl;
    		while(n%i==0){
    			n/=i;
    			divisors.push_back(i);
    		}

    		if(check(n,val)){
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

    	ll a=1,b=1,c=1;

    	if(divisors.size()<3){
    		cout<<"NO"<<endl;
    	}
    	else{

    		if(divisors[0]!=divisors[1]){

    			ll a=divisors[0];
    			ll b=divisors[1];

    			for(int i=2;i<divisors.size();i++){

    				c*=divisors[i];
    			}

    			if(a!=1 && b!=1 && c!=1 && c!=b && b!=a && a!=c){

    				cout<<"YES"<<endl;
    				cout<<a<<" "<<b<<" "<<c<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    		else{

    			//cout<<"HERE"<<endl;
    			
    			a=divisors[0];
    			
    			
    			ll i=1;
    			ll len=divisors.size();
    			for(i;i<len;i++){

    				b*=divisors[i];
    				if(b!=a){
    					i++;
    					break;
    				}
    			}

    			

    			for(i;i<len;i++){

    				c*=divisors[i];
    			}

    			//cout<<a<<" "<<b<<" "<<c<<endl;

    			if(a!=1 && b!=1 && c!=1 && c!=b && b!=a && a!=c){

    				cout<<"YES"<<endl;
    				cout<<a<<" "<<b<<" "<<c<<endl;
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