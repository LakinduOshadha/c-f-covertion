#include<iostream>
using namespace std;
int main() {
    //initializing variables
    float val;
    char conv;

    //getting user data
    cout<<"Enter a number and a letter: ";
    cin>>val>>conv;

    //calculating
    switch(conv) {
        case 'c' : cout<<"The entered temperature in Celsius : "<< (5.0/9.0)*(val-32) <<endl;break;
        case 'f' : cout<<"The entered temperature in Fahrenheit : "<< (9.0/5.0)*val +32 <<endl;break;
        default : cout<<"Entered data is invalid\n";
    }
    return 0;
}
