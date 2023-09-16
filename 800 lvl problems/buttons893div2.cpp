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

	while(t){

		int a,b,c;
		cin>>a>>b>>c;

		if(a>b){
			cout<<"First"<<"\n";
		}
		else if(b>a){
			cout<<"Second"<<"\n";
		}
		else{

			if(c%2==0){
				cout<<"Second"<<"\n";
			}
			else{
				cout<<"First"<<"\n";
			}
		}

		t--;
	}

	return 0;
}