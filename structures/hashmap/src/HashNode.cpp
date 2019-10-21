#include "HashNode.h"

template <typename K, typename V>
HashNode<K,V>::HashNode(const K &key, const V &value) : _key(key), _value(value), _next() {
}

template <typename K, typename V>
void HashNode<K,V>::setKey(K key) {
	_key = key;
}
template <typename K, typename V>
K HashNode<K,V>::getKey() {
	return _key;
}

template <typename K, typename V>
void HashNode<K,V>::setValue(V value) {
	_value = value;
}
template <typename K, typename V>
V HashNode<K,V>::getValue() {
	return _value;
}

template <typename K, typename V>
void HashNode<K,V>::setNext(HashNode * next) {
	_next = next;
}
template <typename K, typename V>
HashNode<K,V>* HashNode<K,V>::getNext() {
	return _next;
}

int main() {
	HashNode<int, int> * a = new HashNode<int, int> (1,2);
	std::cout << a->getKey() << ":" << a->getValue() << std::endl;
	return 1;
}
