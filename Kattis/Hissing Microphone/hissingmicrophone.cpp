#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    if (input.find("ss") == -1)
        cout << "no hiss";
    else 
        cout << "hiss";
    return 0;
}
