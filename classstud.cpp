#include <iostream>
using namespace std;

class student
{
    private:

    int rollno;
    char name[100];
    char course[100];
    int marks[5];
    int total;

    public:
    int getdetails();
    int display();
    int percentage();
};

int student ::getdetails()
{
    cout<<"\n Enter the roll no.";
    cin>>rollno;
    cout<<"\n Enter the name";
    cin>>name;
    cout<<"\n Enter the course";
    cin>>course;
    cout<<"\n Enter the marks of 5 subs out of 100";
    // cin>>rollno;
    int i,mtotal=0;
    for(i=0;i<5;i++)
    {
    cout<<"\n Enter the marks of"<<i<<"Subject";
    cin>>marks[i];
    mtotal+=marks[i];


    }
    cout<<"total ="<<mtotal;
    total = mtotal;
}
int student ::display()
{
    cout<<"Name ="<<name;
    cout<<"Roll no ="<<rollno;
    cout<<"Course ="<<course;
    cout<<"Marks =";
    int i;
    for(i=0;i<5;i++)
    {
    cout<<"\n The marks of"<<i<<"Subject ="<<marks[i];
    }
    cout<<" \n Total marks ="<<total;
    cout<<"\n Percentage ="<< percentage();


}
int student :: percentage()
{   
    float value = (total/500);
    return value * 100;
}

int main()
{    
    student stud1;
    stud1.getdetails();
    stud1.display();
    

  
    return 0;
}