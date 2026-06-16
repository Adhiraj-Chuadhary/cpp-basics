// Write a program to convert temperature from Celsius to Fahrenheit.
#include<iostream>
using namespace std;
float change(float cel){
    return (cel*9/5)+32;
}
int main (){
    float cel;
    cout<<"Enter temp in cel:";
    cin>>cel;
    cout<<"Temp in deg:"<<change(cel);
}