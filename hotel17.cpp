#include<iostrean>
#include<string.h>
using namespace std;


class Hotel
{
     	public :
		
		void get()
		{
	    	int id;
       	    char name[100];
		    int staff_size;
		    int room_size;
		    int establish_year;
	    	char address[1000];
		    int rating_type;
		    char website[1000];
    	}
    	void set()
    	{
    		cout<<"id"<<this->h.id<<endl;
    		cout<<"name"<<this->h.name<<endl;
    		cout<<"staff_size"<<this->h.staff_size<<endl;
    		cout<<"room_size"<<this->h.room_size<<endl;
    		cout<<"establish_year"<<this->h.establish_year<<endl;
    		cout<<"address"<<this->h.address<<endl;
    		cout<<"rating_type"<<this->h.rating_type<<endl;
    		cout<<"website"<<this->h.website<<endl;
		}
		
};
int main()
{
	Hotel h;
	
	h.id(12);
	h.name(raja ram);
	h.staff_size(100);
	h.room_size(75);
	h.establish_year(1998);
	h.address(surat,gujrat);
	h.rating_type(7 star);
	h.website(www.rajaramhotel.in);
	
	return 0;
}
