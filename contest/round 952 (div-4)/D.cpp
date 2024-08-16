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

    	vector<vector<char>> v1( n , vector<char> (m, '.'));
    	
    	for(int i=0;i<n;i++){

    		for(int j=0;j<m;j++){


    			cin>>v1[i][j];
    		}
    	}

    	// for(int i=0;i<n;i++){

    	// 	for(int j=0;j<m;j++){


    	// 		cout<<v1[i][j];
    	// 	}

    	// 	cout<<endl;
    	// }

    	ll max_val=0;
    	ll index=0;
    	for(int i=0;i<n;i++){

    		int count=0;
    		for(int j=0;j<m;j++){


    			if(v1[i][j]=='#'){
    				count++;
    			}
    		}
    		
    		if(count>max_val){
    			max_val=count;
    			index=i;
    		}
    	}

    	//cout<<index<<endl;
    	//cout<<max_val<<endl;

    	ll mid=(max_val+2-1)/2;
    	//cout<<mid<<endl;
    	ll start=0;
    	ll p1=0,p2=0;
    	for(int i=index;i<n;i++){

    		for(int j=0;j<m;j++){
    			//cout<<v1[i][j]<<" ";
    			if(v1[i][j]=='#'){
    				start++;
    			}
    			if(start==mid){
    				p1=i+1;
    				p2=j+1;
    				break;
    			}
    		}
    		//cout<<endl;
    		break;
    	}
    	//cout<<start<<endl;
    	cout<<p1<<" "<<p2<<endl;

    	t--;
    }

    return 0;
}