#ifndef _VECTOR_
#define _VECTOR_

#include <iostream>

template <typename T>
class Vector
{
public:
	Vector();
	~Vector();
	Vector<T>& operator=(const Vector<T>& rhs);
public:
	void push_back(const T& elem);
	void push(int elem, int index);
	T& operator[](int index)const;
	void pop_Back();
	int size()const;
	void print();
	void push_front(const T& elem);

private:
	void ReAlloc();
private:
	int m_capacity;
	int m_size;
	T* m_arr;

};

#include "Vector_imp.tpp"
#endif // _VECTOR_
