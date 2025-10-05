#include <iostream>
using namespace std;

void revStr(char *str)
{
    if(*str != '\0')
    {
        revStr(str+1);
        cout << *str;
    }
}

int main()
{
    char n[100];
    cout << "Enter a string here: ";
    cin >> n;
    cout << "Reverse string = ";;
    revStr(n);

    return 0;
}
