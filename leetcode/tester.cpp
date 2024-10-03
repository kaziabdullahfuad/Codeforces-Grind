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
struct node{

	int data=0;
	node *left=nullptr;
	node *right=nullptr;
};
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	node *head=new node();

	head->data=1;

	head->left=new node();

	head->left->data=2;

	cout<<head->left->data<<endl;    

    return 0;
}