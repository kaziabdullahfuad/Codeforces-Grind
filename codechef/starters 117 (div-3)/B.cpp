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

    	string s;
    	cin>>s;
    	ll max_val=-1e18;
    	ll start=97;
    	ll index;
    	for(int i=0;i<n;i++){

    		ll val=s[i]-start;
    		//cout<<s[i]<<endl;
    		//cout<<"HELLO"<<endl;
    		cout<<i<<endl;
    		cout<<s[i]<<" "<<start<<endl;
    		cout<<val<<endl;
    		if(val>max_val){
    			max_val=val;
    			index=i;
    		}
    		start++;
    	}
    	cout<<"MAX VAL"<<endl;
    	cout<<max_val<<endl;
    	cout<<index<<endl;

    	string holder;
    	ll count=0;
    	for(int i=0;i<n;i++){

    		if(i==index && count==0){
    			count++;
    		}
    		else{
    			holder.push_back(s[i]);
    		}
    	}

    	cout<<holder<<endl;

    	t--;
    }

    return 0;
}