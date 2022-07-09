#include<iostream>
#include<string>
using namespace std;
class stdDetails{
    private:
        int roll_no[100];
        string name[100];
        float percent[100];
        int n;
    public:
        stdDetails(){
            string name[100];//NULL
            int roll_no[100]={0} ;
            float percent[100]={0.0};
            int n;
        }
        void get_details(){
            cout<<"Enter the no. of students::";
            cin>>n;
            for(int i=0;i<n;i++){
                cout<<"Enter the Student Name::";
                cin>>name[i];
                cout<<"Enter the Roll no.:";
                cin>>roll_no[i];
                cout<<"Enter the Attendance Percentage::";  
                cin>>percent[i];
                cout<<endl;
            }
        }
        void get_attendence(){
            
            int temp;
            float temp1;
            string temp2;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < (n-1-i); j++) {
                    if (percent[i] > percent[j]) {
                        temp = percent[i];
                        temp2 = name[i];
                        temp1=roll_no[i];
                        percent[i] = percent[j];
                        name[i] = name[j];
                        roll_no[i]=roll_no[j];
;                       percent[j] = temp;
                        name[j]= temp2;
                        roll_no[j]=temp1;
                    }
                }
            }
        }
        void show_details(){
            for(int i=0;i<n;i++){
                cout<<"Student Name::"<<name[i]<<endl;
                cout<<"Roll no.:"<<roll_no[i]<<endl;
                cout<<"Attendance Percentage::"<<percent[i]<<endl;
            }
            cout<<"Descending order of Percentage:"<<endl;
            for(int i=0;i<n;i++){
                cout<<percent[i]<<endl;
            }
            cout<<"Top 3 attendance percentage holders details:"<<endl;
            for(int i=0;i<3;i++){
                cout<<"Name:"<<name[i]<<"                    "<<"Roll No.:"<<roll_no[i]<<"                     "<<"Percentage:"<<percent[i]<<endl;
            }

        }
        ~stdDetails(){
            cout<<"Objects destroyed successfully!"<<endl;
        }
};
int main(){
    stdDetails d;
    d.get_details();
    d.get_attendence();
    d.show_details();
    return 0;
}
