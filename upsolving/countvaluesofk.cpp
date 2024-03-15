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

    	ll a,b,l;
    	cin>>a>>b>>l;

    	ll x=1;
    	ll a_count=0;
    	vector<ll> v1;
    	v1.push_back(1);
    	while(x<=l){

    		x*=a;
    		if(x>l)break;
    		v1.push_back(x);
    		//cout<<x<<endl;
    		a_count++;
    	}

    	//cout<<a_count<<endl;
    	//printVector(v1);

    	vector<ll> v2;
    	v2.push_back(1);

    	ll y=1;
    	ll b_count=0;

    	while(y<=l){

    		y*=b;
    		if(y>l)break;
    		v2.push_back(y);
    		//cout<<y<<endl;
    		b_count++;
    	}

    	//debug(b_count)
    	//printVector(v2);

    	// divisors of l
    	vector<ll> divisor;

    	for(int i=1;i*i<=l;i++){

    		if(l%i==0){

	    		if((l%i)==i){
	    			//debug(i)
	    			divisor.push_back(i);
	    		}
	    		else{
	    			//debug(i)
	    			//debug(l/i)
	    			divisor.push_back(i);
	    			divisor.push_back(l/i);
	    		}
    		}
    	}

    	sort(all(divisor));

    	//printVector(divisor);

    	//cout<<divisor.size()<<endl;
    	ll ans=0;
    	set<int> s1;
    	// divisors
    	for(int i=0;i<divisor.size();i++){

    		for(int j=0;j<v1.size();j++){

    			for(int k=0;k<v2.size();k++){

    				
    				ll mul=divisor[i]*v1[j]*v2[k];

    				if(mul==l){
    					s1.insert(divisor[i]);
    					// debug(divisor[i]);
    					// debug(v1[j]);
    					// debug(v2[k]);
    					ans++;
    					//break;
    				}
    			}
    		}
    	}

    	//debug(ans);
    	//cout<<ans<<endl;

    	cout<<s1.size()<<endl;

    	t--;
    }

    return 0;
}