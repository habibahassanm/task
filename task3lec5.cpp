#include <iostream>
#include <string>
using namespace std;
int main() 
{
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);

    int cnt = 0;
    for (int i = 0; i < text.length(); i++) {

        char c ;
        c = text[i]; 
        if (c == 'a' ||  c == 'A' ||
            c == 'e' ||  c == 'E' ||
            c == 'i' ||  c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            cnt++;
        }
    }

    cout << "Number of vowels = " << cnt << endl;
    return 0;
}