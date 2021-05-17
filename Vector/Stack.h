#ifndef _STACK_
#define _STACK_
#include "Vector.h"


template <class T>
class Stack : private Vector<T>
{
public:
	void push(const T& elem);
	T& pop();
	void print()override;
private:
	size_t m_sp{ 0 };
};


template<class T>
void Stack<T>::push(const T& elem)
{
	Vector<T>::push_back(elem);
	++m_sp;
}

template<class T>
T& Stack<T>::pop()
{
	--m_sp;
	return Vector<T>::at(m_sp);
}

template<class T>
void Stack<T>::print() 
{
	T* tmp = Vector<T>::get_arr();
	for (int i = 0; i < m_sp; ++i) {
		std::cout << tmp[i] << " ";
	}
	std::cout << std::endl;
}

#endif // _STACK_