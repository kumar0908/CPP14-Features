//if we do not want to use some old fuction in some new release, we can avoid that without removing that part of the code.
//deprecated means:
//1. Use of some entity or name is allowed but due to some reason it is descouraged to use.
//2. compiler gives warnings and if string literals are provided they are included in warning.
#include<iostream>
using namespace std;
[[deprecated]]
int fun()
{
	cout<<"This is a deprecated function, so you are not encouraged to use it"<<endl;
	return 0;

}
int main()
{
	fun();
	return 0;
}