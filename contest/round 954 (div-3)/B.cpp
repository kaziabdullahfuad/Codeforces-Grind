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

    	vector<vector<ll>> v1(n,vector<ll>(m,0));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){

    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	if(n==1 && m==1){

    		
    	}
    	else if(n==1){

    		for(int i=0;i<n;i++){

    			for(int j=0;j<m;j++){

    					if(j==0){
    					// only right 
    					//cout<<"HERE"<<endl;
    					if(v1[i][j]>v1[i][j+1] ){
    						ll hold=v1[i][j+1];

    						v1[i][j]=hold;
    					}
    				}
    				else if(j==m-1){

    					// only left 

    					if(v1[i][j]>v1[i][j-1]){

    						
    						v1[i][j]=v1[i][j-1];
    					}
    				}
    				else{

    					// left and right 
    					if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i][j+1]){

    						// right and up
    						ll hold=max(v1[i][j+1],v1[i][j-1]);
    						
    						v1[i][j]=hold;
    					}
    				}
    			}
    		}
    	}
    	else if(m==1){

    		for(int i=0;i<n;i++){

    			for(int j=0;j<m;j++){

    				if(i==0){
    					// niche

    					if(v1[i][j]>v1[i+1][j]){
    						v1[i][j]=v1[i+1][j];
    					}
    				}
    				else if(i==n-1){
    					// upore

    					if(v1[i][j]>v1[i-1][j]){
    						v1[i][j]=v1[i-1][j];
    					}
    				}
    				else{

    					// niche nd upore

    					if(v1[i][j]>v1[i-1][j] && v1[i][j]>v1[i+1][j]){

    						ll hold=max(v1[i-1][j],v1[i+1][j]);
    						v1[i][j]=hold;
    					}
    				}
    			}
    		}
    	}
    	else{
    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			// for first row
    			if(i==0){
    				// left right and down
    				if(j==0){
    					// right and down
    					//cout<<"HERE"<<endl;
    					if(v1[i][j]>v1[i][j+1] && v1[i][j]>v1[i+1][j]){
    						ll hold=max(v1[i][j+1],v1[i+1][j]);

    						v1[i][j]=hold;
    					}
    				}
    				else if(j==m-1){

    					// left and down

    					if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i+1][j]){

    						ll hold=max(v1[i][j-1],v1[i+1][j]);
    						v1[i][j]=hold;
    					}
    				}
    				else{

    					// left right and down
    					if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i+1][j]
    						&& v1[i][j]>v1[i][j+1]){

    						// right and up
    						ll hold=max(v1[i][j+1],v1[i+1][j]);
    						// left
    						hold=max(hold,v1[i][j-1]);
    						v1[i][j]=hold;
    					}
    				}

    				
    			} // for last row
    			else if(i==n-1){

    				// left up and right
    				// down nai

    				if(j==0){
    					// right and up

    					if(v1[i][j]>v1[i][j+1] && v1[i][j]>v1[i-1][j]){
    						ll hold=max(v1[i][j+1],v1[i-1][j]);
    						v1[i][j]=hold;
    					}
    				}
    				else if(j==m-1){

    					// left and up

    					if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i-1][j]){

    						ll hold=max(v1[i][j-1],v1[i-1][j]);
    						v1[i][j]=hold;
    					}
    				}
    				else{

    					// left up and right
    					if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i-1][j]
    						&& v1[i][j]>v1[i][j+1]){

    						// right and up
    						ll hold=max(v1[i][j-1],v1[i-1][j]);
    						hold=max(hold,v1[i][j+1]);
    						v1[i][j]=hold;
    					}
    				}
    			}
    			else{
    					// first and last row na shei row gula
    					if(j==0){

    						// right, up and down
    						if(v1[i][j]>v1[i][j+1] && v1[i][j]>v1[i-1][j]
    							&& v1[i][j]>v1[i+1][j]){
    							ll hold=max(v1[i][j+1],v1[i-1][j]);
    							hold=max(hold,v1[i+1][j]);
    							v1[i][j]=hold;
    						}
    					}
    					else if(j==m-1){

    						// left, up and down

    						if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i-1][j]
    							&& v1[i][j]>v1[i+1][j]){

    							ll hold=max(v1[i][j-1],v1[i-1][j]);
    							hold=max(hold,v1[i+1][j]);
    							v1[i][j]=hold;
    						}
    					}
    					else{

    						// left, up , down and right

    						if(v1[i][j]>v1[i][j-1] && v1[i][j]>v1[i-1][j]
    							&& v1[i][j]>v1[i+1][j] && v1[i][j]>v1[i][j+1]){

    							ll hold=max(v1[i][j-1],v1[i-1][j]);
    							hold=max(hold,v1[i+1][j]);
    							hold=max(hold,v1[i][j+1]);
    							v1[i][j]=hold;
    						}

    					}

    			}
    		}
    		//cout<<endl;
    	}
    }

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){

    			cout<<v1[i][j]<<" ";
    		}
    		cout<<endl;
    	}



    	t--;
    }

    return 0;
}