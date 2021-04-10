#ifndef _VETOR2D_H_
#define _VETOR2D_H_

#include<math.h>

template<typename T>
class Vetor2D
{
public:
    T x, y;

template <typename T>
Vetor2D<T>::Vetor2D(T x = 0.0, T y = 0.0)
{
    this->x = x;
    this->y = y;
}

template <typename T>
Vetor2D<T>::~Vetor2D() 
{
}

template <typename T>
Vetor2D<T> Vetor2D<T>::operator +(Vetor2D<T> v) 
{
    return Vetor2D<T>(x + v.x, y + v.y);
}

template <typename T>
Vetor2D<T> Vetor2D<T>::operator -(Vetor2D<T> v) 
{
    return Vetor2D<T>(x - v.x, y + v.y);
}

template <typename T>
Vetor2D<T> Vetor2D<T>::operator *(int i) 
{
    return Vetor2D<T>(x*i, y*i);
}
  
template <typename T>
Vetor2D<T> Vetor2D<T>::operator *(float f) 
{
    return Vetor2D<T>(x*f, y*f);
}

template <typename T>
Vetor2D<T> Vetor2D<T>::operator *(double d) 
{
    return Vetor2D<T>(x*d, y*d);  
}

template <typename T>
void Vetor2D<T>::operator +=(Vetor2D<T> v) 
{
    x += v.x;
    y += v.y;
}

template <typename T>
void Vetor2D<T>::operator -=(Vetor2D<T> v) 
{
    x -= v.x;
    y -= v.y;
}

template <typename T>
void Vetor2D<T>::operator *=(int i) 
{
    x *= i;
    y *= i;
}

template <typename T>
void Vetor2D<T>::operator *=(float f) 
{
    x *= f;
    y *= f;
}

template <typename T>
void Vetor2D<T>::operator *=(double d) 
{
    x *= d;
    y *= d;
}

template <typename T>
T Vetor2D<T>::operator *(Vetor2D<T> v) 
{
    return x*v.x + y*v.y;
}

template <typename T>
T Vetor2D<T>::modulo() 
{
    return sqrt(pow(x, 2) + pow(y,2));
}
  
template <typename T>
Vetor2D<T> Vetor2D<T>::versor() 
{
    return this->operator *(1.0/modulo());
}

};

typedef Vetor2D<float> Vetor2F;
typedef Vetor2D<unsigned> Vetor2U;

#endif