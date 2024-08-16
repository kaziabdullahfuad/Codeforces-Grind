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
void replacestuff(string &s,char a,char b,int index,int n){

	if(index>=n){
		return;
	}

	if(s[index]==a){
		s[index]=b;
	}

	replacestuff( s, a, b, index+1, n);
	
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
    	char a,b;
    	cin>>a>>b;
    	int len=s.size();
    	cout<<s<<endl;
    	replacestuff(s,a,b,0,len);
    	cout<<s<<endl;

    	t--;
    }

    return 0;
}