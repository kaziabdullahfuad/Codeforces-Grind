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

    	ll n,m;
    	cin>>n>>m;

    	vector<vector<ll>> v1(n,vector<ll>(m));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			cin>>v1[i][j];
    		}
    	}
    	map<ll,ll> m1;
    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			//cout<<v1[i][j]<<" ";
    			m1[v1[i][j]]++;
    		}
    		//cout<<endl;
    	}

    	if(n==1 && m==1){
    		cout<<-1<<endl;
    	}
    	else{


    		bool found=true;
    		vector<vector<ll>> v2(n,vector<ll>(m));

    		if(n==1){

    			for(int i=0;i<n;i++){

    				for(int j=1;j<m;j++){

    					v2[i][j-1]=v1[i][j];
    				}
    			}
    			v2[n-1][m-1]=v1[0][0];

    			for(int i=0;i<n;i++){

		    		for(int j=0;j<m;j++){

		    			cout<<v2[i][j]<<" ";
		    			
		    		}
    				cout<<endl;
    			}
    		}
    		else if(m==1){


    			for(int i=1;i<n;i++){

    				for(int j=0;j<m;j++){

    					v2[i-1][j]=v1[i][j];
    				}
    			}

    			//cout<<n<<" "<<m<<endl;
    			v2[n-1][0]=v1[0][0];

    			for(int i=0;i<n;i++){

		    		for(int j=0;j<m;j++){

		    			cout<<v2[i][j]<<" ";
		    			
		    		}
    				cout<<endl;
    			}
    		}
    		else{

    			ll start=0;
    			for(int i=0;i<n;i++){

    				if(i==0){

    					for(int j=1,k=0;j<m;j++,k++){

    						v2[i][k]=v1[i][j];
    						start++;
    					}
    				}
    				else{

    					v2[i-1][m-1]=v1[i][0];
    					for(int j=1,k=0;j<m;j++,k++){

    						v2[i][k]=v1[i][j];
    						start++;
    					}
    				}
    				
    			}

    			v2[n-1][m-1]=v1[0][0];
    			
    			for(int i=0;i<n;i++){

		    		for(int j=0;j<m;j++){

		    			cout<<v2[i][j]<<" ";
		    			
		    		}
    				cout<<endl;
    			}
    		}

    		
    	}

    	t--;
    }

    return 0;
}