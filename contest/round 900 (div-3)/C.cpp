#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
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
void findDivisor(long long x,vector<long long> &v1){

    for(int i=1;i<x;i++){

        if(x%i==0){
            v1.push_back(i);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int t;
    cin>>t;

    while(t){
        
        long long n,k,x;
        cin>>n>>k>>x;


        vector<long long> v1;
        // all divisors of x
        findDivisor(x,v1);

        for(auto x:v1) cout<<x<<" ";

        cout<<endl;

        t--;
    }

    return 0;
}