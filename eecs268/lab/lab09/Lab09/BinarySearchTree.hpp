
template <typename ItemType, typename KeyType>
BinarySearchTree<ItemType, KeyType>::BinarySearchTree() {
    m_root = nullptr;
}

template <typename ItemType, typename KeyType>
BinarySearchTree<ItemType, KeyType>::~BinarySearchTree() {
    clear();
}

template <typename ItemType, typename KeyType>
void BinarySearchTree<ItemType, KeyType>::add(ItemType entry){
    m_root = _addHelper(m_root, entry);
}


