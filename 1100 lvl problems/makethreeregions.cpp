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

    	vector<vector<char>> v1(2,vector<char>(n));

    	for(int i=0;i<2;i++){

    		for(int j=0;j<n;j++){

    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<2;i++){

    	// 	for(int j=0;j<n;j++){

    	// 		cout<<v1[i][j];
    	// 	}
    	// 	cout<<endl;
    	// }
    	ll count=0;
    	for(int i=0;i<2;i++){

    		for(int j=0;j<n;j++){

    			if(i==0){
    				// first row te

    				if(j>0 && j<n-1){

    					// cout<<i<<" "<<j<<endl;
    					if(v1[i][j]=='.'){
    						
    						if(v1[i+1][j-1]=='x' && v1[i+1][j+1]=='x'){
    							//cout<<"ROW ZERO"<<endl;
    							//cout<<i<<" "<<j<<endl;
    							
    							if(v1[i+1][j]=='.' && v1[i][j-1]=='.' && v1[i][j+1]=='.'){
    								count++;
    							}
    							
    						}
    					}
    				}
    			}
    			else{

    				// second row

    				if(j>0 && j<n-1){

    					//cout<<i<<" "<<j<<endl;

    					if(v1[i][j]=='.'){
    						//cout<<v1[i][j]<<endl<<" "<<i<<" "<<j<<endl;
    						//cout<<i<<" "<<j<<endl;
    						if(v1[i-1][j-1]=='x' && v1[i-1][j+1]=='x'){

    							//cout<<i<<" "<<j<<endl;
    							if(v1[i-1][j]=='.' && v1[i][j-1]=='.' && v1[i][j+1]=='.'){
    								count++;
    							}
    						}
    					}
    				}
    			}
    		}
    	}

    	cout<<count<<endl;

    	t--;
    }

    return 0;
}