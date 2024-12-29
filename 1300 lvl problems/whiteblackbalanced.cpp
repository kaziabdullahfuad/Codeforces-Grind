#include<iostream>
#include <typeinfo>
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
/* ascii value 
    A=65,Z=90,a=97,z=122
*/
ll n;
ll ans;
string s;
vector<ll> root;
vector<bool>check;
vector<vector<ll>> graph;
pair<ll,ll> dfs(ll val){

	if(check[val]){
		// already ata use korsi
		return {0,0};
	}

	// other wise ata age theke na
	check[val]=true;
	ll black=0;
	ll white=0;
	if(s[val-1]=='B'){

		black++;
	}
	else{
		white++;
	}
	//pair<ll,ll> temp;
	for(int i=0;i<graph[val].size();i++){

		if(check[graph[val][i]]==false){

			pair<ll,ll> temp=dfs(graph[val][i]);
			black+=temp.first;
			white+=temp.second;
		}
	}

	if(black==white){
		ans++;
	}

	return {black,white};
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	cin>>n;
    	root.resize(n+1,0);
    	graph.resize(n+1,vector<ll>());
    	check.resize(n+1,false);

    	root[1]=1;

    	for(int i=2;i<=n;i++){
    		cin>>root[i];
    		// cout<<root[i]<<" "<<i<<endl;
    		// cout<<i<<" "<<root[i]<<endl;
    		graph[root[i]].push_back(i);
    		graph[i].push_back(root[i]);
    	}

    	cin>>s;

    	ans=0;
    	
    	dfs(1);

    	cout<<ans<<endl;

    	s.clear();
    	ans=0;
    	n=0;
    	graph.clear();
    	root.clear();
    	check.clear();

    	t--;
    }

    // graph.clear();
    // root.clear();
    // check.clear();

    return 0;
}