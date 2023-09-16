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
	
	long long int n;
	cin>>n;


	while(n!=1){

		cout<<n<<" ";

		if(n%2==0){
			n/=2;
		}
		else{

			n=n*3+1;
		}
	}

	cout<<n<<endl;

	return 0;
}