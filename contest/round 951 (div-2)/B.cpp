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

    	ll x,y;
    	cin>>x>>y;

    	cout<<(x^y)<<endl;
    	cout<<(41^x)<<endl;
    	cout<<(41^y)<<endl;
    	
    	for(int i=1;i<=40;i++){

    		cout<<(i^x)<<" ";
    	}
    	cout<<endl;
    	cout<<"AREKTA"<<endl;
    	// 28 29 30 31 24 25 26 27
    	for(int i=1;i<=40;i++){

    		cout<<(i^y)<<" ";
    	}

    	t--;
    }

    return 0;
}