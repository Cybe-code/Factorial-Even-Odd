#include <iostream>
using namespace std;
long long fact(int num)
{
       if (num<= 1)
        return 1;

       return num* fact(num- 1);
}

int getRemainder(int num)
{
    int remainder;
    remainder= num%2;
    return remainder;
}

int main()
{
    int num, remainderResult;
    long long factorialResult;
    cout<< "enter number: ";
    cin>> num;
    if (num>=21)  
    {
        cout<< "its large number" << endl;
        return 0;
    }
    if (num< 0)
    {
        cout<< "you entered invalid number !!" << endl;
        return 0;
    }
    factorialResult= fact(num);
    remainderResult= getRemainder(num);
    cout<< "the factoriel is: "<< factorialResult;
    if (remainderResult==0)
        cout<< "\nyour number is even";
    else
        cout<< "\nyour number is odd";
    
    return 0;
}
