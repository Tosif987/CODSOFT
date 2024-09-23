#include <iostream>
#include <math.h>
using namespace std;

void cal(){
    char choice;
    double num1, num2;
    cout << "Select your choice (+, -, *, /,^): ";
    cin >> choice;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (choice) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            } else {
                cout << "Division by zero!" << endl;
            }
            break;
        case '^':
            cout << num1 << "^" << num2 << "="<< pow(num1,num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
}
int main() {
    char select;
    cout << "<-...Calculator...->" << endl;
    cal();
    cout<<"do you want to calculate again ?(y/n)"<<endl;
    cin>>select;
    while(select=='y'){
        cal();
        cout<<"do you want to calculate again ?(y/n)"<<endl;
        cin>>select;
    }
    cout<<"exit calculator"<<endl;
    return 0;
}