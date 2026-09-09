// This program calculates the user's pay.
#include <iostream>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    double hours, rate, pay;

    // Get the number of hours worked.
    cout << "How many hours did you work? ";
    cin >> hours;

    //Get the hourly pay rate.
    cout << "how much do you get paid per hour? ";
    cin >> rate;

    //Calculate the pay.
    pay = hours * rate;

    //Display the pay.
    cout << "You have earned $" << pay << endl;
    return 0;
}