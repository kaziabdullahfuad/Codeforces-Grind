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

    	ll n,m;
    	cin>>n>>m;

    	vector<ll> zero(n);
    	vector<ll> one(n);
    	vector<ll> question(n);

    	while(m){

    		string s;
    		cin>>s;

    		//cout<<s<<endl;

    		for(int i=0;i<n;i++){

    			if(s[i]=='0'){
    				zero[i]++;
    			}
    			else if(s[i]=='1'){
    				one[i]++;
    			}
    			else{
    				question[i]++;
    			}
    		}

    		m--;
    	}

    	// printVector(zero); 
    	// printVector(one);
    	// printVector(question);
    	ll sum=0;
    	for(int i=0;i<n;i++){

    		ll diff=abs(zero[i]-one[i]);
    		ll min_val=min(zero[i],one[i]);
    		ll max_val=max(zero[i],one[i]);

    		if(question[i]==0){

    			sum+=max_val*min_val;
    		}
    		else if(diff>=question[i]){

    			min_val+=question[i];
    			sum+=(min_val*max_val);
    		}
    		else{

    			// diff boro na so duitar moddhe spread korte hobe
    			// age min_val ke shoman korte hobe max val ar
    			min_val+=diff;
    			question[i]-=diff;
    			ll equal=(question[i])/2;

    			max_val+=equal;
    			min_val+=equal;

    			if(question[i]%2){
    				max_val++;
    			}

    			sum+=(max_val*min_val);

    		}
    		//debug(sum)
    	}

    	cout<<sum<<endl;
    	
    	t--;
    }

    return 0;
}