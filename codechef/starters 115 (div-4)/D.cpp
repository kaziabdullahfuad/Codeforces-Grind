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
    	vector<ll> v2(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}

    	for(int i=0;i<n;i++){
    		cin>>v2[i];
    	}

    	//printVector(v1);
    	//printVector(v2);

    	sort(v1.begin(),v1.end());

    	sort(v2.begin(),v2.end(),greater<ll>());

    	// printVector(v1);
    	// printVector(v2);

    	bool possible=true;
    	ll first=v1[0]+v2[0];

    	for(ll i=1;i<n;i++){

    		if((v1[i]+v2[i])!=first){
    			possible=false;
    			//cout<<first<<" "<<v1[i]+v2[i]<<endl;
    			break;
    		}
    	}

    	if(possible){
    		printVector(v1);
    		printVector(v2);
    		//cout<<"YES"<<endl;
    	}
    	else{
    		cout<<-1<<endl;
    	}
    	

    	t--;
    }

    return 0;
}