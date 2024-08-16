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

    	ll n,x;
    	cin>>n>>x;
    	vector<ll> v1(n);
    	
    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	bool keep=true;

    	vector<vector<ll>> holder(n,vector<ll>(30,0));

    	for(int i=0;i<n;i++){

    		holder[i][0]=v1[i];
    	}

    	// for(int i=0;i<n;i++){

    	// 	cout<<holder[i][0]<<" ";
    	// }

    	// col row
    	//cout<<endl;
    	ll sum=0;
    	bool found=true;
    	for(int i=0;i<30;i++){

    		for(int j=0;j<n;j++){

    			//cout<<holder[j][i]<<" ";
    			// row and col
    			if(holder[j][i]>0){
    				// ar porer row te add korbo
    				//sum+=holder[j][j];

    				if(holder[j][i]%x==0){
    					holder[j][i+1]=holder[j][i]/x;
    				}
    				else{
    					holder[j][i+1]=0;
    				}
    			}
    			else{
    				found=false;
    				break;
    			}
    		}
    		if(!found){
    			break;
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<20;j++){
    	// 		//cout<<holder[i][j]<<" ";
    	// 		//cout<<j<<" "<<i<<" ";
    	// 	}
    	// 	//cout<<endl;
    	// }
    	found=true;
    	//cout<<sum<<endl;

    	for(int i=0;i<30;i++){

    		for(int j=0;j<n;j++){
    			
    			if(holder[j][i]>0){
    				//cout<<"Vals:"<<holder[j][i]<<endl;
    				sum+=holder[j][0];
    				//debug(sum)
    			}
    			else{
    				//cout<<"HERE"<<" "<<j<<" "<<i<<endl;
    				found=false;
    				break;
    			}
    		}
    		if(!found){
    			break;
    		}
    		

    	}

    	cout<<sum<<endl;
    	

    	t--;
    }

    return 0;
}