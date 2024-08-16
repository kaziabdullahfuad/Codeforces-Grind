#include<iostream>
#include<numeric>
#include<cmath>
#include<algorithm>
#include<string>
#include<vector>
#include<set>
#include<unordered_set>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
#define endl "\n"
#define debug(x) cout<<#x<<":"<<x<<endl;
#define all(x) (x).begin(),(x).end()
template<typename t1>
void printVector(vector<t1> v1){

	for(int i=0;i<v1.size();i++){

		cout<<v1[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t){

    	int n=4;
    	int *p=new int[n];

    	for(int i=0;i<n;i++){
    		cin>>p[i];
    	}

    	for(int i=0;i<n;i++){
    		cout<<p[i]<<" ";
    	}
    	cout<<endl;

    	cout<<"P address:"<<&p<<endl;
    	cout<<"P pointing to:"<<p<<endl;

    	int *q=new int[8];

    	for(int i=0;i<n;i++){
    		q[i]=p[i];
    	}

    	for(int i=0;i<8;i++){
    		cout<<q[i]<<" ";
    	}
    	cout<<endl;
    	cout<<"Q address:"<<&q<<endl;
    	cout<<"Q pointing to:"<<q<<endl;

    	int *temp=p;
    	cout<<"temp address:"<<&temp<<endl;
    	cout<<"temp pointing to:"<<temp<<endl;

    	p=q;
    	delete temp;
    	cout<<"NEW P:"<<p<<endl;
    	for(int i=0;i<n;i++){
    		cout<<p[i]<<" ";
    	}
    	
    	t--;
    }

    return 0;
}