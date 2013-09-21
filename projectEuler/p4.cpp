/*
 * =====================================================================================
 *
 *       Filename:  p4.cpp
 *
 *       Description:
 *
					The sum of the squares of the first ten natural numbers is: 12 + 22 + ... + 102 = 385
					The square of the sum of the first ten natural numbers is:(1 + 2 + ... + 10)2 = 552 = 3025
					Hence the difference between the sum of the squares of the first ten natural numbers and t						he square of the sum is 3025 - 385 = 2640.

					Find the difference between the sum of the squares of the first one hundred natural number						s and the square of the sum. 

 *        Version:  1.0
 *        Created:  9/21/2013 9:34:43 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include<iostream>
using namespace std;

//N is denoted as the first N natural numbers;
int main() {
	int N;
	cin >> N;
	
	//Compute the sum of all terms as X(i)X(i+1); 
	int sum = 0;
	for(int i=1; i<N; i++) {
		for(int j=i+1; j<=N; j++) {
			sum += i*j;
		}
	}

	cout << 2*sum << endl;
	return 0;
}
