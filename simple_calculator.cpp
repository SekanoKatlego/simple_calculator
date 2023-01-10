//calculator that can provide basic mathematic operations
#include <iostream>
using namespace std;

int main()
{
    float var1, var2;
    char operation;

    cout << "Please enter the first float value: " << endl;
    cin >> var1;
    cout << "Please enter the second value: " << endl;
    cin >> var2;
    cout << "Please enter the operation required: " << endl;
    cin >> operation;


    cout.setf(ios::fixed);
    cout.precision(2);
    if(operation == '+')
        cout << "The sum of " << var1 << " and " << var2 << " is " << var1 + var2 << endl;
    else if (operation == '-')
        cout << "The difference of " << var1 << " and " << var2 << " is " << var1 - var2 << endl;
    else if (operation == '*')
        cout << "The product of " << var1 << " and " << var2 << " is " << var1 * var2 << endl;
    else if (operation == '/')
        cout << "The quotient of " << var1 << " and " << var2 << " is " << var1 / var2 << endl;
    else if (operation == '%')
        cout << "The remainder of " << var1 << " and " << var2 << " is " << (int)var1 % (int)var2 << endl;

    return 0;
}
