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
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	//printVector(v1);
    	ll minval;
    	for(int i=1;i<n-1;i++){

    		minval=min(v1[i-1],v1[i+1]);

    		minval=min(minval,v1[i]/2);

    		v1[i-1]=v1[i-1]-minval;
    		v1[i+1]=v1[i+1]-minval;
    		v1[i]=v1[i]-(2*minval);
    		//debug(v1[i-1]) debug(v1[i]) debug(v1[i+1])
    		
    		

    	}

    	bool found=true;
    	//printVector(v1);
    	for(auto x:v1){

    		if(x!=0){
    			found=false;
    		}
    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}


    	t--;
    }

    return 0;
}