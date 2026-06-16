// Write a program to swap two numbers using a third variable.
#include<iostream>
using namespace std;
void swap(int &a ,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"The numbers you entered:"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Numbers after swapping:"<<a<<" "<<b<<endl;
}
