#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	// char vowels[] {'a','e','i','o','u'};

	// cout<<"First of vowels is "<<vowels[0]<<endl;
	// cout<<"Lasr of vowels is "<<vowels[4]<<endl;

	double temps[10] {100,200,300,400}; //{56.2,56.7,89.65,45.67};
	cout<<"Temp is 1 "<< temps[1]<<endl;
	cout<<"Temp is 2 "<< temps[2]<<endl;
	cout<<"Temp is 3 "<< temps[3]<<endl;
	cout<<"Temp is 4 "<< temps[4]<<endl;
	cout<<"Temp is address"<< temps<<endl;

	// temps[1] = 88.88;

	// cout<<"Temps[1] is changed "<< temps[1];
	return 0;
}