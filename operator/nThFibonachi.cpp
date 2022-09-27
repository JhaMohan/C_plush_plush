#include<iostream>
using namespace std;


int nthFibonacci(int n) {

    if(n==1) {
        return 0;
    }else if(n==2) {
        return 1;
    }

    int ans;
    int a=0,b=1;
    for(int i=3;i<=n;i++) {
        ans = a +b;
        a=b;
        b=ans;
    }
    return ans;
}



int main(){
    int n;
    cin>>n;

    cout<<"nth position number:"<<nthFibonacci(n)<<endl;
}