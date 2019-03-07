#include<iostream>

using namespace std;

void display (int marks[10]);

int main()
{
	
	int marks[10] = { 101,102,103,104,105,106,107,108,109,110};
	display(marks);
	return 0;
}

void display(int m[10])
{
	cout<< "Displaying marks: "<< endl;
	
	for(int i=0;i<10;++i)
	{
		cout<<"Student"<<i+1<<" : "<<m[i]<<endl;
	}
}
