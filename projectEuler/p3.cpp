/*
 * =====================================================================================
 *
 *       Filename:  p3.cpp
 *
 *    Description:  The prime factors of 13195 are 5, 7, 13 and 29.

					What is the largest prime factor of the number 600851475143 ?
 *
 *        Version:  1.0
 *        Created:  9/15/2013 8:49:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

bool isFactor(long long dividend, long divisor) {
	return (dividend % divisor == 0);
}

bool isPrime(long long num) {
	if(num == 2) return true;
	long root2 = sqrt(num);
	for(long i=2; i<=root2; i++) {
		if(num % i == 0) return false;	
	}
	return true;
}

int main() {
	long long result = -1;
	long long maxN;
	cin >> maxN;
	
	/*
	  Step 1. We obtain a prime array ranging 
	  from 2 to square root of maxN;
	 */
	long limit = sqrt(maxN);
	long* Primes = new long[limit];
	
	int size = 0;
	for(long i=2; i<=limit; i++) {
		if(isPrime(i)) {
			Primes[size] = i;
			size ++;
		}
	}
	/*
	cout << "The prime array we got:" << endl;
	for(int i=0; i<size-1; i++)
		cout << Primes[i] << "  ";
	cout << Primes[size-1] << endl;
	*/
	/* 
	 *Step 2. We find the largest prime factor of maxN;
	 * */
	int position = -1;
	for(int i=0; i<size; i++) {
		if(isFactor(maxN, Primes[i])) {
			//cout << maxN << " divides " << Primes[i] << " is " << maxN/Primes[i] << endl;
			if(isPrime(maxN/Primes[i])) {
				result = maxN/Primes[i];
				cout << result << endl;
				return 0;
			}
			position = i;
		}
	}
	if(position != -1) result = Primes[position];
	cout << result << endl;
	return 0;
}
