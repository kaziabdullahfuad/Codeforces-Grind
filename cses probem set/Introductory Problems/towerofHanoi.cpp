#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
int noOfMoves(int n){

	if(n==1){
		return 1;
	}

	return noOfMoves(n-1)*2+1;
}
void towerOfHanoi(int n,int source,int dest,int auxilary){

	if(n==0){
		return;
	}

	towerOfHanoi(n-1,source,auxilary,dest);

	cout<<source<<" "<<dest<<endl;

	towerOfHanoi(n-1,auxilary,dest,source);
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    //cout<<noOfMoves(n);

 	cout<<pow(2,n)-1<<endl;

 	towerOfHanoi(n,1,3,2);

 	

    return 0;
}