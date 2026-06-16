//Complete the function printNumber which takes an integer input from the user and prints it on the screen.
#include <iostream>
using namespace std;
void printNumber(int num) {
    cout <<"The number is: "<< num << endl;
}
int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    printNumber(num);
    return 0;
}