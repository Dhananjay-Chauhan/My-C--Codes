#include<iostream>
using namespace std;
class Cuboid{
    private:
        float length;
        float breadth;
        float height;
    public:
        void get_data(){
            cout<<"Enter the length:";
            cin>>length;
            cout<<"Enter the breadth:";
            cin>>breadth;
            cout<<"Enter the heigth:";
            cin>>height;
        }
        inline int base_area(){
            cout<<"Area of Base : "<<length*breadth<<endl;
        }
        void total_surface_area(){
            float a=length*breadth;
            float b=breadth*height;
            float c=height*length;
            cout<<"Total surface area of cuboid :"<<(2*(a+b+c))<<endl;
        }
        friend void volume(Cuboid c1); 
};
void volume(Cuboid c1){
    cout<<"Total volume of Cuboid:";
    int vol=c1.length*c1.breadth*c1.height;
    cout<<vol;
}
int main(){
    Cuboid c;
    c.get_data();
    c.base_area();
    c.total_surface_area();
    volume(c);
    return 0;
}