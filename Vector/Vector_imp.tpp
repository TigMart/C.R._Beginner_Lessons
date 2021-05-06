template <typename T>
Vector<T>::Vector() : m_capacity{ 4 }, m_size{ 0 }, m_arr{ new T[m_capacity] }{}

template <typename T>
void Vector<T>::push_back(const T& elem)
{
	if (m_size == m_capacity) {
		ReAlloc();
	}
	m_arr[m_size++] = elem;
}

template<class T>
void Vector<T>::push_front(const T& elem) {
	if (m_size == m_capacity) {

		m_capacity *= 2;
		T* temp = new T[m_capacity];
		temp[0] = elem;
		for (int i = 1; i < m_size; ++i) {
			temp[i] = m_arr[i];
		}
		delete[] m_arr;
		m_arr = temp;
		++m_size;
	}
	else if (m_size < m_capacity) {
		for (int i = m_size; i > 0; --i) {
			m_arr[i] = m_arr[i - 1];
		}
		m_arr[0] = elem;
		++m_size;
	}
}
template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& rhs)
{
	if (this == &rhs) {
		std::cout << "inqnaveragrum" << std::endl;
		return *this;
	}
	m_capacity = rhs.m_capacity;
	m_size = rhs.m_size;
	delete[] m_arr;
	m_arr = new T[m_capacity];
	for (int i = 0; i < m_size; ++i) {
		m_arr[i] = rhs.m_arr[i];
	}
	return *this;
}

template <typename T>
T& Vector<T>::operator[](int index)const
{
		if (index<m_size)
			return m_arr[index];
		std::cout << "Out of range!";
		throw 0;

}

template <typename T>
void Vector<T>::ReAlloc()
{
	if (m_capacity == m_size)
		m_capacity *= 2;
	T* temp = new T[m_capacity];
	for (int i = 0; i < m_size; ++i) {
		temp[i] = m_arr[i];
	}
	delete[] m_arr;
	m_arr = temp;
}



template <typename T>
int Vector<T>::size() const { return m_size; }

template <typename T>
void Vector<T>::push(int elem, int index)
{
	if (index == m_capacity)
		push_back(elem);
	else
		m_arr[index] = elem;
}

template <typename T>
void Vector<T>::pop_Back()
{
	if (m_size > 0) {
		m_size--;
	}
}

template <typename T>
void Vector<T>::print()
{
	for (int i = 0; i < m_size; ++i) {
		std::cout << m_arr[i] << " ";
	}
	std::cout << std::endl;
}
template <typename T>
void Vector<T>::erase(int index)
{
	T* tmp = new T[m_capacity];
	for (int i = 0; i < index; ++i) {
		tmp[i] = m_arr[i];
	}
	for (int i = index + 1; i < m_size; ++i) {
		tmp[i - 1] = m_arr[i];
	}
	m_size--;
	delete[] m_arr;
	m_arr = nullptr;
	m_arr = tmp;
}

template <typename T>
Vector<T>::~Vector()
{
	delete[] m_arr;
}
