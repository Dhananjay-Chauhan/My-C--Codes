#include<iostream>
using namespace std;
class calc{
    private:
        float operand1;
        float operand2;
        int result;
        char operater;
    public:
        void get_data(){
            cout<<"Enter Operand-1:"<<endl;
            cin>>operand1;
            cout<<"Enter Operand-2:"<<endl;
            cin>>operand2;
            cout<<"Enter Operator:"<<endl;
            cin>>operater;
        }
        int show_data(){
            switch (operater)
            {
            case '+':
                result=operand1+operand2;
                cout<<"Answer : "<<result<<endl;
                break;
            case '-':
                result=operand1-operand2;
                cout<<"Answer : "<<result<<endl;
                break;
            case 'x':
                result=operand1*operand2;
                cout<<"Answer : "<<result<<endl;
                break;
            case '/':
                result=operand1/operand2;
                cout<<"Answer : "<<result<<endl;
                break;
            default:
                cout<<"Enter a Valid Operator!!";
                break;
            }
        }
};
int main(){
    calc c;
    c.get_data();
    c.show_data();
    return 0;
}