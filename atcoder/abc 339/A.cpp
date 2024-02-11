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
#define debug(x) cout<<#x<<" "<<x<<endl;
#define endl "\n"
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

    string s;
    cin>>s;

    int n=s.size();
    string holder="";

    for(int i=n-1;i>=0;i--){

    	if(s[i]=='.'){
    		break;
    	}
    	else{
    		holder.push_back(s[i]);
    	}
    }

    reverse(holder.begin(),holder.end());

    cout<<holder<<endl;

    return 0;
}