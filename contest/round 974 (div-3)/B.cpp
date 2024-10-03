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

    	ll n,k;
    	cin>>n>>k;

    	if(n%2==0 && k==1){
    		cout<<"YES"<<endl;
    	}
    	else if(n%2==1 && k==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		ll start=n-k+1;
    		//cout<<start<<endl;
    		ll segment=n-start;
    		//cout<<segment<<endl;
    		ll odd=0;
    		if(start%2==0){

    			odd=segment/2;
    		}
    		else{

    			odd=(segment+1)/2;
    		}

    		//cout<<odd<<endl;

    		if(odd%2==0){

    			if(n%2==0){
    				cout<<"YES"<<endl;
    			}
    			else{
    				cout<<"NO"<<endl;
    			}
    		}
    		else{

    			if(n%2==0){
    				cout<<"NO"<<endl;
    			}
    			else{
    				cout<<"YES"<<endl;
    			}
    		}

    	}

    	t--;
    }

    return 0;
}