#include <iostream>
using namespace std;

long long f(int n){
    if(n==0||n==1)
        return 1;
    else
        return f(n-1)+f(n-2);
}

long long f2(int n){
    if(n<=1)
        return 1;
    long long result[n+1];
    result[0]=result[1]=1;
    for(int i=2;i<=n;i++)
        result[i]=result[i-1]+result[i-2];
    return result[n];
}

int main(){
    cout<<f2(100)<<endl;
    cout<<f(100)<<endl;
}
