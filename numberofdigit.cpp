#include<iostream>
#include <limits.h>
using namespace std;
int totalDigit(int n){
     int count=0;
    while(n>0){
       
        n=n/10;
        count++;
    }
    return count;
}


int main(){
    int n;
    cin>>n;
    cout<<totalDigit(n)<<endl;
    return 0;
}