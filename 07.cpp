#include<iostream>
using namespace std;
void swapnum(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;
    return;
}
int main (){
    int a ,b;
    cout<<"Enter number to swap:";
    cin>>a>>b;
    cout<<"Numbers before swapping:"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Numbers after swapping:"<<a<<" "<<b<<endl;
}