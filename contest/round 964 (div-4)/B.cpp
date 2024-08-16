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

    	ll a1,a2,b1,b2;
    	cin>>a1>>a2>>b1>>b2;

    	ll count=0;

    	if((a1>b1 && a2>=b2) || (a1>=b1 && a2>b2)){
    		count++;
    	}
    	if((a1>b2 && a2>=b1) || (a1>=b2 && a2>b1)){
    		count++;
    	}
    	if((a2>b1 && a1>=b2) || (a2>=b1 && a1>b2)){
    		count++;
    	}
    	if((a2>b2 && a1>=b1) || (a2>=b2 && a1>b1)){
    		count++;
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}