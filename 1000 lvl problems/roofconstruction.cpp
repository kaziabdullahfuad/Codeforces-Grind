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

    	ll n;
    	cin>>n;

    	ll holder=n-1;

    	if(n==2){
    		cout<<0<<" "<<1<<endl;
    	}
    	else{

    		ll start=1;
    		//cout<<holder<<endl;
    		while(start*2<=holder){

    			start*=2;
    		}
    		//cout<<(5^3)<<endl;
    		//cout<<start<<endl;
    		//cout<<start;

    		vector<ll> v2;
    		
    		for(int i=holder;i>=start;i--){
    			cout<<i<<" ";
    			v2.push_back(i);
    		}

    		ll index=0;
    		ll len=v2.size();
    		sort(all(v2));
    		for(int i=0;i<=holder;i++){

    			if(index<len){

    				if(i==v2[index]){
    					index++;
    					continue;
    				}
    				else{
    					cout<<i<<" ";
    				}
    				
    			}
    			else{
    				cout<<i<<" ";
    			}
    		}
    		cout<<endl;

    	}

    	t--;
    }

    return 0;
}