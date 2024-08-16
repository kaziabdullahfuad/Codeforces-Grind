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
void erasestuff(string &s,int index){

	if(s[index]=='\0'){
		return;
	}

	if(s[index]=='x'){
		s.erase(index,1);
	}

	erasestuff(s,index+1);
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

    	cout<<s<<endl;

    	// s.erase(2,1);
    	// cout<<s<<endl;
    	erasestuff(s,0);

    	cout<<s<<endl;

    	t--;
    }

    return 0;
}