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

    	ll n;
    	cin>>n;

    	vector<vector<char>> v1(n,vector<char>(n,0));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){

    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<n;j++){

    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	bool triange=false;

    	// triangle
    	for(int i=0;i<n-1;i++){

    		for(int j=1;j<n-1;j++){

    			// 1 paisi
    			if(v1[i][j]=='1'){
    				//cout<<i<<" "<<j<<endl;
    				// ekta 1 paisi
    				int first=2;

    				if(v1[i+1][j]=='1' && v1[i+1][j-1]=='1' && v1[i+1][j+1]=='1'){

    					triange=true;
    					break;
    				}

    			}
    		}
    		
    	}

    	//upside down triangle
    	//cout<<"UPSIDE DOWN TRIANGLE"<<endl;
    	for(int i=0;i<n-1;i++){

    		for(int j=0;j<n-2;j++){

    			if(v1[i][j]=='1'){

    				// hold i and j
    				int i_hold=i;
    				int j_hold=j;
    				int count=0;

    				while(v1[i_hold][j_hold]=='1' && j_hold<n){

    					count++;
    					j_hold++;
    				}

    				// debug(count);
    				// debug(i_hold);
    				// debug(j_hold)
    				j_hold-=2;

    				int next_count=count-2;
    				//debug(next_count);

    				if(v1[i_hold+1][j+1]=='1'){

    					i_hold++;
    					int k_hold=j+1;
    					count=0;
    					// debug(i_hold)
    					// debug(k_hold)
    					// debug(j_hold);
    					for(int i=k_hold;i<=j_hold;i++){

    						if(v1[i_hold][i]=='1'){
    							//cout<<i_hold<<" "<<i<<endl;
    							//cout<<v1[i_hold][k_hold]<<" ";
    							count++;
    						}
    						else{
    							break;
    						}
    					}
    					//debug(count);
    					if(count==next_count){
    						triange=true;
    						break;
    					}


    				}

    				break;
    			}
    		}
    		if(triange){
    			break;
    		}
    		
    	}

    	// square


    	//debug(triange);
    	if(triange){
    		cout<<"TRIANGLE"<<endl;
    	}
    	else{
    		cout<<"SQUARE"<<endl;
    	}

    	t--;
    }

    return 0;
}