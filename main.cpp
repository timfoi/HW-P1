#include <cstddef>
template < class T > T *merge(const T *a, size_t sa, const T *b, size_t sb, T *c)
{
  size_t i = 0;
  size_t k = 0;

  while (i < sa && k < sb)
  {
    if (a[i] < b[k]) // bool operator<(const T&)
    {
      c[i + k] = a[i++]; // T& operator=(const T&)
    }
    else
    {
      c[i + k] = b[k++]; // T& operator=(const T&)
    }
  }

  while (i < sa)
  {
    c[i + k] = a[i++]; // T& operator=(const T&)
  }

  while (k < sb)
  {
    c[i + k] = b[k++]; // T& operator=(const T&)
  }

  return c;
}

// недостатки: память для итогового массива должна быть выделена заранее пользователем.
