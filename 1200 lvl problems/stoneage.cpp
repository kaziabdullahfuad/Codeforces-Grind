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

    ll n,q;
    cin>>n>>q;
    vector<ll> v1(n);
    
    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }

    //printVector(v1);
    bool two_hoise=false;
    
    ll sum=accumulate(all(v1),0ll);
    //debug(sum)
    ll last_val=0;
    set<ll> s1;
    while(q){

    	ll t;
    	cin>>t;
    	//debug(t)
    	//debug(q)
    	if(t==1){
    		// i and x hobe
    		ll i,x;
    		cin>>i>>x;
    		//cout<<i<<" "<<x<<endl;
    		if(!two_hoise){
    			// tahole just simply kaaj korbe karon 2 ashei nai
    			sum-=v1[i-1];
    			sum+=x;
    			v1[i-1]=x;
    			cout<<sum<<endl;
    		}
    		else{

    			// two hoisilo nd shei last two ar x value last a

    			// check korte hobe set a shei element ta ase ki na
    			// jodi na thake tahole oita te last val ase
    			// ar jodi thake mane oita change kora hoise

    			if(s1.find(i)==s1.end()){

    				// pai nai mane ata unchanged
    				sum-=last_val;
    				sum+=x;
    				v1[i-1]=x;
    				cout<<sum<<endl;
    				// set a ata rekhe dibo je change hoise
    				s1.insert(i);
    			}
    			else{

    				// paise mane ata ageo ekbar change hoise
    				sum-=v1[i-1];
    				sum+=x;
    				v1[i-1]=x;
    				cout<<sum<<endl;
    			}

    		}

    	}
    	else{

    		ll x;
    		cin>>x;

    		//cout<<x<<endl;
    		// aschee two
    		two_hoise=true;
    		sum=(n*x);
    		last_val=x;

    		cout<<sum<<endl;

    		s1.clear();

    	}

    	q--;
    }

    return 0;
}