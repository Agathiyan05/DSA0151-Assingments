#include <iostream>

using namespace std;

int main()
{
    int i = 10, j = 5;
    int modresult = 0;
    int divresult = 0;
    modresult = i % j;
    cout << modresult;
    if (modresult != 0) {
        divresult = i / modresult;
        cout << divresult;
    } else {
        cout << "Division by zero error";
    }
    return 0;
}

