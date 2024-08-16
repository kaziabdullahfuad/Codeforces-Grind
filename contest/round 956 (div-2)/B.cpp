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
void process(vector<vector<char>> &v1,vector<vector<char>> &v2,ll i,ll j){

	if(v1[i][j]==v2[i][j]){
		return;
	}

	ll dif=(v2[i][j]-'0')-(v1[i][j]-'0');
	//cout<<dif<<endl;
	if(dif==1 || dif==-2){
		// +1 means add +1
		v1[i][j]=char(((v1[i][j]-'0'+1)%3)+'0');
		v1[i+1][j+1]=char(((v1[i+1][j+1]-'0'+1)%3)+'0');
		v1[i][j+1]=char(((v1[i][j+1]-'0'+2)%3)+'0');
		v1[i+1][j]=char(((v1[i+1][j]-'0'+2)%3)+'0');
	}
	else if(dif==2 || dif==-1){

		// add +2
		v1[i][j]=char(((v1[i][j]-'0'+2)%3)+'0');
		v1[i+1][j+1]=char(((v1[i+1][j+1]-'0'+2)%3)+'0');
		v1[i][j+1]=char(((v1[i][j+1]-'0'+1)%3)+'0');
		v1[i+1][j]=char(((v1[i+1][j]-'0'+1)%3)+'0');
	}
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

    	vector<vector<char>> v1(n,vector<char>(m));
    	vector<vector<char>> v2(n,vector<char>(m));

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			cin>>v1[i][j];
    		}
    	}

    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){
    			cin>>v2[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){
    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){
    	// 		cout<<v2[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }

    	// cout<<('2'-'0'+2)%3<<endl;
    	// string temp="123";

    	for(int i=0;i<n-1;i++){

    		for(int j=0;j<m-1;j++){

    			process(v1,v2,i,j);
    			//cout<<v1[i][j]<<" ";
    		}
    		//cout<<endl;
    	}
    	//cout<<"HERE"<<endl;
    	// cout<<char(((v1[0][0]-'0'+1)%3)+'0')<<endl;

    	// v1[0][0]=char(((v1[0][0]-'0'+1)%3)+'0');
    	// cout<<v1[0][0]<<endl;

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){
    	// 		cout<<v1[i][j]<<" ";
    	// 	}
    	// 	cout<<endl;
    	// }
    	
    	bool found=true;

    	// last row
    	for(int i=0;i<m;i++){

    		if(v1[n-1][i]!=v2[n-1][i]){
    			found=false;
    			break;
    		}

    	}
    	// last col
    	for(int i=0;i<n;i++){

    		if(v1[i][m-1]!=v2[i][m-1]){

    			found=false;
    			break;
    		}

    	}

    	if(found){
    		cout<<"YES"<<endl;
    	}
    	else{
    		cout<<"NO"<<endl;
    	}

    	t--;
    }

    return 0;
}