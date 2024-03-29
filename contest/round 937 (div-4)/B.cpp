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

    	// vector<vector<int>> vec( n , vector<int> (m, 0)); 

    	vector<vector<char>> v1(2*n,vector<char>(2*n,'.'));
    	//cout<<v1.size()<<endl;
    	// for(auto row:v1){

    	// 	for(auto col:row){
    	// 		cout<<col<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	int control=0;

    	for(int i=0;i<2*n;i+=2){

    		if(control%2==0){

    			for(int j=0;j<2*n;j+=4){

    				v1[i][j]='#';
    				v1[i][j+1]='#';
    				v1[i+1][j]='#';
    				v1[i+1][j+1]='#';
    			}
    		}
    		else{

    			for(int j=2;j<2*n;j+=4){
    				v1[i][j]='#';
    				v1[i][j+1]='#';
    				v1[i+1][j]='#';
    				v1[i+1][j+1]='#';
    			}
    		}
    		control++;

    	}

    	for(auto row:v1){

    		for(auto col:row){
    			cout<<col;
    		}
    		cout<<endl;
    	}


    	t--;
    }

    return 0;
}