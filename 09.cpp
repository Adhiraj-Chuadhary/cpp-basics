//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<iostream>
#include<cmath>
using namespace std;
float simple(int p,int t,float r){
    return (p*r*t)/100;
}
float compound(int p, int t,float r){
    float amount= p * pow((1 + r / 100), t);
    return amount - p;
}
int main (){
    int p,t,c;
    float r;
    cout<<"Enter princiapl time and rate of intrest:";
    cin>>p>>t>>r;
    cout<<"Enter 1 for simple intreat and 2 for compound intrest:";
    cin>>c;
    if(c==1){
        cout<<"Simple intrest is:"<<simple(p,r,t);
    }
    else
        cout<<"Compound intrest is:"<<compound(p,r,t);
}