/*
 * =====================================================================================
 *
 *       Filename:  p1.cpp
 *

	If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

	Find the sum of all the multiples of 3 or 5 below 1000.
 
 *        Version:  1.0
 *        Created:  9/15/2013 5:34:50 PM
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
int main() {
	//n is for the up-bound(less than)number;
	int n;
	//sum is for collecting the result;
	int sum = 0;
	//Read the value of n from the keyboard, in this case, n=1000;
	cin >> n;
	
	//Calculate the sum of all multiples of 3 less than n;
	int pos3 = (n-1)/3;
	sum += (1+pos3)*pos3*3/2;
	//Calculate the sum of all multiples of 5 less than n;
	int pos5 = (n-1)/5;
	sum += (1+pos5)*pos5*5/2;

	//Remove the repeated value.
	int re15 = (n-1)/15;
	sum -= (1+re15)*re15*15/2;

	cout << sum << endl;
	return 0;
}
