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
int alphacode(vector<int> &v1,int n){

	if(n==1){
		return 1;
	}
	if(n==0){
		return 0;
	}

	int output=alphacode(v1,n-1);

	if(v1[n-2]*10+v1[n-1]<=26){
		output+=alphacode(v1,n-2);
	}

	return output;

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n=5;
    	vector<int> v1(n);
    	
    	v1={2,5,1,1,4};
    	
    	

    	cout<<alphacode(v1,n)<<endl;

    	t--;
    }

    return 0;
}