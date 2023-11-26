#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
template<typename T1>
void printVector(vector<T1> v1){

    for(auto x:v1){
        cout<<x<<endl;
    }
    
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    sort(s.begin(),s.end());


    //string::iterator tester;
    // tester=s.begin();
    // tester++;
    // for(tester=s.begin();tester!=s.end();tester++){
    // 	cout<<*tester<<" ";
    // }
    vector<string> v1;
    v1.push_back(s);
    while(next_permutation(s.begin(),s.end())){
    	v1.push_back(s);
    	//cout<<s<<endl;
    }

    cout<<v1.size()<<endl;
    printVector(v1);

    return 0;
}