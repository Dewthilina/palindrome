#include <iostream>
using namespace std;
int main ()
{
    int num,n, rev=0,digit;
    cout << "Enter a number : ";
    cin >> num;
    n=num;

    do {
        digit = num % 10;
        rev = (rev*10) + digit;
        num = num/10;
    }
    while (num != 0);

    cout << "The reverse of the number is : " << rev << endl;

    if (n == rev)
    {
        cout << "This is a palindrome " << endl;
    }
    else
    {
        cout << "This is not a palindrome" << endl;
    }
    return 0;
}