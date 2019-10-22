#ifndef HASHMAP_h
#define HASHMAP_H
#include "HashNode.h"

template<typename K, typename V>
class HashMap {
  public:
    HashMap();
    ~HashMap();
    bool get(const K &key, V &value);
    bool insert(const K &key,const V &value);
    bool remove(const K &key);
  private:
    HashNode<K,V> **_table;
    const int _max_length = 100;
};
#endif
