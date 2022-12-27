#include<time.h>
#include<iostream>

using namespace std;

int main()
{
	time_t now = time(NULL);
	char ch[50];
	cout << sizeof(ch) << endl;
	struct tm *tstruct;
	char buf[40];
	tstruct = localtime(&now);
	//format: day DD-MM-YYYY
	strftime(buf, sizeof(buf), "%A %d-%m-%Y", tstruct);
	cout << buf << endl;
	return 0;
}
