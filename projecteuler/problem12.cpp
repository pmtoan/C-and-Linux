/*
The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:

1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...

Let us list the factors of the first seven triangle numbers:

 1: 1
 3: 1,3
 6: 1,2,3,6
10: 1,2,5,10
15: 1,3,5,15
21: 1,3,7,21
28: 1,2,4,7,14,28
We can see that 28 is the first triangle number to have over five divisors.

What is the value of the first triangle number to have over five hundred divisors?
*/

#include "iostream"
#include "cmath"

using namespace std;

unsigned long long countFactor(unsigned long long number)
{
	int count = 0;
	for(unsigned long long i=1;i <= sqrt(number);i++)
	{
		if (number%i == 0)
			count++;
	}
	return count*2;
}

unsigned long long carryOut()
{
	unsigned long long result;
	unsigned long long triangleNumber;
	unsigned long long i = 1;
	while(1)
	{
		triangleNumber = (i*(i+1))/2;
		result = countFactor(triangleNumber);
		if (result > 500)
			return triangleNumber;
		i++;
	}
}

int main()
{
	cout<<carryOut()<<endl;
}