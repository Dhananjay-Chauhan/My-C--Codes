#include<iostream>
#include<string>
using namespace std;
class Mobile{
    protected:
        int battery;
        int camera;
    public:
        void get_M_details(){
            cout<<"Battery:";
            cin>>battery;
            cout<<"Camera:";
            cin>>camera;
        }
        void print_m_details(){
            cout<<"Battery of Mobile:"<<battery<<endl;
            cout<<"Camera Megapixel of Mobile:"<<camera<<endl;
        }
};
class Apple : protected Mobile{
    protected:
        int ram;
        int rom;
    public:
        void get_A_details(){
            cout<<"RAM:";
            cin>>ram;
            cout<<"ROM:";
            cin>>rom;
        }
        void print_a_details(){
            cout<<"RAM in Mobile:"<<ram<<endl;
            cout<<"ROM in Mobile:"<<rom<<endl;
        }
};
class iPhone : protected Apple{
    protected:
        string dateofrelease;
        float cost;
    public:
        void get_I_details(){
            get_M_details();
            get_A_details();
            cout<<"Date of release:";
            cin>>dateofrelease;
            cout<<"Cost:";
            cin>>cost;
        }
        void show_details(){
            cout<<"Moblie specifications of Iphone : "<<endl;
            print_m_details();
            print_a_details();
            cout<<"Release Date of IPhone:"<<dateofrelease<<endl;
            cout<<"Cost of IPhone:"<<cost<<endl;
        }
};
int main(){
    iPhone i;
    i.get_I_details();
    i.show_details();
    return 0;
}
