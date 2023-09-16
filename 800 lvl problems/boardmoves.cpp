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

		int n;
		cin>>n;

		long long int ans=0;
		long long v=8;

		for(int i=1;i<=(n/2);i++){

			ans+=i*v;

			v+=8;
		}

		cout<<ans<<endl;

		t--;
	}

	return 0;
}