#include <cstddef>
template < class T > T *merge(const T *a, size_t sa, const T *b, size_t sb, T *c)
{
  size_t i = 0;
  size_t k = 0;

  while (i < sa && k < sb)
  {
    if (a[i] < b[k])
    {
      c[i + k] = a[i++];
    }

    else
    {
      c[i + k] = b[k++];
    }
  }

  while (i < sa)
  {
    c[i + k] = a[i++];
  }

  while (k < sb)
  {
    c[i + k] = b[k++];
  }

  return c;
}