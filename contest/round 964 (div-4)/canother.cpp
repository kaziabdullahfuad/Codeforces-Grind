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

    	ll n,s,m;
    	cin>>n>>s>>m;

    	cout<<n<<" "<<s<<" "<<m<<endl;

    	ll hold=n;
    	ll first=0;
    	ll second=0;
    	ll count=0;
    	bool found=false;
    	ll count=0;
    	while(hold){
    		ll left,right;
    		cin>>left>>right;
    		//cout<<left<<" "<<right<<endl;
    		if(count==0){

    			if((left-0)>=s){
    				found=true;
    			}
    		}
    		
    		hold--;
    	}

    	//cout<<second<<endl;
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