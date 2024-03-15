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
    	set<ll> s1;
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    		s1.insert(v1[i]);
    	}

    	if(s1.size()==1){
    		cout<<"NO"<<endl;
    	}
    	else{

    		//printVector(v1);
    		sort(all(v1),greater<ll>());
    		//printVector(v1);

    		swap(v1[0],v1[n-1]);
    		swap(v1[1],v1[n-1]);


    		cout<<"YES"<<endl;
    		printVector(v1);

    	}
    	

    	t--;
    }

    return 0;
}