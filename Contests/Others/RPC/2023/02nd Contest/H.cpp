/**
 *  author:  josuerom
 *  created: 24/03/23 01:17:11
**/
#include <algorithm>
#include <bits/stl_pair.h>
#include <cstdio>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
// __extension__ typedef __int128 int128;
#define lowbit(x) ((x) & (-(x)))
#define int ll

// #define FAST_IO
#if !defined(WIN32) && !defined(_WIN32)
#define getchar getchar_unlocked
#define putchar putchar_unlocked
#endif
namespace IO
{
#ifdef FAST_IO
#ifndef FAST_IN
#define FAST_IN
#endif
#ifndef FAST_OUT
#define FAST_OUT
#endif
#endif

  namespace INPUT
  {
#ifdef FAST_IN
#ifndef FAST_OUT_BUFFER_SIZE
#define FAST_OUT_BUFFER_SIZE (1 << 21)
#endif
    char _buf[FAST_OUT_BUFFER_SIZE], *_now = _buf, *_end = _buf;
#undef getchar
#define getchar() (_now == _end && (_end = (_now = _buf) + fread(_buf, 1, FAST_OUT_BUFFER_SIZE, stdin), _now == _end) ? EOF : *_now++)
#else
#if !defined(WIN32) && !defined(_WIN32)
#define getchar getchar_unlocked
#endif
#endif
    inline void read(char &_x)
    {
      char _s = (char)getchar();
      while ((_s >= 0x0a && _s <= 0x0d) || (_s == 0x09) || (_s == 0x20))
        _s = (char)getchar();
      _x = _s;
    }
    inline int read(char *_x)
    {
      char _s = (char)getchar();
      int _len = 0;
      while ((_s >= 0x0a && _s <= 0x0d) || (_s == 0x09) || (_s == 0x20))
        _s = (char)getchar();
      while (!((_s >= 0x0a && _s <= 0x0d) || (_s == 0x09) || (_s == 0x20)) && _s != EOF)
      {
        _x[_len++] = _s;
        _s = (char)getchar();
      }
      _x[_len] = '\0';
      return _len;
    }
    template <typename _T>
    inline void read(_T &_x)
    {
      _x = 0;
      char _s = (char)getchar();
      bool _f = false;
      while (!(_s >= '0' && _s <= '9'))
      {
        if (_s == '-')
          _f = true;
        _s = (char)getchar();
      }
      while (_s >= '0' && _s <= '9')
      {
        _x = (_x << 1) + (_x << 3) + (_s - '0');
        _s = (char)getchar();
      }
      if (_f)
        _x = -_x;
    }
    template <typename _T, typename... _G>
    inline void read(_T &_x, _G &..._y)
    {
      read(_x);
      read(_y...);
    }
#ifdef FAST_IN
#undef getchar
#if !defined(WIN32) && !defined(_WIN32)
#define getchar getchar_unlocked
#endif
#endif
  }
  namespace OUTPUT
  {
#ifdef FAST_OUT
#ifndef FAST_OUT_BUFFER_SIZE
#define FAST_OUT_BUFFER_SIZE (1 << 21)
#endif
    char _buf[FAST_OUT_BUFFER_SIZE], *_now = _buf;
    inline void flush()
    {
      fwrite(_buf, 1, _now - _buf, stdout), _now = _buf;
    }
#undef putchar
#define putchar(c) (_now - _buf == FAST_OUT_BUFFER_SIZE ? flush(), *_now++ = c : *_now++ = c)
#else
#if !defined(WIN32) && !defined(_WIN32)
#define putchar putchar_unlocked
#endif
#endif
    inline void write(char _x)
    {
      putchar(_x);
    }
    inline void write(char *const _x)
    {
      for (int i = 0; _x[i]; ++i)
        putchar(_x[i]);
    }
    inline void write(const char *__restrict _x)
    {
      for (int i = 0; _x[i]; ++i)
        putchar(_x[i]);
    }
    template <typename _T>
    inline void write(_T _x)
    {
      static char dight[39];
      int _len = 0;
      if (_x == 0)
      {
        putchar('0');
        return;
      }
      bool flag = false;
      if (_x < 0)
      {
        _x = -_x;
        flag = true;
      }
      while (_x)
      {
        dight[_len++] = (char)(_x % 10) + '0';
        _x /= 10;
      }
      if (flag)
        putchar('-');
      while (_len--)
        putchar(dight[_len]);
    }
    template <typename _T, typename... _G>
    inline void write(_T _x, _G... _y)
    {
      write(_x);
      write(_y...);
    }
#ifdef FAST_OUT
#undef putchar
#if !defined(WIN32) && !defined(_WIN32)
#define putchar putchar_unlocked
#endif
#endif
  }
}
template <typename T>
inline void ckmin(T &_x, T _y)
{
  if (_x > _y)
    _x = _y;
}
template <typename T>
inline void ckmax(T &_x, T _y)
{
  if (_x < _y)
    _x = _y;
}
template <const int _mod>
struct modint
{
  int x;
  constexpr modint(int _x = 0) : x(_x) {}
  constexpr inline modint operator+() const
  {
    return *this;
  }
  constexpr inline modint operator-() const
  {
    return !x ? 0 : _mod - x;
  }
  constexpr inline modint &operator++()
  {
    ++x;
    if (x >= _mod)
      x -= _mod;
    return *this;
  }
  constexpr inline modint &operator--()
  {
    --x;
    if (x < 0)
      x += _mod;
    return *this;
  }
  constexpr inline modint operator++(int)
  {
    int res = x;
    if (x >= _mod)
      x -= _mod;
    return res;
  }
  constexpr inline modint operator--(int)
  {
    int res = x;
    if (x < 0)
      x += _mod;
    return res;
  }
  constexpr inline modint operator+(const modint &rhs) const
  {
    int res = x;
    res += rhs.x;
    if (res >= _mod)
      res -= _mod;
    return res;
  }
  constexpr inline modint operator-(const modint &rhs) const
  {
    int res = x;
    res -= rhs.x;
    if (res < 0)
      res += _mod;
    return res;
  }
  constexpr inline modint operator*(const modint &rhs) const
  {
    return (int)((ll)x * rhs.x % _mod);
  }
  constexpr inline modint &operator+=(const modint &rhs)
  {
    x += rhs.x;
    if (x >= _mod)
      x -= _mod;
    return *this;
  }
  constexpr inline modint &operator-=(const modint &rhs)
  {
    x -= rhs.x;
    if (x < 0)
      x += _mod;
    return *this;
  }
  constexpr inline modint &operator*=(const modint &rhs)
  {
    x = (int)((ll)x * rhs.x % _mod);
    return *this;
  }
  template <typename _G>
  constexpr inline modint operator^(_G rhs) const
  {
    modint a = x, res = 1;
    while (rhs)
    {
      if (rhs & 1)
        res *= a;
      a *= a;
      rhs >>= 1;
    }
    return res;
  }
  constexpr inline modint inv() const
  {
    return *this ^ (_mod - 2);
  }
  constexpr inline modint operator/(const modint &rhs) const
  {
    return (*this) * rhs.inv();
  }
  constexpr inline modint &operator/=(const modint &rhs)
  {
    return (*this) *= rhs.inv();
  }
  constexpr inline modint &operator==(const modint &rhs)
  {
    return x == rhs.x;
  }
  constexpr inline int &data()
  {
    return x;
  }
};
using IO::INPUT::read;
using IO::OUTPUT::write;

