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

    	//cout<<"Bismillah"<<endl;

    	ll n,k;
    	cin>>n>>k;

    	if(k==1 || k==n){

    		// then shob ek

    		for(int i=1;i<=n;i++){

    			cout<<i<<" ";
    		}

    		cout<<endl;
    	}
    	else{

    		ll start=1;
    		set<ll> s1;

    		vector<ll> v1(n);

    		for(int i=k-1;i<n;i+=k){

    			//cout<<i<<" ";
    			v1[i]=start;
    			s1.insert(start);
    			start++;
    		}

    		//cout<<s1.size()<<endl;
    		// debug(start)

    		// printVector(v1);

    		for(int i=0;i<n;i++){


    			if(v1[i]!=0){
    				continue;
    			}
    			else{

    				v1[i]=start;
    				start++;
    			}
    		}

    		printVector(v1);
    	}

    	t--;
    }

    return 0;
}