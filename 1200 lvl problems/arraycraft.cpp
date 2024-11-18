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

    	ll n,x,y;
    	cin>>n>>x>>y;

    	vector<ll> v1(n);

    	x--;
    	y--;
    	v1[x]=1;
    	v1[y]=1;

    	//printVector(v1);
    	//debug(x) debug(y)
    	ll start=0;
    	for(int i=x+1;i<n;i++){

    		if(start%2==0){
    			v1[i]=-1;
    		}
    		else{
    			v1[i]=1;
    		}
    		start++;
    	}
    	start=0;
    	for(int i=y-1;i>=0;i--){

    		if(start%2==0){
    			v1[i]=-1;
    		}
    		else{
    			v1[i]=1;
    		}
    		start++;
    	}

    	for(int i=y+1;i<x;i++){

    		v1[i]=1;
    	}

    	printVector(v1);

    	t--;
    }

    return 0;
}