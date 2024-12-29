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

    	vector<string> v1(n);

    	for(int i=0;i<n;i++){
    		cin>>v1[i];
    	}
    	//v1.push_back("abdc");
    	for(int i=0;i<n;i++){

    		//cout<<v1[i]<<endl;
    		// for(int j=0;j<m;j++){

    		// 	cout<<v1[i][j]<<" ";
    		// }
    		// cout<<endl;
    	}

    	ll r1=0;
    	ll c1=m-1;
    	ll r2=n-1;
    	ll c2=0;

    	//cout<<"HERE"<<endl;
    	ll count=0;
    	while(r1<r2 && c1>c2){

    		//---> row to col
    		// r1 constant here
    		vector<char> holder;
    		for(int i=c2;i<=c1;i++){

    			//cout<<v1[r1][i]<<" ";
    			holder.push_back(v1[r1][i]);
    		}
    		//cout<<endl;
    		r1++;

    		// down
    		// r1 to r2
    		for(int i=r1;i<=r2;i++){

    			//cout<<v1[i][c1]<<" ";
    			holder.push_back(v1[i][c1]);
    		} 

    		//cout<<endl;
    		c1--;

    		// <---- left
    		// r2 to c2
    		for(int i=c1;i>=c2;i--){

    			//cout<<v1[r2][i]<<" ";
    			holder.push_back(v1[r2][i]);
    		}
    		//cout<<endl;
    		r2--;

    		// upp
    		// c2 to r1


    		for(int i=r2;i>=r1;i--){

    			//cout<<v1[i][c2]<<" ";
    			holder.push_back(v1[i][c2]);
    		}

    		//cout<<endl;
    		c2++;

    		//debug(holder.size())

    		//printVector(holder);
    		ll len=holder.size();

    		for(int i=0;i<len;i++){

    			// debug(i)
    			// cout<<holder[i%len]<<" "
    			// <<holder[(i+1)%len]<<" "<<holder[(i+2)%len]<<" "<<holder[(i+3)%len]<<endl;

    			if(holder[i%len]=='1' && 
    				holder[(i+1)%len]=='5' && holder[(i+2)%len]=='4'
    				&& holder[(i+3)%len]=='3'){
    				count++;
    			}
    			
    		}
    	}

    	//debug(count)
    	cout<<count<<endl;

    	t--;
    }

    return 0;
}