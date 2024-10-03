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
void solve(){

	ll n;
	cin>>n;

	string s;
	cin>>s;

	set<char> s1;
	for(int i=0;i<n;i++){

		s1.insert(s[i]);
	}

	for(int i=0;i<26;i++){

		char hold=char(i+'a');
		//cout<<hold<<" ";
		if(s1.find(hold)==s1.end()){
			cout<<hold<<endl;
			return;
		}
	}

	set<string> s2;

	for(int i=0;i<n-1;i++){

		string temp="";
		temp+=s[i];
		temp+=s[i+1];
		s2.insert(temp);
	}	
	
	for(int i=0;i<26;i++){

		for(int j=0;j<26;j++){

			string temp="";
			temp+=char(i+'a');
			temp+=char(j+'a');

			if(s2.find(temp)==s2.end()){
				cout<<temp<<endl;
				return;
			}
		}
	}
	
	set<string> s3;
	for(int i=0;i<n-2;i++){

		string temp="";
		temp+=s[i];
		temp+=s[i+1];
		temp+=s[i+2];
		//cout<<temp<<" ";
		s3.insert(temp);
	}

	for(int i=0;i<26;i++){

		for(int j=0;j<26;j++){

			for(int k=0;k<26;k++){

				string temp="";
				temp+=char(i+'a');
				temp+=char(j+'a');
				temp+=char(k+'a');

				if(s3.find(temp)==s3.end()){

					cout<<temp<<endl;
					return;
				}
			}
		}
	}


}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	solve();


    	t--;
    }

    return 0;
}