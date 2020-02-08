#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string jon, doctor;
    cin >> jon >> doctor;
    jon.length() >= doctor.length() ? cout << "go" : cout << "no";
    return 0;
}
