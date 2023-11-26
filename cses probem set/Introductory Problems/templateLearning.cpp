#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
#define ll long long
template<typename T>
T add(T var1,T var2){

	return var1+var2;
}
template<typename t1>
t1 kad(t1 var1){

	return var1;
}
template<typename t2>
t2 summation(vector<t2> holder){

	int sum=0;
	for(int i=0;i<holder.size();i++){
		cout<<holder[i]<<" ";
		sum+=holder[i];
	}
	cout<<endl;
	return sum;
}
template<typename t3>
void printVector(vector<t3> holder){

	for(int i=0;i<holder.size();i++){

		cout<<holder[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> v1={"1","2"};
    vector<int> values={1,2,3};

    cout<<add(2,3)<<endl;
    cout<<add(5.3,0.7)<<endl;
    cout<<kad(23)<<endl;
    cout<<summation(values)<<endl;
    printVector(values);
    printVector(v1);



    return 0;
}