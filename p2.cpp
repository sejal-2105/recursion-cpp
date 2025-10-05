#include <iostream>
using namespace std;

int sum(int n)
{
    if (n <= 1)
        return 1;
    else
        return n + sum(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number here: ";
    cin >> n;
    cout << "Sum upto" << "n" << " = " << sum(n);

    return 0;
}
