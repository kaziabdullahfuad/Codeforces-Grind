#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
void printVector(vector<long long int> v1){

	vector<long long int>::iterator it;

	for(it=v1.begin();it!=v1.end();it++){

		cout<<*it<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    long long int n;
    cin>>n;
    vector<long long int> v1(n);

    for(int i=0;i<n;i++){
    	cin>>v1[i];
    }

    //printVector(v1);

    long long int count=0;

    for(int i=1;i<v1.size();i++){

    	if(v1[i]<v1[i-1]){
    		count+=v1[i-1]-v1[i];
    		//v1[i]+=v1[i-1]-v1[i];
    		v1[i]=v1[i-1];
    	}
    }

    cout<<count<<endl;

    return 0;
}