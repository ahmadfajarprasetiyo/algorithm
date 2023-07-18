//
// Created by Ahmad Fajar Prasetiyo on 17/07/23.
//

#include <iostream>
#include "fenwick_trees.cpp"

int main() {
    int vals[] ={1,4,2,1,3,5,1,2,3};
    int size = 9;

    FenwickTrees fenwick_tree = FenwickTrees(size);

    for (int i = 0; i < size; ++i) {
        fenwick_tree.Update(i+1, vals[i]);
    }

    std::cout << "Sum from 1 to 9 :" << fenwick_tree.SumRange(1,9) << std::endl;
    std::cout << "Sum from 1 to 4 :" << fenwick_tree.SumRange(1,4) << std::endl;
    std::cout << "Sum from 5 to 9 :" << fenwick_tree.SumRange(5,9) << std::endl;
    std::cout << "Sum from 4 to 6 :" << fenwick_tree.SumRange(4,6) << std::endl;

    return 0;
}