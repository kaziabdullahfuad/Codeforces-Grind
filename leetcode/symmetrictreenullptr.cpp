#include<iostream>
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
struct TreeNode{

	int data=0;
	TreeNode *left=nullptr;
	TreeNode *right=nullptr;
};
void printbtree(TreeNode *head){

	if(head==nullptr){
		return;
	}

	cout<<head->data<<" ";

	printbtree(head->left);

	printbtree(head->right);
}
void checker(TreeNode *head,TreeNode *temp){

	if(head==nullptr && temp==nullptr){
		return;
	}

	//cout<<"HERE"<<endl;
	cout<<head->data<<" "<<temp->data<<" ";

	checker(head->left,temp->right);

	checker(head->right,temp->left);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        int ans=checkersym(root,root);

        return ans;
    }

    bool checkersym(TreeNode *head,TreeNode *temp){

		if(head==nullptr && temp==nullptr){
			return true;
		}
		else if((head==nullptr || temp==nullptr) || (head->data!=temp->data)){
			// jekono ekta equal na
			return false;
		}
	

		return checkersym(head->left,temp->right);

		return checkersym(head->right,temp->left);
	}
};
int main()
{
	Solution sol1;

	TreeNode *head=new TreeNode();
	TreeNode *temp=head;
	head->data=1;

	head->left=new TreeNode();
	head->left->data=2;

	head->left->left=new TreeNode();
	head->left->left->data=3;
	head->left->right=new TreeNode();
	head->left->right->data=4;

	head->right=new TreeNode();
	head->right->data=2;

	head->right->left=new TreeNode();
	head->right->left->data=4;
	head->right->right=new TreeNode();
	head->right->right->data=3;

	// 1 2 3 4 2 4 3
	// printbtree(head);
	// cout<<endl;

	// cout<<temp->data<<endl;
	// cout<<temp->left->data<<endl;

	// checker(head,temp);

	// cout<<endl;

	// cout<<checkersym(head,temp)<<endl;

	cout<<sol1.isSymmetric(head)<<endl;

    return 0;
}