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
class Solution {
public:
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     	
     	int n=numCourses;
     	vector<vector<int>> adj(n);

		for(int i=0;i<prerequisites.size();i++){

			// cout<<i<<endl;
			// cout<<prerequisites[i][0]<<" "<<prerequisites[i][1]<<endl;
			adj[prerequisites[i][0]].push_back(prerequisites[i][1]);

		}
		// main idea 0 theke numcours porjonto proti ta element ar
		// jonno ekta list hobe
		// cout<<adj.size()<<endl;
		//cout<<adj[2][0]<<" "<<adj[2][1]<<endl;
		// 0 mane not visited, 1 mane visiting, 2 mane complete
		vector<int> visited(n);

		for(int i=0;i<n;i++){

			if(!visited[i]){

				int hold=dfs(adj,i,visited);
				if(!hold){
					return false;
				}
			}
		}

     	return true;   
    }

    bool dfs(vector<vector<int>> &adj,int val,vector<int> &visited){

    	if(visited[val]==1){
    		// mane cycle paise
    		//debug(val)
    		return false;
    	}
    	if(visited[val]==2){
    		// ata thik ase jani
    		return true;
    	}
    	if(adj[val].size()==0){
    		// ata dependent na karo upor
    		visited[val]=2;
    		return true;
    	}

    	visited[val]=1;

    	for(int i=0;i<adj[val].size();i++){

    		//cout<<val<<" "<<adj[val][i]<<endl;
    		int hold=dfs(adj,adj[val][i],visited);
    		if(!hold){
    			return false;
    		}
    	}

    	visited[val]=2;
    	return true;

    }
};
int main()
{
	Solution sol1;

	int t;
	cin>>t;

	while(t){

		int n=5;
		// vector<vector<int>> prerequisites={{0,1},{2,3},{3,4},{2,1}};
		vector<vector<int>> prerequisites={{0,1},{2,3},{3,4},{2,1},{4,2}};

		cout<<sol1.canFinish(n,prerequisites)<<endl;

		t--;
	}
	

    return 0;
}