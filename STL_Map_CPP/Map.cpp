
// Map.cpp - Source File

#include "Map.h"

// Insert <key,data> into the map
template<typename Key, typename Data>
bool Map<Key, Data>::Insert(Key key, Data data) {
	if (is_head_null()) {
		head_null = false;
		head->key = key;
		head->data = data;
		++elements;
		return true;
	}
	Node<Key, Data>* front = head;
	Node<Key, Data>* rear = nullptr;
	while (front != nullptr) {
		rear = front;
		if (front->key == key) {
			std::cout << "\n ERROR: KEY MUST BE UNIQUE.";
			std::cout << " Cannot insert <" << key << ", " << data << ">" << std::endl;
			return false;
		}
		if (key < front->key) {
			front = front->left;
		}
		else if (key > front->key) {
			front = front->right;
		}
	}
	if (key < rear->key) {
		rear->left = new Node<Key, Data>(key, data);
		++elements;
		return true;
	}
	else {
		rear->right = new Node<Key, Data>(key, data);
		++elements;
		return true;
	}
}

// Check if the given key is contained in the map or not
template<typename Key, typename Data>
bool Map<Key, Data>::Contains(Key key) {
	Node<Key, Data>* temp = head;
	while (temp != nullptr) {
		if (key == temp->key) {
			return true;
		}
		else if (key < temp->key) {
			temp = temp->left;
		}
		else {
			temp = temp->right;
		}
	}
	return false;
}

// Retrieve the data for given key (if key exists)
template<typename Key, typename Data>
Data Map<Key, Data>::GetData(Key key) {
	Node<Key, Data>* temp = head;
	while (temp != nullptr) {
		if (key == temp->key) {
			return temp->data;
		}
		else if (key < temp->key) {
			temp = temp->left;
		}
		else {
			temp = temp->right;
		}
	}
	std::cout << "\n No data found for key \"" << key << "\"" << std::endl;
	Data default_data{};
	return default_data;
}

// Display the map to the console
template<typename Key, typename Data>
void Map<Key, Data>::Display() {
	std::cout << " KEY\tDATA" << std::endl;
	Node<Key, Data>* root = head;
	print_map(root);

}


// Private Member Functions:


template<typename Key, typename Data>
void Map<Key, Data>::print_map(Node<Key, Data>* root) {
	// Inorder traversal:
	if (root == nullptr)
		return;
	print_map(root->left);
	std::cout << " " << root->key << "\t" << root->data << std::endl;
	print_map(root->right);

}

template<typename Key, typename Data>
bool Map<Key,Data>::is_head_null() {
	return head_null;
}


// LINKER FIX:
void LinkerErrorFix() {

	// Integer key maps:
	Map<int, int> map_ii; map_ii.Insert(0, 0); map_ii.Contains(0); 
	map_ii.Display(); map_ii.GetData(0);
	Map<int, char> map_ic; map_ic.Insert(0, 'c'); map_ic.Contains(0); 
	map_ic.Display(); map_ic.GetData(0);
	Map<int, float> map_if; map_if.Insert(0, 0); map_if.Contains(0); 
	map_if.Display(); map_if.GetData(0);
	Map<int, double> map_id; map_id.Insert(0, 0.0); map_id.Contains(0); 
	map_id.Display(); map_id.GetData(0);
	Map<int, std::string> map_is; map_is.Insert(0, "str"); map_is.Contains(0); 
	map_is.Display(); map_is.GetData(0);

	// Character key maps:
	Map<char, int> map_ci; map_ci.Insert('c', 0); map_ci.Contains('c'); 
	map_ci.Display(); map_ci.GetData('c');
	Map<char, char> map_cc; map_cc.Insert('c', 'c'); map_cc.Contains('c'); 
	map_cc.Display(); map_cc.GetData('c');
	Map<char, float> map_cf; map_cf.Insert('c', 0); map_cf.Contains('c'); 
	map_cf.Display(); map_cf.GetData('c');
	Map<char, double> map_cd; map_cd.Insert('c', 0.0); map_cd.Contains('c'); 
	map_cd.Display(); map_cd.GetData('c');
	Map<char, std::string> map_cs; map_cs.Insert('c', "str"); map_cs.Contains('c'); 
	map_cs.Display(); map_cs.GetData('c');

	// Float key maps:
	Map<float, int> map_fi; map_fi.Insert(0, 0); map_fi.Contains(0); 
	map_fi.Display(); map_fi.GetData(0);
	Map<float, char> map_fc; map_fc.Insert(0, 'c'); map_fc.Contains(0); 
	map_fc.Display(); map_fc.GetData(0);
	Map<float, float> map_ff; map_ff.Insert(0, 0); map_ff.Contains(0); 
	map_ff.Display(); map_ff.GetData(0);
	Map<float, double> map_fd; map_fd.Insert(0, 0.0); map_fd.Contains(0); 
	map_fd.Display(); map_fd.GetData(0);
	Map<float, std::string> map_fs; map_fs.Insert(0, "str"); map_fs.Contains(0); 
	map_fs.Display(); map_fs.GetData(0);

	// Double key maps:
	Map<double, int> map_di; map_di.Insert(0, 0); map_di.Contains(0); 
	map_di.Display(); map_di.GetData(0);
	Map<double, char> map_dc; map_dc.Insert(0, 'c'); map_dc.Contains(0); 
	map_dc.Display(); map_dc.GetData(0);
	Map<double, float> map_df; map_df.Insert(0, 0); map_df.Contains(0); 
	map_df.Display(); map_df.GetData(0);
	Map<double, double> map_dd; map_dd.Insert(0, 0.0); map_dd.Contains(0); 
	map_dd.Display(); map_dd.GetData(0);
	Map<double, std::string> map_ds; map_ds.Insert(0, "str"); map_ds.Contains(0); 
	map_ds.Display(); map_ds.GetData(0);

	// String key maps:
	Map<std::string, int> map_si; map_si.Insert("c", 0); map_si.Contains("c"); 
	map_si.Display(); map_si.GetData("c");
	Map<std::string, char> map_sc; map_sc.Insert("c", 'c'); map_sc.Contains("c"); 
	map_sc.Display(); map_sc.GetData("c");
	Map<std::string, float> map_sf; map_sf.Insert("c", 0); map_sf.Contains("c"); 
	map_sf.Display(); map_sf.GetData("c");
	Map<std::string, double> map_sd; map_sd.Insert("c", 0.0); map_sd.Contains("c"); 
	map_sd.Display(); map_sd.GetData("c");
	Map<std::string, std::string> map_ss; map_ss.Insert("c", "str"); map_ss.Contains("c"); 
	map_ss.Display(); map_ss.GetData("c");

}
