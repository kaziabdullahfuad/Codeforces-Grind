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

    	ll a,b,c;
    	cin>>a>>b>>c;

    	vector<ll> v1;
    	v1.push_back(a);
    	v1.push_back(b);
    	v1.push_back(c);

    	sort(all(v1));
    	ll till=5;

    	while(till){

    		v1[0]+=1;
    		sort(all(v1));
    		till--;
    	}
    	ll result=1;
    	for(int i=0;i<3;i++){
    		result*=v1[i];
    	}

    	cout<<result<<endl;

    	t--;
    }

    return 0;
}