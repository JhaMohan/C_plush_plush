#include<iostream>
using namespace std;

int getSum(int *arr,int size) {
    if(size==0) return 0;
    if(size==1) return arr[0];

   

    return  arr[0] + getSum(arr+1,size-1);

}

int main() {
    int arr[5] = {1,2,13,45,53};
    int size =5;
    int ans = getSum(arr,size);

   cout<<"Sum: "<<ans<<endl;
   return 0;
}