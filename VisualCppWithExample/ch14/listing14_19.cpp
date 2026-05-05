//пример использования метода find()
#include "iostream"
#include <string>
using namespace std;


void listing14_19()
{
	string s("In twisted a twist one twist should untwist");
	string ss = "twist";
	string rest;
	int i = 0;
	cout << s << endl << endl;
	do
	{
		i = s.find(ss, i);
		if (i == -1)
			break;
		cout << "index = " << i << endl;
		rest.assign(s, i, s.size());
		cout << rest << endl << endl;
		++i;
	} while (i != -1);
}