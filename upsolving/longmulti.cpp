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

    	string x,y;
    	cin>>x>>y;
    	//cout<<x<<" "<<y<<endl;
    	bool done=false;
    	// difference minimize korle product highest
    	// same element hoile skip
    	// prothom ekta boro x a dibo
    	// baki shob boro y a dibo
    	for(int i=0;i<x.size();i++){

    		if(x[i]==y[i]){
    			continue;
    		}
    		else if(x[i]>y[i]){
    			
    			if(done==false){

    				//swap(x[i],y[i]);
    				done=true;
    			}
    			else{
    				swap(x[i],y[i]);
    			}
    		}
    		else{
    			// x[i]<y[i]

    			if(done==false){

    				swap(x[i],y[i]);
    				done=true;
    			}
    			
    		}
    	}
    	cout<<x<<endl;
    	cout<<y<<endl;

    	t--;
    }

    return 0;
}