#include<iostream>
#include<string>
using namespace std;
struct node
{
    int data=0;
    node *right=nullptr;
    node *left=nullptr;

};
void insert(node*&n,int i)
{
    if(n==nullptr)
    {
        n=new node;
        n->data=i;
        n->right=nullptr;
        n->left=nullptr;

    }
    else if(i>n->data)
    {
        insert(n->right,i);
    }
    else if(i<n->data)
    {
        insert(n->left,i);
    }
}
void printData(node*n)
{
    if(n==nullptr)
    {
        return;
    }
    //cout<<n->data<<" ";


    printData(n->left);
     cout<<n->data<<" ";
     printData(n->right);

}
void printData2(node*n)
{
    if(n==nullptr)
    {
        return;
    }
    cout<<n->data<<" ";


    printData(n->left);

     printData(n->right);

}
void printData3(node*n)
{
    if(n==nullptr)
    {
        return;
    }



    printData(n->left);

     printData(n->right);

     cout<<n->data<<" ";

}
bool find(node*n,int i)
{
    if(n==nullptr)
    {
        return false;
    }
    else if(i==n->data)
    {
        return true;
    }
    else if(i>n->data)
    {
        find(n->right,i);
    }
    else if(i<n->data)
    {
        find(n->left,i);
    }

}
int main()
{
    node*n=nullptr;

    insert(n,10);
    insert(n,15);
    insert(n,20);
    insert(n,5);
    insert(n,12);
    insert(n,8);
    insert(n,9);
    insert(n,17);
    insert(n,28);
    insert(n,32);
    insert(n,100);
    insert(n,105);
    insert(n,45);
    insert(n,90);

    printData(n);
    cout<<endl;
    printData2(n);
    //cout<<find(n,2);
    cout<<endl;

    printData3(n);




    return 0;
}
