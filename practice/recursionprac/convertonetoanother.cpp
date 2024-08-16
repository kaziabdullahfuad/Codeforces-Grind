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
int convertAnother(string &s1,string &s2,int curindex,int curindex2){

	if(curindex==s1.length()){

		return s2.length()-curindex2;
	}

	if(curindex2==s2.length()){

		return s1.length()-curindex;
	}


	if(s1[curindex]==s2[curindex2]){

		return convertAnother(s1,s2,curindex+1,curindex2+1);
	}

	// insert
	int c1=1+convertAnother(s1,s2,curindex+1,curindex2);
	// delete
	int c2=1+convertAnother(s1,s2,curindex,curindex2+1);
	// replace
	int c3=1+convertAnother(s1,s2,curindex+1,curindex2+1);


	return min(min(c1,c2),c3);

}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	// string s1,s2;
    	// cin>>s1>>s2;
    	string s1="table";
    	string s2="tbres";

    	ll n1=s1.size();
    	ll n2=s2.size();

    	cout<<convertAnother(s1,s2,0,0)<<endl;

    	t--;
    }

    return 0;
}