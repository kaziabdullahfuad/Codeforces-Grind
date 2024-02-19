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
ll facto(ll val){

	ll result=1;
	for(ll i=2;i<=val;i++){

		result*=i;
	}

	return result;
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
    	map<ll,ll> m1;

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		m1[v1[i]]++;
    	}
    	
    	sort(all(v1),greater<ll>());

    	//printVector(v1);
    	ll holder=n;
    	ll sum=0;
    	ll calculate=0;

    	//cout<<m1[v1[0]]*(m1[v1[0]]-1)<<endl;

    	for(int i=0;i<n;i++){
    		//debug(i);
    		if(m1[v1[i]]>=3){

    			// 3 ar combination
    			calculate=(m1[v1[i]]*(m1[v1[i]]-1)*(m1[v1[i]]-2))/6;
    			//cout<<calculate<<endl;
    			sum+=calculate;

    			// 2 ar combination
    			ll remain=holder-m1[v1[i]];
    			//debug(remain)
    			calculate=((m1[v1[i]]*(m1[v1[i]]-1))/2)*remain;
    			//cout<<calculate<<endl;
    			//debug(calculate)
    			sum+=calculate;
    			m1[v1[i]]=0;


    		}
    		else if(m1[v1[i]]==2){
    			
    			// 2 ar combination
    			ll remain=holder-m1[v1[i]];
    			//debug(remain);
    			calculate=((m1[v1[i]]*(m1[v1[i]]-1))/2);

    			//cout<<calculate<<endl;
    			//debug(calculate);
    			calculate*=remain;
    			sum+=calculate;
    			m1[v1[i]]=0;
    		}
    		holder--;
    	}

    	cout<<sum<<endl;

    	

    	t--;
    }

    return 0;
}