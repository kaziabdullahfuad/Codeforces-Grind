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
	
	int n;
	cin>>n;

	int arr[n];

	for(int i=0;i<n;i++){
		int val;
		cin>>val;
		arr[i]=val;
	}

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	 

	return 0;
}