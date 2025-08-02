#include <iostream>
using namespace std;
int main() {
    int mark;
    cout << "Enter your mark :"<< endl ;

    cin >> mark;

    if (mark >= 90 && mark <= 100)

        cout << "Grade: A" << endl ;
         
    else if (mark >= 80)

        cout << "Grade: B" << endl ;

    else if (mark >= 70)

        cout << "Grade: C" << endl ;

    else if (mark >= 60)
     
        cout << "Grade: D" << endl ;

    else if (mark >= 0)

        cout << "Grade: F" << endl ;

    else
        cout << "Invalid mark!" << endl ;
    
    return 0;
}
