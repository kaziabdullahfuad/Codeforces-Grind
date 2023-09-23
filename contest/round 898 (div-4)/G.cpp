#include<iostream>
#include<string>
#include<vector>
using namespace std;
void printVector(vector<int>v1){
	
	vector<int>::iterator it;

	for(it=v1.begin();it!=v1.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
void print2dvec(vector<vector<int>> v2){
	
	for(auto row:v2){

		for(auto col:row){
			cout<<col<<" ";
		}
		cout<<endl;
	}
}
void solve(string s,int starter,int &count){


	for(int i=0;i<s.size()-1;i++){

		if(s[i]=='A' && s[i+1]=='B'){
			s[i]='B';
			s[i+1]='C';
		}
		else if(s[i]=='B' && s[i+1]=='A'){
			s[i]='C';
			s[i+1]='B';
		}

		solve(s,starter,count+=1);
	}
}
int main()
{
	
	int t;
	cin>>t;
	// AB=BC
	// BA=CB
	while(t){

		string s;
		cin>>s;
		int count=0;
		int starter=0;

		cout<<s<<endl;
		solve(s,starter,count);

		cout<<s<<endl;

		t--;
	}

	return 0;
}