constexpr int N = 4e6 + 5;
int n, m, a[N];
int st[N], top;
int lc[N], rc[N];
inline int build()
{
  top = 0;
  for (int i = 1; i <= n; ++i)
  {
    lc[i] = rc[i] = 0;
    while (top && a[st[top]] < a[i])
      lc[i] = st[top--];
    if (top)
      rc[st[top]] = i;
    st[++top] = i;
  }
  return st[1];
}
int f[N], g[N];
inline void dfs(int u)
{
  f[u] = a[u], g[u] = a[u];
  if (lc[u])
  {
    dfs(lc[u]);
    f[u] += f[lc[u]];
    ckmin(g[u], max(g[lc[u]], a[u] - f[lc[u]]));
  }
  if (rc[u])
  {
    dfs(rc[u]);
    f[u] += f[rc[u]];
    ckmin(g[u], max(g[rc[u]], a[u] - f[rc[u]]));
  }
}
inline void work()
{
  read(n);
  for (int i = 1; i <= n; ++i)
  {
    read(a[i]);
    a[i + n] = a[i];
    ckmax(m, a[i]);
  }
  n *= 2;
  int root = build();
  dfs(root);
  write(g[root], '\n');
  m = 0;
}
signed main()
{
  work();
#ifdef FAST_OUT
  IO::OUTPUT::flush();
#endif
  return 0;
}