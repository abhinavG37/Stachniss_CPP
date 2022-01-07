#include <iostream>
#include "Stack.hpp"
#include <vector>
using namespace std ;



int main()
{
	typedef Stack<float> FloatStack ; //instantiated template classes: FloatStack is an instance of Stack<float>
	typedef Stack<int> IntStack ;
	//When the compiler generates a class, function or static data members from a template, it is referred to as template instantiation. 
	FloatStack fs(5) ; //instantiating objects of instance of Stack<float> Class type
	float f = 1.1 ;
	cout << "Pushing elements onto fs" << endl ;
	while (fs.push(f))
	{
		cout << f << ' ' ;
		f += 1.1 ;
	}
	cout << endl << "Stack Full." << endl
	<< endl << "Popping elements from fs" << endl ;
	while (fs.pop(f))
		cout << f << ' ' ;
	cout << endl << "Stack Empty" << endl ;
	cout << endl ;

	IntStack is ;
	int i = 1.1 ;
	cout << "Pushing elements onto is" << endl ;
	while (is.push(i))
	{
		cout << i << ' ' ;
		i += 1 ;
	}
	cout << endl << "Stack Full" << endl
	<< endl << "Popping elements from is" << endl ;
	while (is.pop(i))
			cout << i << ' ' ;
	cout << endl << "Stack Empty" << endl ;
	return 0;
}