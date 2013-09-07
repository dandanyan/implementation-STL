#include <cstring>

template <typename T>
class vector
{
	public:
		vector();
		vector(const size_t size, const T& imple_elem);
		vector(const vector<T>& src);
		~vector();
		vector<T>& operator=(const vector<T>& rhs);

		bool empty() const;
		T back() const;
 
	private:
		size_t m_size;
		size_t m_max_size;
		T* m_arr;

		void copy_from(const vector<T>& src);
	
};

template <typename T>
T vector<T>::back() const
{
	return m_arr[m_size];
}

template <typename T>
bool vector<T>::empty() const
{
	return m_arr == 0;
}

template <typename T>
vector<T>& vector<T>::operator=(const vector<T>& rhs)
{
	delete[] m_arr;
	copy_from(rhs);
}

template <typename T>
void vector<T>::copy_from(const vector<T>&src)
{
	m_size = src.m_size;
	m_max_size = src.m_max_size;
	m_arr = new T[m_max_size];
	for(size_t i = 0; i < m_max_size; ++i)
	{
		m_arr[i] = src.m_arr[i];
	}
}


template <typename T>
vector<T>::vector(const vector<T>& src)
{
	copy_from(src);
}

template <typename T>
vector<T>::vector(const size_t size, const T& imple_elem):m_size(size - 1), m_max_size(size)
{
	m_arr = new T[m_max_size];
	for(size_t i = 0; i < size; ++i)
	{
		m_arr[i] = imple_elem;
	}
}

template <typename T>
vector<T>::vector():m_size(0), m_max_size(10), m_arr(new T[m_max_size])
{
}

template <typename T>
vector<T>::~vector()
{
	delete[] m_arr;
}
