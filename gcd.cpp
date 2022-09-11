#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	while(a)
	{
		int tmp = a;
		a = b % a;
		b = a;
	}
	return b;
}
