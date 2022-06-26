//BinarySearchTreeInterface.h

#ifndef binarySearchTreeInterface_h
#define binarySearchTreeInterface_h

template <typename Item, typename Key>
class BinarySearchTreeInterface {
public:
	virtual void add(Item entry) = 0;
	virtual Item search(Key searchTerm) = 0;
	
}


#endif


