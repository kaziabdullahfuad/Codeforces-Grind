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
void replacestuff(string &s,int index,int n){

	if(index>=s.size()){
		return;
	}
	



	if(index==n-1){
		replacestuff(s,index+1,n);
	}
	else if(index<n-1 && s[index]!=s[index+1]){

		replacestuff(s,index+1,n);
	}
	else{
		// mane duita equal
		s.erase(index,1);

		replacestuff(s,index,n);
	}
	
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
    	
    	int len=s.size();
    	cout<<s<<endl;
    	
    	replacestuff(s,0,len);
    	
    	cout<<s<<endl;

    	// cout<<s[0]<<endl;
    	// s.erase(0,1);
    	// cout<<s.size()<<endl;
    	// cout<<s[0]<<endl;
    	// cout<<s<<endl;

    	t--;
    }

    return 0;
}