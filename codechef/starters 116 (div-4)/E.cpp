// problem link:https://www.codechef.com/problems/CHEFPRODUCT
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
template<typename t>
void printVector(vector<t> &v1){

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

    	ll x=sqrtl(n);

    	if((n-x*x)%2==0){

    		cout<<(x+1)/2<<endl;
    	}
    	else{
    		x--;

    		cout<<(x+1)/2<<endl;
    	}

    	t--;
    }

    return 0;
}