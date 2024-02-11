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

    	string a,b,c;
    	cin>>a>>b>>c;

    	ll count=0;
    	for(int i=0;i<n;i++){

    		if(c[i]==a[i] || c[i]==b[i]){
    			count++;
    		}
    	}

    	//cout<<count<<endl;

    	if(count==n){
    		cout<<"NO"<<endl;
    	}
    	else{
    		cout<<"YES"<<endl;
    	}

    	t--;
    }

    return 0;
}