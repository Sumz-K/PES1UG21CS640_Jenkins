#include<iostream>
using namespace std;
int main(){
    int i=1;
    int a[]={0,2,0,0,2,0,0,3,0,0};
    for(int i=1;i<8;i++){
        cout<<a[i]<<endl;
        a[i+1]=a[i]+a[i-1]
    }

}
