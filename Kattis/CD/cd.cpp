#include <stdio.h>
#include <list>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    while (true) {
        int i,j,temp;
        scanf("%d %d",&n,&m);
        if(n == 0 || m == 0) {
            return 0;
        }
        list<int> jackCDs, jillCDs;
        for (int i = 0; i < n; i++) {
            scanf("%d",&temp);
            jackCDs.push_back(temp);
        }
        for (int i = 0; i < m; i++) {
            scanf("%d",&temp);
            jillCDs.push_back(temp);
        }
        i = jackCDs.front();
        jackCDs.pop_front();
        j = jillCDs.front();
        jillCDs.pop_front();
        int both = 0;
        while(true) {
            if (i == j) {
                both++;
                if (jackCDs.empty() || jillCDs.empty())
                    break;
                i = jackCDs.front();
                jackCDs.pop_front();
                j = jillCDs.front();
                jillCDs.pop_front();
            } else if (i > j) {
                if (!jillCDs.empty()) {
                    j = jillCDs.front();   
                    jillCDs.pop_front();
                } else 
                    break;
            } else {
                if (!jackCDs.empty()) {
                    i = jackCDs.front();
                    jackCDs.pop_front();
                } else
                    break;
            }
        }
        printf("%d\n",both);
    }
    return 0;
}


