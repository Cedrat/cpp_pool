
template <typename T>
class Array
{
    public :
        Array<T>();
        Array<T>(unsigned int n);
        Array<T>(Array<T> const &rhs);
        ~Array<T>();
        
        unsigned int size() const;
        T &operator[](unsigned int n);
        const T & operator[](unsigned int n) const;
        Array<T> & operator=(Array<T> const & rhs);
    
    private : 
        T* _array;
        unsigned int _size;
};

template <typename T>
Array<T>::Array() : _size(0)
{
    _array = NULL;
};

template <typename T>
Array<T>::Array(Array<T> const & rhs)
{
    *this = rhs;
};

template <typename T>
Array<T>::Array(unsigned int n) :_size(n)
{
    if (n == 0)
    {
        _array = NULL;
        return ;
    }
    _array = new T[n];
    for (unsigned int i = 0; i < n; i++)
         _array[i] = T();
};

template <typename T>
Array<T>::~Array()
{
    if (this->size() != 0)
        delete [] this->_array;
};


template <typename T>
const T & Array<T>::operator[](unsigned int n) const
{
    if (n >= _size)
    {
        throw (std::exception());
    }
    return (_array[n]); 
};

template <typename T>
T & Array<T>::operator[](unsigned int n)
{
    if (n >= _size)
    {
        throw (std::exception());
    }
    return (_array[n]); 
};

template <typename T>
unsigned int Array<T>::size() const
{
    return (_size); 
};


template <typename T>
Array<T> & Array<T>::operator=(Array<T> const & rhs)
{
    if (this->size() != 0)
        delete [] this->_array;
    if (rhs.size() == 0)
        this->_array = NULL;
    else
        this->_array = new T[rhs.size()];

    for (unsigned int i = 0; i < rhs.size(); i++)
    {
        this->_array[i] = rhs._array[i];
    }
    this->_size = rhs.size();
    return (*this);
};