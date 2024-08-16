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
int binaryexporecur(int a, int b){

	if(b==1){
		return a;
	}
	else if(b==0){
		return 1;
	}

	ll hold=binaryexporecur(a,b/2);

	if(b%2==0){
		// jodi even hoi tahole itself multiply hobe
		return hold*hold;
	}
	else{
		// itself plus ekta a je roye gese
		return hold*hold*a;
	}
}
int binaryexpoiter(int a,int b){

	int result=1;

	while(b>0){

		if(b%2==1){
			result*=a;
		}

		a*=a;
		b/=2;
	}

	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // main thing is a^b ar hisab log(b) a kora
    // ex if a=3,b=5 3*3*3*3*3=243 onk fast korbo
    // by dividing b each time
    int a=3,b=5;

    cout<<binaryexporecur(a,b)<<endl;

    cout<<binaryexpoiter(a,b)<<endl;

    return 0;
}