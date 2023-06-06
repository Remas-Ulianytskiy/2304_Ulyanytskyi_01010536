#include <iostream>

using namespace std;

double get_user_value() {
    double value;
    cin >> value;
    return value;
}

int main()
{
    const double first_distance = 1.5;
    double result = 0;
    int days_number;

    cout << "Enter the number of days the turtle will travel: ";
    days_number = get_user_value();

    for (int i = 0; i < days_number; i++) {
        result += first_distance + i * 0.2;
    }

    cout << "In " << days_number << " the turtle walked " << result << " meters";

    return 0;
}