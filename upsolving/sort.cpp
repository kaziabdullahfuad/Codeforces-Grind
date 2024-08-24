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

    	ll n,q;
    	cin>>n>>q;

    	string s1,s2;
    	cin>>s1>>s2;
    	//cout<<s1<<" "<<s2<<endl;

    	vector<vector<ll>> v1(26,vector<ll>(n+1,0));
    	vector<vector<ll>> v2(26,vector<ll>(n+1,0));

    	ll hold=97;
    	for(int i=0;i<26;i++){

    		for(int j=1;j<=n;j++){

    			if(s1[j-1]-hold==0){

    				v1[i][j]=v1[i][j-1]+1;
    			}
    			else{

    				v1[i][j]=v1[i][j-1];
    			}
    		}
    		hold++;
    	}

    	hold=97;

    	for(int i=0;i<26;i++){

    		for(int j=1;j<=n;j++){

    			if(s2[j-1]-hold==0){

    				v2[i][j]=v2[i][j-1]+1;
    			}
    			else{

    				v2[i][j]=v2[i][j-1];
    			}
    		}
    		hold++;
    	}

    	while(q){

    		ll l,r;
    		cin>>l>>r;

    		ll sum=0;
    		for(int i=0;i<26;i++){

    			//cout<<v1[i][r]-v1[i][l-1]<<" "<<v2[i][r]-v2[i][l-1]<<endl;
    			ll first=v1[i][r]-v1[i][l-1];
    			ll second=v2[i][r]-v2[i][l-1];

    			if(first>=second){
    				continue;
    			}
    			else{
    				sum+=second-first;
    			}
    		}

    		cout<<sum<<endl;

    		q--;
    	}


    	t--;
    }

    return 0;
}