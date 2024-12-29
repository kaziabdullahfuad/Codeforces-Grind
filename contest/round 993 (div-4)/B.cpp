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

    	// only contains characters 'p', 'q', and 'w'.
    	string a;
    	cin>>a;

    	//cout<<a<<endl;
    	for(int i=0;i<a.size();i++){

    		if(a[i]=='p'){
    			a[i]='q';
    		}
    		else if(a[i]=='q'){
    			a[i]='p';
    		}
    	}

    	reverse(all(a));

    	cout<<a<<endl;

    	t--;
    }

    return 0;
}