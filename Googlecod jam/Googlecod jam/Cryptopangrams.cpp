#include<iostream>
#include <string>
#include <list>
#include <iterator>
using namespace std;

bool isPrime(long n)
{
	for (long i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}

long* fillArrayOfPrimes(long range)
{
	list<long> primeNumbers;
	for (int i = 2; i <= range; i++)
	{
		if (isPrime(i))
			primeNumbers.push_back(i);
	}
	long* numbers = new long[primeNumbers.size() + 1];
	list<long>::iterator it;
	int i = 0;
	numbers[i++] = primeNumbers.size();
	for (it = primeNumbers.begin(); it != primeNumbers.end(); ++it)
		numbers[i++] = *it;

	// primeNumbers.clear();
	// for (i = 0; i <= numbers[0]; i++)
	// {
	// 	cout << numbers[i] << "\t";
	// }
	return numbers;
}

void printCharacters(const long* numbers, long characters, const long* prime_numbers)
{
	characters++;

	int n = numbers[0];
	int q = 0;
	long* quotients = new long[characters];

	for (int i = 1; i <= prime_numbers[0]; i++)
	{
		if (n % prime_numbers[i] == 0)
		{
			q = n / prime_numbers[i];

			quotients[0] = prime_numbers[i];
			quotients[1] = q;
			break;
		}
	}

	int j = 1;
	for (int l = 1; l < characters - 1; l++)
	{
		quotients[j++] = q;
		q = numbers[l] / q;
	}
	quotients[j] = q;


	long* markPrime = new long[prime_numbers[0]];
	for (long i = 0; i <= prime_numbers[0]; i++)
		markPrime[i] = 0;
	for (j = 0; j < characters; j++)
		for (long i = 1; i <= prime_numbers[0]; i++)
		{
			if (quotients[j] == prime_numbers[i])
			{
				markPrime[i]++;
				break;
			}
		}
	long* usedPrime = new long[prime_numbers[0]];
	j = 0;

	for (long i = 1; i <= prime_numbers[0]; i++)
	{
		if (markPrime[i] > 0)
			usedPrime[j++] = prime_numbers[i];
	}

	//	 for (int i = 0; i < characters; i++)
	//	 {
	//	 	cout << quotients[i] << " ";
	//	 }
	//	 cout << endl;
	// for (j = 0; j <= prime_numbers[0]; j++)
	// 	cout << prime_numbers[j] << " ";
	// cout << endl;
	// for (j = 0; j < 26; j++)
	// 	cout << usedPrime[j] << " ";
	// cout << endl;

	for (j = 0; j < characters; j++)
	{
		for (long i = 0; i < characters; i++)
		{
			if (quotients[j] == usedPrime[i])
			{
				cout << static_cast<char>(i + 65);
				break;
			}
		}
	}
}

int main()
{
	int T;
	cin >> T;
	long range, characters;

	for (long i = 1; i <= T; i++)
	{
		cin >> range >> characters;
		long* numbers = new long[characters + 1];
		for (size_t j = 0; j < characters; j++)
		{
			cin >> numbers[j];
		}
		cout << "Case #" << i << ": ";
		long* p = fillArrayOfPrimes(range);
		printCharacters(numbers, characters, p);

		//cout << ans;
		cout << endl;
	}

	return 0;
}
