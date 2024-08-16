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
void recursiontest(ll n){

	if(n<1){
		return;
	}

	recursiontest(n/2);
	cout<<n<<endl;

	recursiontest(n-1);

	cout<<n<<endl;
}
void anotherrecursiontest(ll n){

	if(n<1){
		return;
	}

	anotherrecursiontest(n-1);
	cout<<n<<endl;

	anotherrecursiontest(n/2);

	cout<<n<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //ll n=5;
    int n=3;

    //recursiontest(n);
    anotherrecursiontest(n);

    return 0;
}