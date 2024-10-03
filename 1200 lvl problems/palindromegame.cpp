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

    	ll n;
    	cin>>n;

    	string s;
    	cin>>s;

    	int zero=0;
    	int one=0;

    	for(int i=0;i<n;i++){

    		if(s[i]=='1'){
    			one++;
    		}
    		else{
    			zero++;
    		}
    	}

    	if(zero%2==0 || zero==1){
    		cout<<"BOB"<<endl;
    	}
    	else{

    		cout<<"ALICE"<<endl;
    	}

    	t--;
    }

    return 0;
}