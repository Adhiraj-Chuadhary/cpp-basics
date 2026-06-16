//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

#include<iostream>
using namespace std;
int perimeter(int length , int breath){
    return 2*(length*breath);
}
int area(int length,int breath){
    return length*breath;
    
}
int main(){
     int length , breath;
    cout<< "Enter length and breath:";
    cin>> length >>breath;
    int choice;
    cout<<"Press 1 for area and 2 for perimeter:";
    cin>>choice;
    if(choice==1)
        cout<<"Area="<<area(length,breath);
    else
    cout<<"Perimeter="<<perimeter(length,breath);
    
   
}