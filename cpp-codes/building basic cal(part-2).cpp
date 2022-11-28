    #include <iostream>
    using namespace std;
    int main() {
      
      //building the calculator
    int num1, num2;
    char op;
    
      //input from the user
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter Operator: ";
    cin >> op;
    cout << "Enter num2: ";
    cin >> num2;
    
      //logic
    if(op == '+'){
         cout << num1 + num2 << endl;
    } else if(op == '-'){
         cout << num1 - num2 << endl;
    } else if(op == '/'){
         cout << num1 / num2 << endl;
    } else if(op == '*'){
         cout << num1 * num2 << endl;
    } else {
         cout << "Invalid Operator" << endl;
    }
    return 0;
    }
