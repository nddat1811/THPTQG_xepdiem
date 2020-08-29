#include "sortDecending.h"


void sortDescendingkhoiD(vector<THPTQG>& a) {
    for (int i = 0;i < a.size();i++) {
        for (int j = i + 1;j < a.size() - 1;j++) {
            if (a[i].khoiD < a[j].khoiD) {
                THPTQG temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void sortDescendingkhoiA(vector<THPTQG>& a) {
    for (int i = 0;i < a.size();i++) {
        for (int j = i + 1;j < a.size() - 1;j++) {
            if (a[i].khoiA < a[j].khoiA) {
                THPTQG temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sortDescendingkhoiA1(vector<THPTQG>& a) {
    for (int i = 0;i < a.size();i++) {
        for (int j = i + 1;j < a.size() - 1;j++) {
            if (a[i].khoiA1 < a[j].khoiA1) {
                THPTQG temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sortDescendingkhoiB(vector<THPTQG>& a) {
    for (int i = 0;i < a.size();i++) {
        for (int j = i + 1;j < a.size() - 1;j++) {
            if (a[i].khoiB < a[j].khoiB) {
                THPTQG temp;
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}