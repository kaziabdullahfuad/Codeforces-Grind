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

		int n,m;
		cin>>n>>m;
		
		if(n==1){
			cout<<0<<endl;
		}
		else if(n==2){
			cout<<m<<endl;
		}
		else{

			int ans=min(2,n-1)*m;

			cout<<ans<<endl;
		}

		t--;
	}

	// while(t){

	// 	int n,m;
	// 	cin>>n>>m;

	// 	vector<int> holder(n);

	// 	int mid=n/2;

	// 	if(n==1){
	// 		cout<<0<<endl;
	// 	}
	// 	else if(n==2){
	// 		cout<<m<<endl;
	// 	}
	// 	else{
	// 	if(m%2==0){

	// 		int val=m/2;

	// 		holder[mid-1]=val;
	// 		holder[mid+1]=val;
	// 		int sum=0;

	// 		for(int i=0;i<holder.size()-1;i++){

	// 			sum+=abs(holder[i]-holder[i+1]);
	// 		}

	// 		cout<<sum<<endl;
	// 	}
	// 	else{

	// 		int first_val=m/2;
	// 		int second_val=first_val+1;

	// 		holder[mid-1]=second_val;
	// 		holder[mid+1]=first_val;
	// 		int sum=0;

	// 		for(int i=0;i<holder.size()-1;i++){

	// 			sum+=abs(holder[i]-holder[i+1]);
	// 		}

	// 		cout<<sum<<endl;
	// 	}
	// }

	// 	t--;
	// }

	return 0;
}