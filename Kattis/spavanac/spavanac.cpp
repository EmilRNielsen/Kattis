#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int h, m;
    cin >> h >> m;
    m -= 45;
    if (m < 0) {
        h--;
        m = 60 + m;
    }
    if (h < 0)
        h = 23;
    printf("%d %d",h,m);

    return 0;
}
