#include<iostream>
#include<vector>
#include<string>
using namespace std;
void print(int arr[],int len)
{
    for(int i=0;i<len+1;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
/*void rangeSum(int arr[],int len)//Using the prefix sum algorithm
{
    int arr2[len];

    arr2[0]=arr[0];
    int sum=arr2[0];
    for(int i=1;i<len;i++)
    {
        sum+=arr[i];
        arr2[i]=sum;
    }
    //print(arr2,len);


}*/
void rangeSum2(int arr[],int len)//Using the prefix sum algorithm
{
    int arr2[len+1];

    arr2[0]=0;
    int sum=arr2[0];
    for(int i=1;i<len+1;i++)
    {
        sum+=arr[i-1];
        arr2[i]=sum;
    }
    print(arr2,len);

    cout<<endl;

    int x=3,y=1;
    cout<<arr2[x]-arr2[y-1]<<endl;
    x=1,y=6;
    //cout<<arr2[x]-arr2[y-1]<<endl;

}
int main()
{

    int arr[]={6,4,2,7,2,7};

    int len=sizeof(arr)/sizeof(arr[0]);

    //rangeSum(arr,len);
    rangeSum2(arr,len);


    return 0;
}
