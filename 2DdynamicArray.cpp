#include<iostream>
using namespace std;
int main()
{

    int **arr;
    //int r=5,c=6;
    int r ,c;
    cout<<"enter the no of rows and colums"<<endl;
    cin>>r>>c;
    cout<<"creating an array of "<<r<<" rows and "<<c<<" coloums "<<endl;
    arr=new int *[r];
    for(int i=0;i<r;i++)
    {
        arr[i]=new int[c];
    }
    cout<<"enter the data"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cout<<arr[i][j]<<'\t';
        cout<<endl;
    }

}

