#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Welcome to Basic Virtual Calculator\n"
         << "Press 1 to continue or 0 to exit : ";
    cin >> n;
    while (n == 1)
    {
        int opt;
        // Variable
        int a, b, incvar, temp, ans;
        cout << "Select the Opereation given below --\n";
        cout << "(1)Addition\n";
        cout << "(2)Subtration\n";
        cout << "(3)Multiplication\n";
        cout << "(4)Division\n";
        cout << "(5)Square\n";
        cout << "(6)Cubic\n";
        cout << "Enter Position of above Operation for Calculation : ";
        cin >> opt;
        switch (opt)
        {
        case 1:
            cout << "1st Input number : ";
            cin >> a;
            cout << "2nd Input number : ";
            cin >> b;
            temp = a + b;
            cout << "Enter 4 to get answer or 3 to more number : ";
            cin >> incvar;
            while (incvar == 3)
            {
                cout << "Enter next number : ";
                cin >> a;
                temp = temp + a;
                cout << "Enter 4 to get answer or 3 to add more number : ";
                cin >> incvar;
            }
            ans = temp;
            cout << "Your Final Answer : " << ans << endl;
            cout << "Press 1 to continue or 0 to exit : ";
            cin >> n;
            break;

        case 2:
            cout << "1st Input number : ";
            cin >> a;
            cout << "2nd Input number : ";
            cin >> b;
            temp = a - b;
            cout << "Enter 4 to get answer or 3 to more number : ";
            cin >> incvar;
            while (incvar == 3)
            {
                cout << "Enter next number : ";
                cin >> a;
                temp = temp - a;
                cout << "Enter 4 to get answer or 3 to subtract more number : ";
                cin >> incvar;
            }
            ans = temp;
            cout << "Your Final Answer : " << ans << endl;
            cout << "Press 1 to continue or 0 to exit : ";
            cin >> n;
            break;
        case 3:
            cout << "1st Input number : ";
            cin >> a;
            cout << "2nd Input number : ";
            cin >> b;
            temp = a * b;
            cout << "Enter 4 to get answer or 3 to more number : ";
            cin >> incvar;
            while (incvar == 3)
            {
                cout << "Enter next number : ";
                cin >> a;
                temp = temp * a;
                cout << "Enter 4 to get answer or 3 to multiply further number : ";
                cin >> incvar;
            }
            ans = temp;
            cout << "Your Final Answer : " << ans << endl;
            cout << "Press 1 to continue or 0 to exit : ";
            cin >> n;
            break;
        case 4:
            cout << "1st Input number : ";
            cin >> a;
            cout << "2nd Input number : ";
            cin >> b;
            if (b == 0)
            {
                cout << "Error\n";
                cout << "Press 1 to continue or 0 to exit : ";
                cin >> n;
                break;
            }
            temp = a / b;
            cout << "Enter 4 to get answer or 3 to more number : ";
            cin >> incvar;

            while (incvar == 3)
            {
                cout << "Enter next number : ";
                cin >> b;
                if (b == 0)
                {
                    cout << "Error";
                    cout << "Press 1 to continue or 0 to exit : ";
                    cin >> n;
                    break;
                }
                temp = temp / b;
                cout << "Enter 4 to get answer or 3 to divide with another number : ";
                cin >> incvar;
            }
            ans = temp;
            cout << "Your Final Answer : " << ans << endl;
            cout << "Press 1 to continue or 0 to exit : ";
            cin >> n;
            break;
        case 5:
            cout << "Square of : ";
            cin >> a;
            ans = a * a;
            cout << "Square of " << a << " is " << ans << endl;
            cout << "Press 1 to continue or 0 to exit : ";
            cin >> n;
            break;
        case 6:
            cout << "Cubic of : ";
            cin >> a;
            ans = a * a * a;
            cout << "Cube of " << a << " is " << ans << endl;
            cout << "Press 1 to continue or 0 to exit : ";
            cin >> n;
            break;
        default:
            cin >> n;
            break;
        }
    }
    return 0;
}