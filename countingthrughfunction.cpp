#include<iostream>
using namespace std;
//function signature(void)
void printCounting(int n){//function body
    for(int i; i<=n; i++){
        cout<<i;
    }
    cout<<endl;
}

int main()
{
int n;
cin>>n;
printCounting(n); //function calling

    return 0;
}