
#ifndef LIST_HPP_
#define LIST_HPP_
template<typename T>
struct List {
	List* next = nullptr;
	T data;
	void  print_list(List Head);
	void  delete_list(List Head);
	List* add_front(List Head, T value);
	List* add_end(List Head, T value);
	List* delete_atposition(List Head, T value);
};

#endif // !"LIST_HPP"
