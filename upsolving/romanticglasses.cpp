// problem link:https://codeforces.com/contest/1915/problem/E
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
    	
    	for(int i=0;i<n;i++){
    		
    		if(i%2!=0){
    			v1[i]=v1[i]*-1;
    		}
    	}

    	//printVector(v1);

    	// prefix sum

    	set<ll> s1;

    	s1.insert(0);

    	vector<ll> holder(n);
    	holder[0]=v1[0];

    	for(int i=1;i<n;i++){

    		holder[i]=holder[i-1]+v1[i];
    	}

    	//printVector(holder);

    	// for(auto x:s1){
    	// 	cout<<x<<" ";
    	// }
    	// cout<<endl;
    	bool found=false;
    	for(int i=0;i<n;i++){

    		set<ll>:: iterator it;

    		it=s1.find(holder[i]);

    		// exists
    		if(it!=s1.end()){
    			found=true;
    			//cout<<holder[i]<<endl;
    			break;
    		}
    		else{
    			s1.insert(holder[i]);
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