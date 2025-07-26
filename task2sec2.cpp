#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "please enter the num " << endl;
    cin >> num;

    num += 5;
    cout << "num+=2 =" << num << endl;

    num -= 2;
    cout << " num-=2 =" << num << endl;
    num*=3;
    cout << "num*=3 = " << num << endl;
    num/=2;
    cout <<"num/=2  ="<<num << endl;

    return 0;
}