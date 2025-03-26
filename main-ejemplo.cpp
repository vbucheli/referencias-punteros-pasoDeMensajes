#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int valor =5;
	int &meses=valor;
	cout<<valor<<endl;
	cout<<meses<<endl;
	cout<<&meses<<endl;
	valor++;
	cout<<valor<<endl;
	cout<<meses<<endl;
	cout<<&meses<<endl;
	int *p;
	p=&valor;
	cout<<valor<<endl;
	cout<<p<<endl;
	cout<<(*p)<<endl;
	valor++;
	cout<<valor<<endl;
	cout<<p<<endl;
	cout<<(*p)<<endl;
	
	return 0;
}
