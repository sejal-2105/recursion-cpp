#include <iostream>
using namespace std;

void revNum(int n)
{
    if (n != 0)
    {
        cout << n % 10;  
        revNum(n / 10);   
    }
}

int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    cout << "Reversed number = ";
    revNum(num);
    cout << endl;

    return 0;
}
