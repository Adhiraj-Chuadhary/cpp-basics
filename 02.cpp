// Given marks of a student, print on the screen:
//
// // Grade A if marks >= 90
// // Grade B if marks >= 70
// // Grade C if marks >= 50
// // Grade D if marks >= 35
// // Fail, otherwise.

#include<iostream>
using namespace std;
void grade(int marks){
    if(marks <0 ||marks>100)
    cout<<"Invalid marks";
    else if(marks>=90)
    cout<<"Grade A";
    else if(marks>=70)
    cout<<"Grade B";
    else if(marks>=50)
    cout<<"Grade C";
    else if(marks>=35)
    cout<<"Grade D";
    else
    cout<<"Fail";
}
int main(){
    int marks;
    cout<<"ENter your marks:";
    cin>>marks;
    grade(marks);
}