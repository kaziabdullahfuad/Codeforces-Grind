#include<iostream>
#include<string>
using namespace std;
void fillup(int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
}
void print(int arr[],int x)
{
    for(int i=0;i<x;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int drinkml(int x,int y,int nl)
{
    int drink=(x*y)/nl;

    return drink;
}
int limeslice(int x,int y)
{
    return x*y;
}
int salt(int x,int y)
{
    return x/y;
}
int findmin(int x,int y,int z)
{
    int arr[3];

     arr[0]=x;
     arr[1]=y;
     arr[2]=z;

    int mn=arr[0];

    for(int i=0;i<3;i++)
    {
        if(arr[i]<mn)
            mn=arr[i];
    }
    return mn;
}
int nooftoasts(int arr[],int x)
{
   int drinktoast=drinkml(arr[1],arr[2],arr[6]);
   //cout<<drinktoast;
   int limeslicetoast=limeslice(arr[3],arr[4]);
  // cout<<endl<<limeslicetoast<<endl;
   int salttoast=salt(arr[5],arr[7]);
   //cout<<salttoast;

   int min=findmin(drinktoast,limeslicetoast,salttoast);//find minimum amaong three
   //cout<<endl<<min;

   int toast=min/arr[0];
   //cout<<toast;
   return toast;



}
int main()
{
    const int x=8;
    int *arr=new int[x];//{3,4,5,10,8,100,3,1};
    cout<<"Fill up the array: "<<endl;
    fillup(arr,x);


    cout<<"Now printing the array: "<<endl;

    print(arr,x);

    cout<<endl;

    cout<<"No of toasts that can be produced: ";

    cout<<nooftoasts(arr,x);



    delete[]arr;

    return 0;
}
