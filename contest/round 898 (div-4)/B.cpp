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

		vector<int> v1;
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			int val;
			cin>>val;
			v1.push_back(val);
		}
		int min_val=v1[0];
		int low_index=0;
		for(int i=0;i<v1.size();i++){

			if(v1[i]<min_val){
				min_val=v1[i];
				low_index=i;
			}
		}
		v1[low_index]+=1;
		long long prod=1;
		for(int i=0;i<v1.size();i++){
			prod*=v1[i];
		}

		cout<<prod<<endl;


		t--;
	}

	return 0;
}