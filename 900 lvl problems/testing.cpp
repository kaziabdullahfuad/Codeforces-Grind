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

    	ll n,m,i,j;
    	cin>>n>>m>>i>>j;

    	// total diagonals 4. d1 d2 d3 d4
    	// d1 and d2 commup upwards
    	// d1 and d3  common left
    	// d1 and d4 no common
    	// d2 and d3 no common

    	// so khali d1 and d4 ar d2 and d3 check korlei howar kotha

    	if(n==1 && m==1){
    		cout<<1<<" "<<1<<" "<<1<<" "<<1<<endl;
    	}
    	else{


    	// d1 and d4 distance
    	ll dist;
    	ll max=0;
    	ll x1,y1,x2,y2;
    	// d4= (n,m)
    	dist+=((i-1)+(j-1))*2;
    	//cout<<dist<<endl;
    	//cout<<(n-i)<<" "<<(m-j)<<endl;
    	dist+=((n-i)+(m-j))*2;
    	//cout<<dist<<endl;

    	if(dist>max){
    		x1=1;
    		y1=1;
    		x2=n;
    		y2=m;
    		max=dist;
    	}

    	// d2 and d3 distance
    	dist=0;

    	// d2=(1,m) and d3=(n,1)
    	dist+=((i-1)+(m-j))*2;
    	//cout<<dist<<endl;

    	dist+=((n-i)+(j-1))*2;
    	//cout<<dist<<endl;

    	if(dist>max){

    		x1=1;
    		y1=m;
    		x2=n;
    		y2=1;
    		max=dist;
    	}

    	cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;
    }


    	t--;
    }

    return 0;
}