#include <iostream>

using namespace std;
template <class T>
class matrix
{
    friend ostream& operator<<(ostream&, const matrix<T>&);
	friend istream& operator>>(istream&, matrix<T>&);
public:
	matrix(int theRows = 0, int theColumns = 0);
	matrix(const matrix<T>&);
	~matrix() { delete[] element; };
	int rows()const { return theRows; };
	int cols()const { return theColumns; };
	T& operator()(int i, int j)const;
	matrix<T>& operator=(const matrix<T>&);
	matrix<T> operator+()const;
	matrix<T> operator+(const matrix<T>&)const;
	matrix<T> operator-()const;
	matrix<T> operator-(const matrix<T>&)const;
	matrix<T> operator*(const matrix<T>&)const;
	matrix<T>& operator+=(const T&);
	void Input();
	void Output();
private:
	int theRows;
	int theColumns;
	T* element;
};
template<class T>
matrix<T>::matrix(int theRows = 0, int theColumns = 0)
{
	if (theColumns < 0 || theRows < 0)
	{
		throw runtime_error(string{ "Rows and Cols must be >= 0 " });
	}
	if ((theColumns == 0 || theRows == 0) && (theColumns != 0 || theRows != 0))
	{
		throw runtime_error(string{ "Either both or neither rows and columns should be zero " });
	}
	this->theColumns = theColumns;
	this->theRows = theRows;
	element = new T[theColumns * theRows];
}
template<class T>
matrix<T>::matrix(const matrix<T>& m)
{
	theColumns = m.theColumns;
	theRows = m.theRows;
	size_t number = theColumns * theRows;
	element = new T[number];
	copy(m.element, m.element + number, element);
}
template<class T>
matrix<T>& matrix<T>::operator=(const matrix<T>& m)
{
	if (this != &m)
	{
		delete[] element;
		theColumns = m.theColumns;
		theRows = m.theRows;
		size_t number = theColumns * theRows;
		element = new T[number];
		copy(m.element, m.element + number, element);
	}
	return *this;
}
template<class T>
T& matrix<T>::operator()(int i, int j) const
{
	if (i<1 || i>theRows || j<1 || j>theColumns)
	{
		throw runtime_error(string{ "Matrix Index Out Of Bounds " });
	}
	return element[(i - 1)*theColumns + j - 1];
}
template<class T>
matrix<T> matrix<T>::operator+(const matrix<T>& m)const
{
	if (theRows != m.theRows || theColumns != m.theColumns)
	{
		throw runtime_error(string{ "Matrix Size is Out of batch " });
	}
	matrix<T> w(theRows, theColumns);
	size_t number = theColumns*theRows;
	for (int i = 0; i < number; i++)
	{
		w.element[i] = element[i] + m.element[i];
	}
	return w;
}
template<class T>
matrix<T> matrix<T>::operator*(const matrix<T>& m)const
{
	if (theColumns != m.theRows || theRows != m.theColumns)
	{
		throw runtime_error(string{ "Matrix Style is Out of batch " });
	}
	matrix<T> w(theRows, theColumns);
	int ct = 0;
	int cm = 0;
	int cw = 0;
	for (int i = 1; i <= theRows; i++)
	{
		for (int j = 1; j <= theColumns; j++)
		{
			T sum = element[ct] * m.element[cm];
			for (int k = 2; k <= theColumns; k++)
			{
				ct++;
				cm += m.theColumns;
				sum += element[ct] * m.element[cm];
			}
			w.element[cw++] = sum;
			ct -= theColumns - 1;
			cm = j;
		}
		ct += theColumns;
		cm = 0;
	}
	return w;
}
template<class T>
void matrix<T>::Input()
{
	size_t number = theColumns * theRows;
	for (int i = 0; i < number; i++)
	{
		cin >> element[i];
	}
	cout << "Input fanished" << endl;
	return;
}
template<class T>
void matrix<T>::Output()
{
	size_t number = theColumns * theRows;
	for (int i = 0; i < theRows; i++)
	{
		for (int j = 0; j < theColumns; j++)
		{
			cout << element[i*theColumns + j] << " ";
		}
		cout << endl;
	}
	cout << "Output finished " << endl;
	return;
}
int main()
{
	matrix<int> a(3, 3);
	matrix<int> b(3, 3);
	matrix<int> c(3, 3);
	a.Input();
	b.Input();
	c = a * b;
	c.Output();
	return 0;

}

