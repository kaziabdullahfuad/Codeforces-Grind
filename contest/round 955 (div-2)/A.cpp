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

    	ll x1,y1,x2,y2;
    	cin>>x1>>y1>>x2>>y2;
    	//cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2<<endl;

    	if((x1<y1 && x2>y2) || (x1>y1 && y2>x2)){

    		cout<<"NO"<<endl;
    	}
    	else{
    		cout<<"YES"<<endl;
    	}

    	t--;
    }

    return 0;
}