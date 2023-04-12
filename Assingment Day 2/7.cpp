#include <iostream>

using namespace std;

int main()
{
    int days;
    cout << "Enter the number of days: ";
    cin >> days;

    int years = days / 365;
    int weeks = (days % 365) / 7;
    int remainingDays = days - (years * 365) - (weeks * 7);

    cout << "You have lived for " << years << " years, " << weeks << " weeks, and " << remainingDays << " days." << endl;

    return 0;
}

