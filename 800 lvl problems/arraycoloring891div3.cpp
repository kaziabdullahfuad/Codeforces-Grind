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

		vector<int> v1(n);

		for(int i=0;i<n;i++)cin>>v1[i];

		int odd=0;
		int even=0;

		for(int i=0;i<n;i++){

			if(v1[i]%2==0){
				even++;
			}
			else{
				odd++;
			}
		}

		if(odd==0){
			cout<<"YES"<<endl;
		}
		else{

			if(odd%2==0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}

		t--;
	}

	return 0;
}