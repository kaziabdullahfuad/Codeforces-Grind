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

    	// s=sum and k holo divider b hocche divide kore ja pai
    	ll n,k,b,s;
    	cin>>n>>k>>b>>s;

    	// first a dekho je k*b boro naki s theke
   		//debug(t)
    	ll total=((k*(b+1))-1)+((k-1)*(n-1));

    	//cout<<total<<endl;

    	if(n==1){
    		
    		if(s/k==b){

    			cout<<s<<endl;
    		}
    		else{
    			cout<<-1<<endl;
    		}
    	}
    	else if((k*b>s) || total<s){

    		cout<<-1<<endl;
    	}
    	else{
    		
    		ll last=0;

    		ll holder=(k*(b+1))-1;

    		if(holder<=s){
    			last=holder;
    		}
    		else{
    			last=k*b;
    		}
    		
    		ll remain=s-last;

    		ll div=remain/(n-1);

    		vector<ll> v1(n);

    		for(int i=0;i<n-1;i++){

    			v1[i]=div;
    		}
    		ll mod=remain%(n-1);

    		for(int i=0;i<mod;i++){
    			v1[i]++;
    		}

    		v1[n-1]=last;

    		printVector(v1);
    	}

    	t--;
    }

    return 0;
}