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

    	sort(all(v1));
    	//printVector(v1);
    	ll count=0;
    	map<int,int> m1;
    	for(int i=0;i<n;i++){

    		// find the biggest bit
    		int val=v1[i];
    		int last=1;
    		//cout<<val<<endl;
    		ll sum=0;
    		for(int j=0;j<=30;j++){

    			// (1<<i) means 1*2^i if i=2 2^2*1
    			//cout<<(1<<i)<<endl;
    			if((1<<j)&val){	
    				last=(1<<j);
    				//cout<<last<<endl;
    			}
    		}

    		// find the summation

    		for(int j=0;j<=30;j++){

    			if((1<<j)>last){
    				break;
    			}
    			else{
    				sum+=(1<<j);
    			}
    		}
    		//debug(last) debug(sum)

    		for(int j=last;j<=sum;j++){

    			count+=m1[j];
    		}

    		m1[v1[i]]++;
    	}

    	cout<<count<<endl;


    	t--;
    }

    return 0;
}