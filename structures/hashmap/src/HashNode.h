#ifndef HASHNODE_H
#define HASHNODE_H
#include <iostream>

// Hash Node Template class
template <typename K, typename V>
class HashNode {
	public:
		HashNode(const K &key, const V &value);
		void setKey(K key);
		K getKey();
		void setValue(V value);
		V getValue();
		void setNext(HashNode * next);
		HashNode* getNext();
    void print();
	private:
		K _key;
		V _value;
		HashNode *_next;
};
#endif
