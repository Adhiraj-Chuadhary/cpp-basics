//Q7: Write a program to swap two numbers without using a third variable.

/*
Sample Test Cases:
Input 1:
10 20
Output 1:
After swap: 20 10

Input 2:
7 14
Output 2:
After swap: 14 7

*/
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