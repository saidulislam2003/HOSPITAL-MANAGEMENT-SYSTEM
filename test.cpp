#include<iostream>
#include<fstream>
#include<string> 
using namespace std;

int main()
{
    cout << "\t\t\t\t\tBomvola Medical Center" << endl;
    cout << "\t\t\t\t\t==========================" << endl;
    cout << endl;
    cout << "\t\t\t\t\tWELCOME TO OUR HOSPITAL";
    cout << endl << endl << endl;

    int n1 = 1;
    cout << "\t\t\t\t\t"<< n1 << "." << " " << "Doctor list." << endl;
    int n2 = 2;
    cout << "\t\t\t\t\t" << n2 << "." << " " << "Request for an appointment" << endl;
    int n3 = 3;
    cout << "\t\t\t\t\t" << n3 << ". All appointments (Doctor Wise)\n\n";
    cout << "\t\t\t\t\tEnter your choice: ";

    int n;
    cin >> n;

    if(n == n1)
    {
        cout << "\t\t\t\t\tDepartment: ";
        string department;
        cin.ignore();
        getline(cin, department);

        if(department == "Cardiology")
        {
        //     Cardiology Cardio[3] = {
        //         Cardiology(/*"Dr. Anowar", 1009, "0192929373", "Dhaka Medical College", "Professor",*/ 1),
        //         Cardiology(/*"Dr. Rafiq", 2014, "0156767596", "Rajshahi Medical College", "Associate Professor",*/ 2),
        //         // Cardiology("Dr. Leokey", 3002, "0164554343", "Ahsania Mission Medical College", "Assistant Professor", 3),
        // };
        //     for(int i = 0; i < 3; i++)
        //     {
        //         Cardio[i].display();
        //     }
            ifstream Cardio;
            string c;
            Cardio.open("Cardiology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Cardio.eof() == 0)
            {
                getline(Cardio, c);
                cout << c << endl;
            }

            Cardio.close();
        }

        else if(department == "Dermatology")
        {
            ifstream Derma;
            string d;
            Derma.open("Dermatology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Derma.eof() == 0)
            {
                getline(Derma, d);
                cout << d << endl;
            }

            Derma.close();
        }

        else if(department == "Endocrinology")
        {
            ifstream Endo;
            string e;
            Endo.open("Endocrinology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Endo.eof() == 0)
            {
                getline(Endo, e);
                cout << e << endl;
            }

            Endo.close();
        }

        else if(department == "Gastroenterology")
        {
            ifstream Gastro;
            string g;
            Gastro.open("Gastroenterology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Gastro.eof() == 0)
            {
                getline(Gastro, g);
                cout << g << endl;
            }

            Gastro.close();
        }

        else if(department == "Gynecology")
        {
            ifstream Gyneco;
            string gy;
            Gyneco.open("Gynecology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Gyneco.eof() == 0)
            {
                getline(Gyneco, gy);
                cout << gy << endl;
            }

            Gyneco.close();
        }

        else if(department == "Hematology")
        {
            ifstream Hema;
            string h;
            Hema.open("Hematology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Hema.eof() == 0)
            {
                getline(Hema, h);
                cout << h << endl;
            }

            Hema.close();
        }

        else if(department == "Medicine")
        {
            ifstream Medi;
            string m;
            Medi.open("Medicine.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Medi.eof() == 0)
            {
                getline(Medi, m);
                cout << m << endl;
            }

            Medi.close();
        }

        else if(department == "Neurology")
        {
            ifstream Neuro;
            string n;
            Neuro.open("Neurology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Neuro.eof() == 0)
            {
                getline(Neuro, n);
                cout << n << endl;
            }

            Neuro.close();
        }

        else if(department == "Orthopedics")
        {
            ifstream Ortho;
            string o;
            Ortho.open("Orthopedics.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Ortho.eof() == 0)
            {
                getline(Ortho, o);
                cout << o << endl;
            }

            Ortho.close();
        }

        else if(department == "Surgery")
        {
            ifstream Sur;
            string s;
            Sur.open("Surgery.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Sur.eof() == 0)
            {
                getline(Sur, s);
                cout << s << endl;
            }

            Sur.close();
        }

        else if(department == "Urology")
        {
            ifstream Uro;
            string u;
            Uro.open("Urology.txt");
            // in >> st >> st2;
            // cout << st << st2;

            while(Uro.eof() == 0)
            {
                getline(Uro, u);
                cout << u << endl;
            }

            Uro.close();
        }
    }
}
