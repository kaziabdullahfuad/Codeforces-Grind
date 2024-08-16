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

    	ll n,m,x1,y1,x2,y2;
    	cin>>n>>m>>x1>>y1>>x2>>y2;

    	// movements are (x1,y1+1), (x1+1,y), (x1-1,y1),(x1,y1-1).

    	ll count=0;

    	if((x1-1)>=1){
    		count++;
    	}

    	if((x1+1)<=n){
    		count++;
    	}

    	if(y1+1<=m){
    		count++;
    	}
    	
    	if(y1-1>=1){
    		count++;
    	}
    	ll count2=0;

    	if((x2-1)>=1){
    		count2++;
    	}

    	if((x2+1)<=n){
    		count2++;
    	}

    	if(y2+1<=m){
    		count2++;
    	}

    	if(y2-1>=1){
    		count2++;
    	}


    	cout<<min(count,count2)<<endl;

    	t--;
    }

    return 0;
}