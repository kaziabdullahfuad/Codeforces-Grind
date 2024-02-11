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
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	
    	if(n==1 || n==2){
    		cout<<-1<<endl;
    	}
    	else{

    		for(int i=0;i<n;i++){

    			if(v1[i]==1){
    				cout<<3<<" ";
    			}
    			else if(v1[i]==2){
    				cout<<2<<" ";
    			}
    			else if(v1[i]==3){
    				cout<<1<<" ";
    			}
    			else{
    				cout<<v1[i]<<" ";
    			}
    		}
    		cout<<endl;
    	}

    	t--;
    }

    return 0;
}