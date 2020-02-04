#include <stdio.h>
#include <stack>
#include <queue>
using namespace std;

int main() {
    int inputs;
    stack<int> st;
    queue<int> q;
    priority_queue<int> prio;
    while (scanf("%d",&inputs)) {
        if(inputs < 0) return 0;
        bool isStack = true;
        bool isQueue = true;
        bool isPrio = true;
        int op;
        int val;
        while (inputs-- > 0) {
            scanf("%d %d",&op, &val);
            if(op == 1) {
                st.push(val);
                q.push(val);
                prio.push(val);
            } else {
                if(st.empty()) {
                    isStack = false;
                    isQueue = false;
                    isPrio = false;
                    continue;
                }
                if(isStack) {
                    int stval = st.top();
                    st.pop();
                    if (val != stval) isStack = false;
                }
                if (isQueue) {
                    int qval = q.front();
                    q.pop();
                    if (val != qval) isQueue = false;
                }
                if(isPrio) {
                int prioval = prio.top();
                prio.pop();
                if (+val != prioval) isPrio = false;
                }
            }
        }
        if(!isStack && !isQueue && !isPrio) printf("impossible \n");
        else if ((isStack && isQueue) || (isStack && isPrio) || (isQueue && isPrio))
            printf("not sure \n");
        else if(isStack) printf("stack \n");
        else if(isQueue) printf("queue \n");
        else printf("priority queue \n");
    }
    
    return 0;
}
