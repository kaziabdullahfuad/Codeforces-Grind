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

		// the number of arrays
		int n;
		cin>>n;
		long long sum=0;
		int lowest_min=INT_MAX;
		int lowest_second_min=INT_MAX;
		//vector<vector<int>> holder;

		while(n){

			// the number of elements in the array
			int m;
			cin>>m;
			vector<int> temp(m,0);

			for(int i=0;i<m;i++){

				cin>>temp[i];
			}

			int min_val=temp[0];
			int second_min=INT_MAX;


			for(int i=0;i<temp.size();i++){

				if(temp[i]<min_val){
					min_val=temp[i];
				}
			}

			if(min_val<lowest_min){
				lowest_min=min_val;
			}
			int count=0;
			for(int i=0;i<temp.size();i++){

				if(temp[i]>min_val && temp[i]<second_min){
					second_min=temp[i];
				}

				if(temp[i]==min_val)
					count++;
			}
			if(count>1){
				second_min=min_val;
			}

			if(second_min<lowest_second_min){
				lowest_second_min=second_min;
			}

			sum+=second_min;
			// cout<<min_val<<endl;
			// cout<<second_min<<endl;
			// cout<<lowest_min<<endl;
			// cout<<lowest_second_min<<endl;
			//cout<<sum<<endl;

			n--;
		}
		
		sum-=lowest_second_min;
		sum+=lowest_min;

		cout<<sum<<endl;

		t--;
	}


	return 0;
}