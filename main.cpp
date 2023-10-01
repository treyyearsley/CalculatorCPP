#include <iostream>

using namespace std;


int addition() {
    // x and y will be give by the user
    double x;
    double y;
    cout << "Enter the first number then hit enter.: "<< endl;
    cin >> x;
    cout << "Enter the second number then hit enter.:" << endl;
    cin >> y;
    double sum = x + y;
    cout << "The sum is: " << sum << endl;
    return 0;
}

int subtraction() {
    // x and y will be give by the user
    double x;
    double y;
    cout << "Enter the first number then hit enter. "<< endl;
    cin >> x;
    cout << "Enter the second number then hit enter." << endl;
    cin >> y;
    double difference = x - y;
    cout << "The difference is: " << difference << endl;
    return 0;
}

int multiplication() {
    // x and y will be give by the user
    double x;
    double y;
    cout << "Enter the first number then hit enter. "<< endl;
    cin >> x;
    cout << "Enter the second number then hit enter." << endl;
    cin >> y;
    double product = x * y;
    cout << "The product is: " << product << endl;
    return 0;
}

int division() {
    // x and y will be give by the user
    double x;
    double y;
    cout << "Enter the first number then hit enter. "<< endl;
    cin >> x;
    cout << "Enter the second number then hit enter." << endl;
    cin >> y;

    // Don't let user divide by zero.
    if (x == 0) {
        cout << "You can't divide by zero" << endl;
    }

    if (y == 0) {
        cout <<" You can't divide by zero" << endl;
    }
    double quotient = x / y;
    cout << "The quotient is: " << quotient << endl;

    return 0;
}

int remainder() {
    // x and y will be give by the user
    int x;
    int y;
    cout << "Enter the first whole number then hit enter. "<< endl;
    cin >> x;
    cout << "Enter the second whole number then hit enter." << endl;
    cin >> y;
    int remainder = x % y;
    cout << "The remainder is: " << remainder << endl;
    return 0;
}

int main() {
    //leave variables blank because they will be entered by the user.
    char op;
    string answer = "";

    cout << "Please enter a math operator; +, -, *, /, %." << endl;
    cin >> op;

    //The switch will let the computer differentiate between operators. Similar to an if-else statement.
    switch(op) {
        case '+':
            addition();
            break;

        case '-':
            subtraction();
            break;

        case '*':
            multiplication();
            break;

        case '/':
            division();
            break;

        case '%':
            remainder();
            break;

            //Let the user know if an improper operator has been entered.
        default:
            cout << "Please enter a correct operator." << endl;
    }

    //Allow the user to keep solving problems if they wish.
    cout << "Would you like to solve another problem? (yes or no)" << endl;
    cin >> answer;

    //This while loop is what allows for the repeat use.
    while (answer == "yes") {

        // The operator that is entered will tell the program what function to use.
        cout << "Please enter a math operator; +, -, *, /, %." << endl;
        cin >> op;

        switch(op) {
            case '+':
                addition();
                break;

            case '-':
                subtraction();
                break;

            case '*':
                multiplication();
                break;

            case '/':
                division();
                break;

            case '%':
                remainder();
                break;

            default:
                cout << "Please enter a correct operator." << endl;
        }
        cout << "Would you like to solve another problem? (yes or no)" << endl;
        cin >> answer;

    }


    return 0;
}
