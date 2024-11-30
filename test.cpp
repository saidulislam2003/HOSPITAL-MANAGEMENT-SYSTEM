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
        }
}
