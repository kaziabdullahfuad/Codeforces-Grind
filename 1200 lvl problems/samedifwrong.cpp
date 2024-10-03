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
    	
    	ll count=0;
    	ll sum=0;

    	for(int i=0;i<n-1;i++){

    		if(v1[i]==(i+1)){

    			if(count==0){
    				count++;
    			}
    			else{
    				sum+=count;
    				count++;
    			}
    		}
    		else{

    			if(v1[i+1]==v1[i]+1){

    				ll start=1;
    				ll j=i;

    				while(v1[j+1]>v1[j] && v1[j+1]==v1[j]+1){

    					sum+=start;
    					start++;
    					j++;
    				}
    				//debug(j)
    				i=j;
    			}
    		}
    	}

    	if(v1[n-1]==n){

    		sum+=count;
    	}
    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}