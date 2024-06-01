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

    	string s;
    	cin>>s;

    	ll no_ones=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='1'){
    			no_ones++;
    		}
    	}

    	if(no_ones%2==1){
    		cout<<"NO"<<endl;
    	}
    	else if(no_ones==0){
    		cout<<"YES"<<endl;
    	}
    	else if(no_ones==2){
    		bool found=true;
    		for(int i=0;i<n;i++){

    			if(i!=n-1){
    				if(s[i]=='1' && s[i+1]=='1'){
    					found=false;
    					break;
    				}
    			}
    		}

    		if(found){
    			cout<<"YES"<<endl;
    		}
    		else{
    			cout<<"NO"<<endl;
    		}
    	}
    	else{
    		cout<<"YES"<<endl;
    	}

    	t--;
    }

    return 0;
}