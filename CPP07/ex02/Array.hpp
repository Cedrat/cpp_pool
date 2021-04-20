
template <typename T>
class Array
{
    public :
        Array<T>();
        Array<T>(unsigned int n);
        
        T &operator[](unsigned int n);
        const T & operator[](unsigned int n) const;
    
    private : 
        T* _array;
        unsigned int _size;
};

template <typename T>
Array<T>::Array()
{
    _array = new T[0]; 
};

template <typename T>
Array<T>::Array(unsigned int n)
{
    _array = new T[n];
    for (unsigned int i = 0; i < n; i++)
        _array[i] = 0;
};

template <typename T>
const T & Array<T>::operator[](unsigned int n) const
{
    return (_array[n]); 
};

template <typename T>
 T & Array<T>::operator[](unsigned int n)
{
    return (_array[n]); 
};