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
class Solution{
	
	public:


};
int main()
{
	
	int t;
	cin>>t;
	string a="abc";
	
	while(t){

		string s;
		cin>>s;

		if(s[0]=='a'){
			cout<<"YES"<<endl;
		}
		else if(s[0]=='b'){

			if(s[1]=='c'){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}

		}
		else{
			if(s[1]=='a'){
				cout<<"NO"<<endl;
			}
			else{
				cout<<"YES"<<endl;
			}
		}

		t--;
	}

	return 0;
}