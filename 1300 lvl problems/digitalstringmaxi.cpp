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

		cout<<v1[i];
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

    	string s;
    	cin>>s;

    	vector<ll> v1;

    	for(int i=0;i<s.size();i++){

    		//cout<<s[i]<<endl;
    		//cout<<s[i]-'0'<<endl;
    		v1.push_back(s[i]-'0');
    	}

    	//printVector(v1);
    	int n=s.size();

    	for(int i=1;i<n;i++){

    		ll ind=i;
    		//debug(ind)
    		while(ind>=1 && (v1[ind]-1)>v1[ind-1]){


    			v1[ind]--;
    			//debug(ind)
    			//debug(v1[ind])
    			swap(v1[ind],v1[ind-1]);
    			//printVector(v1);
    			ind--;
    		}

    		//printVector(v1);

    	}

    	printVector(v1);

    	t--;
    }

    return 0;
}