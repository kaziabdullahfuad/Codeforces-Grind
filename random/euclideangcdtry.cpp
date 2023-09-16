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
void gcdtry(int a,int b){

	int product=1;

	int n=min(a,b);

	for(int i=2;i*i<=n;i++){

		if(a%i==0 && b%i==0){
			//cout<<i<<endl;
			while(a%i==0 && b%i==0){
				a/=i;
				b/=i;
				product*=i;
			}
			// cout<<a<<endl;
			// cout<<b<<endl;
			//product*=i;
		}
	}

	// cout<<a<<endl;
	// cout<<b<<endl;
	cout<<product<<endl;
}
int euclideanGcd(int a,int b){

	if(b==0)
		return a;

	return euclideanGcd(b,a%b);

}
int fastPow(int x,int y){

	// x is power, y is power of
	if(y==1){
		return x;
	}

	int holder=fastPow(x,y/2);

	if(y%2==0){
		return holder*holder;
	}
	else{
		return holder*holder*x;
	}
}
int main()
{
	
	int a=24,b=36;
	cout<<a<<" "<<b<<endl;

	//gcdtry(a,b);

	cout<<euclideanGcd(a,b)<<endl;

	int x=2,y=5;

	cout<<fastPow(x,y)<<endl;

	return 0;
}