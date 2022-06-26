#include <stdio.h>


int main(){
    BinaryTree<int> btree;
    btree.add(5);
    btree.add(10);
    btree.add(15);
    if (btree.isInTree(10)){
        std::cout << 10 << " is in the tree.\n";
    }
}
