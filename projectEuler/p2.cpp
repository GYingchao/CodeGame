/*
 * =====================================================================================
 *
 *       Filename:  p2.cpp
 *
 *    Description:  By considering the terms in the Fibonacci sequence whose values do
 *					not exceed four million, find the sum of the even-valued terms.
 *
 *        Version:  1.0
 *        Created:  9/15/2013 8:05:31 PM
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

int fibonacci(int index) {
	if(index > 2) {
		return fibonacci(index-2)+fibonacci(index-1);
	} else {
		return index;
	}
}

int main() {
	
	int i = 1;
	int sum = 0;
	int maxN = 4000000;
	int even = 3*i-1;
	while(fibonacci(even) <= maxN){
		sum += fibonacci(even);
		i ++;
		even = 3*i-1;
	}
	cout << sum << endl;
	return 0;
}
