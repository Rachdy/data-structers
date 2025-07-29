
#ifndef LIST_HPP_
#define LIST_HPP_
template<typename T>
struct List {
	List* next = nullptr;
	T data;
	List(T value) : data(value), next(nullptr) {}
	void  print_list(List<T>* Head);
	void  delete_list(List<T>* Head);
	List<T>* add_front(List<T>* Head, T value);
	List<T>* add_end(List<T>* Head, T value);
	List<T> delete_atposition(List<T>* Head, T value);
};

#endif // !"LIST_HPP"

