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

		long long int n;
		cin>>n;
		vector<long long int> v1(n,0);

		for(int i=1;i<=n;i++){

			if(v1[i-1]==0){
				int holder=i;

				while(holder<=n){
					cout<<holder<<" ";
					v1[holder-1]=1;
					holder*=2;
				}
			}
		}

		cout<<endl;


		t--;
	}

	return 0;
}