// Write a program to calculate the area and circumference of a circle given its radius.
#include<iostream>
using namespace std;
float circumference(float r){
    return 2*3.14*r;
}
float area(float r){
    return 3.14*r*r;
    
}
int main(){
    float r;
    cout<< "Enter radious of circle:";
    cin>> r;
    int choice;
    cout<<"Press 1 for area and 2 for circumference:";
    cin>>choice;
    if(choice==1)
        cout<<"Area="<<area(r);
    else if (choice==2)
    cout<<"Circumference="<<circumference(r);
    else 
    cout<<"Invalid";
   
}