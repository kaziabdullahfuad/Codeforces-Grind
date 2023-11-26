#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
void printVector(vector<string> v1){

	for(int i=0;i<v1.size();i++){
		cout<<v1[i]<<endl;
	}
	//cout<<endl;
}
void allStringsBit(int n,vector<string> &result,string s){

	if(s.size()==n){

		result.push_back(s);
		return;
	}
	else if(s.size()>n){
		return;
	}

	allStringsBit(n,result,s+"0");

	allStringsBit(n,result,s+"1");
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    vector<string> result;
    string s="";

    allStringsBit(n,result,s);

    printVector(result);

    // int index=0;
    // ll full_bit=pow(2,n);
    // ll holder=full_bit/2;
    // ll half=holder;
    // //cout<<full_bit<<endl; 

    // while(holder){

    // 	cout<<result[index]<<endl;
    // 	cout<<result[index+half]<<endl;

    // 	index++;
    // 	holder--;
    // }

    return 0;
}