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

    	int n;
    	cin>>n;

    	vector<vector<char>> v1(n,vector<char>(n));

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
    	for(int i=0;i<n;i++){
    		int count=0;

    		for(int j=0;j<n;j++){
    			if(v1[i][j]=='1'){
    				count++;
    			}
    		}
    		if(count==1){
    			triange=true;
    			break;
    		}
    	}

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