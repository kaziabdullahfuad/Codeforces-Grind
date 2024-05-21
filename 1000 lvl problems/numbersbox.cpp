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

    	ll n,m;
    	cin>>n>>m;

    	vector<vector<ll>>v1(n,vector<ll>(m,0));
    	
    
    	vector<ll> each_row;
    	ll sum=0;
    	ll min_val=101;
    	ll negative=0;
    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			cin>>v1[i][j];
    			if(v1[i][j]<0){
    				negative++;
    			}
    			min_val=min(min_val,abs(v1[i][j]));
    			sum+=abs(v1[i][j]);
    		}
    	}
    	
    	//cout<<sum<<" "<<min_val<<endl;

    	//cout<<negative<<endl;

    	if(negative%2==1){

    		sum-=(2*min_val);
    	}

    	cout<<sum<<endl;

    	t--;
    }

    return 0;
}