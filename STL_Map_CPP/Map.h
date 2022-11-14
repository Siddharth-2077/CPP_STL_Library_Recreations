
// Map.h - Header file:
#pragma once

#include <iostream>
#include <string>

// Map class prototype
template<typename Key, typename Data> class Map;

// INTERNAL: Node class
template<typename Key, typename Data>
class Node {
private:
	// INTERNAL: friend class relationship with Map
	friend class Map<Key, Data>;

	Key key;
	Data data;
	Node* left;
	Node* right;

	// INTERNAL: Use for head-node initialization only
	Node() {					
		Key key_val{};
		Data data_val{};
		key = key_val;
		data = data_val;
		left = nullptr;
		right = nullptr;
	}

	Node(Key key_val, Data data_val) : key{ key_val }, data{ data_val } {
		left = nullptr;
		right = nullptr;
	}

};

// Map class
template<typename Key, typename Data>
class Map {
public:

	Map() {
		head = new Node<Key, Data>();
		head_null = true;
		elements = 0;
	}

	bool Insert(Key key, Data data);

	bool Contains(Key key);

	Data GetData(Key key);

	void Display();

private:

	Node<Key, Data>* head;
	bool head_null;			// USE CAREFULLY. SET TO FALSE WHEN MAP IS EMPTY
	int elements;

	// Helper functions:
	bool is_head_null();

	void print_map(Node<Key,Data> * root);

};

