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

    	ll n,l,r;
    	cin>>n>>l>>r;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	ll count=0;
    	ll sum=0;
    	ll index=0;

    	for(int i=0;i<n;i++){

    		sum+=v1[i];
    		//debug(sum)
    		if(sum>=l && sum<=r){
    			//cout<<"HERE"<<endl;
    			count++;
    			index=i+1;
    			sum=0;
    		}
    		else if(sum>r){

    			
    			while(index<=i && sum>r){

    				sum-=v1[index];
    				index++;
    				if(sum>=l && sum<=r){
    					sum=0;
    					count++;
    					index=i+1;
    					break;
    				}
    			}

    		
    		}
    		//cout<<i<<" "<<index<<endl;
    	}
    	cout<<count<<endl;

    	t--;
    }

    return 0;
}