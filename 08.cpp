//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/
#include<iostream>
using namespace std;
int sum(int a){
    int sumn=0;
    for(int i=0;i<=a;i++){
        sumn=sumn+i;
    }
    return sumn;
}
int main (){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"The sum of numbers are: "<<sum(a);
}