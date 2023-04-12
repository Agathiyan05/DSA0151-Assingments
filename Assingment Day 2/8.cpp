#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    double principal = 385000;
    double roi = 13.89;
    double years = 4;

    
    double rate = roi / 100;
    double amount = principal * pow(1 + (rate / 1), 1 * years);

    
    cout << "The compounded interest after " << years << " years is: " << amount - principal << endl;

    return 0;
}

