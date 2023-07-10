#include<iostrean>
#include<string.h>
using namespace std;

class Time{
	
public:
	int hh;
	int mm;
	int ss;
};

int main()
{
	Time t;
	cout<<"enter the time in sec."<<endl;
	cin>>t.ss;
	
	hh=t/3600;
	mm=(t/3600)%3600;
	ss=(t%3600)%3600;
	
	cout<<"hh : mm : ss"<<t.hh : t.mm : t.ss <<endl;
	
	return 0;
}
