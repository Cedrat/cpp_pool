#include <iostream>
#include <cfloat>
#include <cmath>

template<typename T>
void swap(T &a, T &b)
{
    T c;

    c = a;
    a = b;
    b = c;
}

template<typename T>
T const & min(T  const & a, T const & b)
{
    if (a>=b)
        return (b);
    return (a);
}

template<typename T>
T const & max(T  const & a, T const & b)
{
    if (a<=b)
        return (b);
    return (a);
}

int main()
{
    {
        std::cout << "Personnal main" << std::endl;
        int a = 5;
        int b = 34;
        std::cout << "a = " << a << " b = " << b << std::endl;
        swap<int>(a , b);
        std::cout << "SWWAPP" << std::endl;
        std::cout << "a = " << a << " b = " << b << std::endl;
        std::cout << "min beetween a and b : " << ::min(a, b) << std::endl;
        std::cout << "max beetween a and b : " << ::max(a, b) << std::endl;
    }
    {
        float a = -INFINITY;
        float b = INFINITY;
        std::cout << "a = " << a << " b = " << b << std::endl;
        swap<float>(a , b);
        std::cout << "SWWAPP" << std::endl;
        std::cout << "a = " << a << " b = " << b << std::endl;
        std::cout << "min beetween a and b : " << ::min(a, b) << std::endl;
        std::cout << "max beetween a and b : " << ::max(a, b) << std::endl;
    }
    {
        std::cout << "\nMain given by the subject" <<std::endl;
        
        int a = 2;
        int b = 3;

        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;







    }
}