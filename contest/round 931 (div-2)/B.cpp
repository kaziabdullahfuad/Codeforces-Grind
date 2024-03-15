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
void tester(ll x,ll count){

	if(x<0){
		return;
	}

	if(x==1 || x==3 || x==6){

		return;
	}

	debug(x);

	tester(x-1,count+1)+tester(x-3,count+1)+tester(x-6,count+1);

	debug(x);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n=1e9+1;
    cout<<n<<endl;

    ll test=5;

    // 1,3,6,10,15
    tester(test,0);
   
    return 0;
}