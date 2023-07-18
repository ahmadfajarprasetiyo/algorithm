//
// Created by Ahmad Fajar Prasetiyo on 17/07/23.
//

#include "fenwick_trees.h"

FenwickTrees::FenwickTrees(int size) {
    this->tree.resize(size+1);
}

int FenwickTrees::LastBitInteger(int i) {
    return i&-i;
}

void FenwickTrees::Update(int i, int delta) {
    while (i < this->tree.size()) {
        this->tree[i] = this->tree[i] + delta;
        i = i + FenwickTrees::LastBitInteger(i);
    }
}

int FenwickTrees::Sum(int i) {
    int sum = 0;
    while (i > 0) {
        sum = sum + this->tree[i];
        i = i - FenwickTrees::LastBitInteger(i);
    }

    return sum;
}

int FenwickTrees::SumRange(int from, int to) {
    int res;
    if (from != 1) {
        res = Sum(to) - Sum(from-1);
    } else {
        res = Sum(to);
    }

    return res;
}