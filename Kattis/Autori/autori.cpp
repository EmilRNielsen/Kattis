#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string line, token;
    size_t pos = 0;
    cin >> line;
    while ((pos = line.find("-")) != string::npos) {
    cout << line.at(0);
    line.erase(0, pos + 1);
}
    cout << line.at(0);
    return 0;
}
