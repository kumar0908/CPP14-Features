#include<iostream>
#include<complex>
using namespace std;

template <typename t>
t pi = t(1.434368476838680876585674053043L);
int main()
{
	//pi <char> = "x";
	cout.precision(std::numeric_limits<long double>::max_digits10);
	cout<<pi<int> ;
	cout<<endl;
	cout<<pi<float> ;
	cout<<endl;
	cout<<pi<long double> ;
	cout<<endl;
	//cout<<pi<char>;
	return 0;
}