#include "stack.h"
void Stack::push(int dat) {
    if (SP < SZ) {
        Data[SP] = dat;
        SP++;
    }
    else cout << INVALID_POS;
}

int Stack::pop() {
    if (SP > 0) return Data[--SP];
    return EMPTY_STACK;
}

int Stack::iterate_pop(int* org, int cnt) {
    int tcnt = cnt, dat;

    if (SP > 0) {
        for (int a = SP - 1; a >= 0; a--) {
            dat = this->pop();
            printf("%6d", dat);   org[tcnt] = dat;
            tcnt++;
        }
    }
    return tcnt;
}

void Radix_Sort(int org[], int SZ) {
    int Max = 0, Maxdigit;
    for (int a = 0; a < SZ; a++) {
        if (org[a] > Max) Max = org[a];
    }
    Maxdigit = (int)log10(Max) + 1;

    Stack stack[10];
    for (int a = 0; a < 10; a++) {
        stack[a] = Stack(SZ);
    }

    int dat = 0, r = 0, deci = 1, direction = 1;
    if (Maxdigit % 2 == 0)   direction = -direction;

    int cnt = 0, si = 0, gg = 9, step = 1;

    for (int c = 0; c < Maxdigit; c++) {
        for (int a = 0; a < SZ; a++) {
            dat = org[a];
            r = dat / deci % 10;
            cout.width(6);
            cout << dat;
            stack[r].push(dat);
        }
        cout << endl;

        cnt = 0;
        if (direction == 1) { si = 0; gg = 10; }
        else { si = 9; gg = -1; }

        for (int a = si; a != gg; a += direction) {
            cnt = stack[a].iterate_pop(org, cnt);
        }

        cout << endl << endl;
        deci *= 10; direction = -direction;
    }

    for (int a = 0; a < 10; a++) {
        stack[a].clear();
    }
}