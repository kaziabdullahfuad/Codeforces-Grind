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
void solveHelper(vector<int> &temp,vector<int> &holder,vector<bool> &flag,vector<vector<int>> &result){

	if(holder.size()==temp.size()){
		result.push_back(holder);
		return;
	}

	if(result.size()>=1){
		return;
	}


	for(int i=0;i<temp.size();i++){

		if(result.size()>=1){
			return;
		}

		if(flag[i]==false){

			if(holder.size()==0){
				holder.push_back(temp[i]);
				flag[i]=true;

				solveHelper(temp,holder,flag,result);
				flag[i]=false;
				holder.pop_back();
			}
			else{

				if(abs(temp[i]-holder.back())!=1){
					holder.push_back(temp[i]);
					flag[i]=true;
					solveHelper(temp,holder,flag,result);
					flag[i]=false;
					holder.pop_back();
				}
			}

		}
	}
}
// results in tle
void solve(int n){

	if(n==2 || n==3){
		cout<<"NO SOLUTION"<<endl;
	}

	vector<int> temp;
	vector<int> holder;
	vector<bool> flag(n,0);
	vector<vector<int>> result;

	for(int i=0;i<n;i++){
		temp.push_back(i+1);
	}

	solveHelper(temp,holder,flag,result);

	print2dvec(result);
	
}

void realSolve(int n){

	if(n==1){
		cout<<1<<endl;
	}

	if(n==2 || n==3){
		cout<<"NO SOLUTION"<<endl;
	}

	for(int i=2;i<=n;i+=2){
		cout<<i<<" ";
	}

	for(int i=1;i<=n;i+=2){
		cout<<i<<" ";
	}

}
int main()
{
	
	int n;
	cin>>n;

	//solve(n);

	realSolve(n);

	
	return 0;
}