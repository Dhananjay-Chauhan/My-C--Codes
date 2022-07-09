#include<iostream>
#include<string.h>
using namespace std;
class student
{
	private:
		int roll;
	protected:
	    char course[10];
	public: 
	   		void get()
	   		{
	   			cout<<"\n enter the roll no:";
	   			cin>>roll;
			}
			void show()
			{
				cout<<"\n Roll number:"<<roll;
			}
};
class result:private student
{
	private:
		int marks[3];
	public:
	    void get_data();
		int total();
		void display()
		{
			show();
			cout<<"\n course:"<<course;
			cout<<"\n Total marks:"<<total();
		}	
};
void result::get_data()
{
	get();
	cout<<"Enter the course:";
	cin.ignore();
	cin.getline(course,10);
	cout<<"\n enter marks in three subjects:";
	for(int i=0;i<3;i++)
	  cin>>marks[i];
}
int result::total()
{
	int total_marks=0;
	for(int i=0;i<3;i++)
	  total_marks += marks[i];
	return  total_marks;
}
int main()
{
	result r;
	//r.get();
	//r.show();
	r.get_data();
	r.display();
    //strcpy(r.course,"BCA");
	return 0;
}