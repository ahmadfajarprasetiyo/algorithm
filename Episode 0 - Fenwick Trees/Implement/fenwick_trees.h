//
// Created by Ahmad Fajar Prasetiyo on 17/07/23.
//

#include <vector>
#ifndef ALGORITHM_FENWICK_TREES_H
#define ALGORITHM_FENWICK_TREES_H


class FenwickTrees {
private:
    std::vector<int> tree;
    int LastBitInteger(int i);
public:
    FenwickTrees(int size);
    void Update(int i, int delta);
    int Sum(int i);
    int SumRange(int from, int to);
};


#endif //ALGORITHM_FENWICK_TREES_H
