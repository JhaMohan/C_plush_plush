#include<iostream>
using namespace std;


bool isPresent(int arr[][4],int target,int row,int col) {

    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            if(arr[row][col]==target)
                return 1;
        }
    }
    return 0;

}

int main() {

    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    // int arr[3][4] = {{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};



    //row wise input
   /* for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            cin>>arr[row][col];
        }
    } 

    //col wise input
    for(int col=0;col<4;col++) {
        for(int row=0;row<3;row++) {
            cin>>arr[row][col];
        }
    }*/

    //print array
    for(int row=0;row<3;row++) {
        for(int col=0;col<4;col++) {
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }


    cout<<"Enter the element";
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4)) {
        cout<<"Element found"<<endl;
    }else {
        cout<<"No element found"<<endl;
    }
}