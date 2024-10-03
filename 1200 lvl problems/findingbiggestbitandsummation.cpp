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

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	ll val=5;
    	ll sum=0;
    	ll last=0;
    	for(int i=0;i<=30;i++){

    		// cout<<(1<<i)<<endl;
    		//cout<<(1<<i)<<" "<<((1<<i)&val)<<endl;

    		if((1<<i)&val){
    			//cout<<(1>>i)<<endl;
    			cout<<(1<<i)<<endl;
    			last=(1<<i);
    		}
    		
    	}

    	cout<<last<<endl;
    	cout<<sum<<endl;

    	for(int i=0;i<=30;i++){

    		if((1<<i)>last){
    			break;
    		}
    		else{
    			sum+=(1<<i);
    		}
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}