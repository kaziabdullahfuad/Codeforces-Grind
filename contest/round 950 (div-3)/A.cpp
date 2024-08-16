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
/* ASCII VALUES
 0 to 9- starts from 48 to 57
 A to Z- starts from 65 to 90*
 a to z- starts from 97 to 122*
*/
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	ll n,m;
    	cin>>n>>m;
    	
    	string s;
    	cin>>s;

    	int a,b,c,d,e,f,g=0;
    	map<char,ll> m1;
    	m1['A']=0;
    	m1['B']=0;
    	m1['C']=0;
    	m1['D']=0;
    	m1['E']=0;
    	m1['F']=0;
    	m1['G']=0;

    	for(int i=0;i<n;i++){

    		m1[s[i]]++;
    	}

    	ll ans=0;
    	for(auto x:m1){

    		//cout<<x.first<<" "<<x.second<<endl;
    		if(x.second<m){
    			ans+=m-x.second;
    		}
    	}
    	
    	cout<<ans<<endl;

    	t--;
    }

    return 0;
}