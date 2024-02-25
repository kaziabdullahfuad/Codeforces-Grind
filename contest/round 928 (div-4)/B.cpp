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

    	vector<vector<char>> v1(n,vector<char>(n,0));
    	cout<<v1.size()<<endl;
    	for(int i=0;i<n;i++){

    		for(int j=0;j<n;j++){

    			cin>>v1[i][j];
    		}
    	}

    	for(auto row:v1){

    		for(auto col:row){

    			cout<<col<<" ";
    		}
    		cout<<endl;
    	}

    	// rectangle check
    	cout<<"START"<<endl;
    	for(int i=0;i<n-1;i++){

    		for(int j=0;j<n-1;j++){
    			//cout<<v1[i][j]<<" ";
    			if(v1[i][j]=='1' && v1[i][j+1]=='1'){
    				//cout<<v1[i][j]<<" ";
    				debug(i);
    				debug(j);
    				int count=0;
    				int max_count=2;
    				int start=1;
    				int hoise=0;
    				bool break_korbo=false;
    				for(int k=i;k<n;k++){
    					count=0;
    					for(int l=j;l<n;l++){

    						if(v1[i][j]==0){
    							break_korbo=true;
    							break;
    						}
    						else{
    							cout<<v1[k][l]<<" ";
    							count++;
    						}
    					}
    					debug(count);
    					cout<<endl;

    					if(start==1){
    						max_count=count;
    						hoise++;
    					}
    					else if(max_count!=count){
    						break;
    					}
    					hoise++;
    					start++;
    				}
    				debug(start);
    				debug(hoise);

    			}
    		}
    		cout<<endl;
    	}



    	t--;
    }

    return 0;
}