//implementacja własnej arytmetyki ze strony http://main.edu.pl/pl/user.phtml?op=lesson&n=32&page=algorytmika
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <iostream>
using namespace std;
const int BASE = 1000000000;
const int DIGS = 9;
 
const int LEN = 1000;
struct liczba
{
    int t[LEN];
    int l;
};
 
void wypisz(liczba x)
{
  printf("%d", x.t[x.l - 1]);
  for (int i = x.l - 2; i >= 0; i--)
    printf("%0*d", DIGS, x.t[i]);
}
 
void czytaj(liczba &x)
{
  char s[LEN * DIGS + 1];
  scanf("%s", s);
  int j = strlen(s);
  if (j % DIGS == 0)
    x.l = j / DIGS;
  else
    x.l = j / DIGS + 1;
  j--;
  for (int i = 0; i < x.l; i++)
  {
    x.t[i] = 0;
    for (int k = max(0, j - DIGS + 1); k <= j; k++)
        x.t[i] = 10 * x.t[i] + (s[k] - '0');
    j -= DIGS;
  }
}
 
liczba operator+ (liczba x, liczba y)
{
  liczba z;
  z.l = min(x.l, y.l);
  int c = 0;
  for (int i = 0; i < z.l; i++)
  {
    z.t[i] = (x.t[i] + y.t[i] + c) % BASE;
    c = (x.t[i] + y.t[i] + c) / BASE;
  }
  while (z.l < x.l)
  {
    z.t[z.l] = (x.t[z.l] + c) % BASE;
    c = (x.t[z.l] + c) / BASE;
    z.l++;
  }
  while (z.l < y.l)
  {
    z.t[z.l] = (y.t[z.l] + c) % BASE;
    c = (y.t[z.l] + c) / BASE;
    z.l++;
  }
  if (c > 0)
  {
    z.t[z.l] = c;
    z.l++;
  }
 return z;
}
 
 
liczba operator* (liczba x, int y)
{
  liczba z;
  z.l = x.l;
  int c = 0;
  for (int i = 0; i < x.l; i++)
  {
    z.t[i] = int(((long long)(x.t[i]) * y + c) % BASE);
    c = int(((long long)(x.t[i]) * y + c) / BASE);
  }
  while (c > 0)
  {
    z.t[z.l] = c % BASE;
    c /= BASE;
    z.l++;
  }
  return z;
}
 
liczba operator* (liczba x, liczba y)
{
  liczba z;
  z.l = 1; z.t[0] = 0;
  for (int i = 0; i < y.l; i++)
  {
    liczba pom(x * y.t[i]);
    for (int j = pom.l - 1; j >= 0; j--)
      pom.t[j + i] = pom.t[j];
    for (int j = 0; j < i; j++)
      pom.t[j] = 0;
    pom.l = pom.l + i;
    z = z + pom;
  }
  return z;
}
 
 
int main()
{
    unsigned long long int n;
	cin>>n;
    liczba s, a;
    unsigned long long int b=n, c=1;
 
   for (int i=0; i<n; i++)
    {
        czytaj(a);
        s = s + a*b*c;
        c++;
        b--;
    }
 
    wypisz(s);
    return 0;
}				
