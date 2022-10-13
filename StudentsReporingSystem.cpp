#include<bits/stdc++.h>
#include<fstream>
using namespace std;

class studentlist{
    public:
    string name;
    int eng_sem1;
    int maths_sem1;
    int science_sem1;
    int eng_sem2;
    int maths_sem2;
    int science_sem2;

//map<int,string>m;
int student;
void studentd();
void studentdetails();    
void printdetails();
//void topstudents();

};

void studentlist :: studentd()
    {
        system("cls");
        cout<<"How many stidents are here in the class"<<endl;
        cin>>student;
        cout<<"Give the Detailes of "<<student<<" by sequence";
        studentdetails();
    }

void studentlist :: studentdetails()
    {
        ofstream fout;
    fout.open("data.txt" , ios::out);
    fout<<" ";
    fout.close();
        int sem1;
        int sem2;
        
        for(int i=0;i<student;i++)
        {
            int sem1,sem2;
            
            cout<<"Plz Give the Details of "<<i+1<<endl;
            cout<<"Name of student "<<i+1<<endl;
            cin>>name;
            cout<<"Give Marks of Student in Semister 1 in English -> ";
            cin>>eng_sem1;
            cout<<"Give Marks of Student in Semister 1 in Maths -> ";
            cin>>maths_sem1;
            cout<<"Give Marks of Student in Semister 1 in Science -> ";
            cin>>science_sem1;
            sem1 = (eng_sem1+maths_sem1+science_sem1)/3;
            cout<<"Give Marks of Student in Semister 2 in English -> ";
            cin>>eng_sem2;
            cout<<"Give Marks of Student in Semister 2 in Maths -> ";
            cin>>maths_sem2;
            cout<<"Give Marks of Student in Semister 2 in Science -> ";
            cin>>science_sem2;
            sem2 = (eng_sem2+maths_sem2+science_sem2)/3;
            //m[sem1+sem2] = name;

            ofstream data;
            data.open("data.txt", ios::app | ios ::out);
        {  
        data << "  "<< name <<"           "<< eng_sem1 <<"      "<< maths_sem1 << "     " << science_sem1<<"             "<<eng_sem2<<"       "<<maths_sem2<<"       "<<science_sem2<<"           "<<eng_sem1 + eng_sem2<<"                  "<<maths_sem1 + maths_sem2<<"                    "<<science_sem1 + science_sem2<<"                "<<(eng_sem1 + maths_sem1 + science_sem1)/3<<"               "<<(eng_sem2 + maths_sem2 + science_sem2)/3 << "\n";

        data.close();

        }
    }

     

    printdetails();
} 

void studentlist :: printdetails()
{ 
    system("cls");
    cout<<" Student Name           Semester 1             Semester 2              English average    maths average   science average    sem 1(percentage)    sem2 (percentage)"<<endl;
    cout<<"                english  maths  science   english  maths  science"<<endl;
    ifstream fin;
        char ch;

    fin.open("data.txt", ios::in | ios::binary);
        if (!fin)
            cout << "File not found";

        else
        {
            ch = fin.get();

            while (!fin.eof())
            {

                cout << ch;

                ch = fin.get();
            }
            fin.close();
        }

       // topstudents();

}

/* void studentlist :: topstudents()
{
    
    cout<<endl;
    cout<<endl;
    cout<<endl;
    map<int, string>:: iterator it;
    // rbegin() returns to the last value of map
    for (it = m.begin(); it != m.end(); it++) {
        if(it==m.end()-2)
        {
             cout<<"TOP 2 STUDENTS IN THE UNIVERSITY....."<<endl;
             cout<<"Marks "<<it->first<<" of Student "<<it->second<<"is in No 1"<<endl;
        }
        if(it==m.end()-3)
        {
             cout<<"TOP 2 STUDENTS IN THE UNIVERSITY....."<<endl;
             cout<<"Marks "<<it->first<<" of Student "<<it->second<<"is in No 2"<<endl;
        }
    }
}*/

int main()
{
    studentlist stu;
    stu.studentd();
}
 