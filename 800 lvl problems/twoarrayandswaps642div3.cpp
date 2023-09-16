#include<iostream>
#include<algorithm>
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
	
	int t;// no of test cases;
	cin>>t;
	

	while(t){
		
		vector<int> v1;
		vector<int> v2;
		int n;
		cin>>n;
		int k;
		cin>>k;
		
		// initialize value of array 1
		for(int i=0;i<n;i++){
			int val;
			cin>>val;
			v1.push_back(val);
		}

		// initialize value of array 2
		for(int i=0;i<n;i++){
			int val;
			cin>>val;
			v2.push_back(val);
		}

		sort(v1.begin(),v1.end());
		sort(v2.rbegin(), v2.rend());

		//  printVector(v1);
		// printVector(v2);

		// swapping

		for(int i=0;i<k;i++){
			if(v2[i]>v1[i]){
				swap(v1[i],v2[i]);
			}
		}

		int sum=0;

		for(int i=0;i<v1.size();i++){

			sum+=v1[i];
		}

		cout<<sum<<endl;

		t--;
	}

	/*
	 Test Cases:
	 5
2 1
1 2
3 4
5 5
5 5 6 6 5
1 2 5 4 3
5 3
1 2 3 4 5
10 9 10 10 9
4 0
2 2 4 3
2 4 2 3
4 4
1 2 2 1
4 4 5 4
	*/

	//sort(v2.rbegin(), v2.rend());

	// vector<int> v1={2,1};
	// vector<int> v2={3,4};
	// int k;
	// sort(v1.begin(),v1.end());

	// printVector(v1);

	// sort(v2.begin(),v2.end(),greater<int>());

	// printVector(v2);

	// for(int i=0;i<k;i++){

	// 	swap(v1[i],v2[i]);
	// }

	// printVector(v1);
	// int sum=0;
	// for(int i=0;i<v1.size();i++)
	// 	sum+=v1[i];

	// cout<<sum;
	

	return 0;
}