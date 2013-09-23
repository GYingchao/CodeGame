/*
 * =====================================================================================
 *
 *       Filename:  p5.cpp
 *
 *    Description:  2520 is the smallest number that can be divided by each of the numbers from 1 to 10
					without any remainder.

					What is the smallest positive number that is evenly divisible by all of the numbers 
					from 1 to 20?
 
 *        Version:  1.0
 *        Created:  9/23/2013 1:16:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *		   Remark:	Partially solved
 * =====================================================================================
 */
#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n) {
	if(n<2) return false;
	for(int i=2; i<=sqrt(n); i++) {
		if(n%i == 0) return false;
	}
	return true;
}

int factorCount(int n, int d) {
	int count = 0;
	while(n>=d) {
		if(n%d == 0) {
			count ++;
			n = n/d;
		} else {
			return count;
		}
	}
	return count;
}

int main() {
	int maxN;
	cin >> maxN;
	int *primes = new int[maxN-1];
	int primes_size = 0;
	
	for(int i=2; i<maxN; i++) {
		if(isPrime(i)) {
			primes[primes_size] = i;
			primes_size ++;
		}
	}
	//Then we get the array of primes	
	int* quant = new int[primes_size];
	for(int i=0; i<primes_size; i++)
		quant[i] = 0;
	//Then we get an array to record the quantity of corresponding prime factors
	for(int i=0; i<primes_size; i++) {
		for(int j=primes[i]; j<=maxN; j++) {
			if(quant[i]<factorCount(j, primes[i]))
				quant[i] = factorCount(j, primes[i]);
		}
	}

	//We get the final result by producting the prime factors:
	int result = 1;
	for(int i=0; i<primes_size; i++) {
		result *= pow(primes[i], quant[i]);
		//cout << quant[i] << " X " << primes[i] << endl;
	}
	cout << result << endl;
	return 0;
}

