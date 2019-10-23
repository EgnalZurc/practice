#include "HashMap.h"

template<typename K, typename V>
HashMap<K,V>::HashMap() {
  _table = new HashNode<K,V> *[_max_length];
}
template<typename K, typename V>
HashMap<K,V>::~HashMap() {
  for (int i = 0; i < _max_length ; i ++) {
    HashNode<K,V> *node = _table[i];
    if(node) delete node;
    _table[i] = 0;
  }
  delete [] _table;
}

template<typename K, typename V>
bool HashMap<K,V>::get(const K &key, V &value) {
  HashNode<K,V> *node = _table[0];
  while(node) {
    if(node->getKey() == key) {
      value = node->getValue();
      return true;
    }
    node = node->getNext();
  }
  return false;
}

template<typename K, typename V>
bool HashMap<K,V>::insert(const K &key,const V &value) {
  HashNode<K,V> *node = _table[0];
  if(!node) {
    HashNode<K,V> entry = new HashNode<K,V>(key, value);
    node->next = entry;
    return true;
  }
  while(node->getNext()) {
    if(node->getKey() == key) {
      node->setValue(value);
      return false;
    }
    node = node->next();
  }
  HashNode<K,V> entry = new HashNode<K,V>(key, value);
  node->next = entry;
  return true;
}

template<typename K, typename V>
bool HashMap<K,V>::remove(const K &key) {
  HashNode<K,V> *node = _table[0];
  int i = 0;
  if(!node) {
    return false;
  }
  while(node->getNext()) {
    if(node->getKey() == key) {
      _table[i] = node->getNext();
      return true;
    }
    node = node->getNext();
    i++;
  }
  return false;
}
