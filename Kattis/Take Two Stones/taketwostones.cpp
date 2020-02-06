#include <stdio.h>
#include <iostream>
using namespace std;

string winner(int);

int main() {
    int stones;
    scanf("%d",&stones);
    string won = winner(stones);
    printf("%s \n",won.c_str());
    return 0;
}

string winner(int stones) {
    int i = stones % 2;
    return i ? "Alice" : "Bob";
}
