#include<iostream>
#include<conio.h>
#include"DoctorList.h"
#include"appointment.h"
using namespace std;

int main()
{
    cout << "\t\t\t\t\tBomvola Medical Center" << endl;
    cout << "\t\t\t\t\t----------------------" << endl;
    cout << endl;
    cout << "\t\t\t\t\tWELCOME TO OUR HOSPITAL";
    cout << endl << endl << endl;

    int n1 = 1, n2 = 2, n3 = 3;
    cout << "\t\t\t\t\t" << n1 << ". Doctor list." << endl;
    cout << "\t\t\t\t\t" << n2 << ". Request for an appointment" << endl;
    cout << "\t\t\t\t\t" << n3 << ". Exit\n\n";
 while(true){   
    cout << "\t\t\t\t\tEnter your choice: ";

    int n;
    cin >> n;

    if(n == n1)
    {
        cout << "\n\t\t\t\t\tAvailable Departments:\n";
        cout << "\t\t\t\t\t1. Cardiology\t2. Orthopedics\t3. Medicine\n";
        cout << "\t\t\t\t\t4. Gastrology\t5. Dermatology\t6. Surgery\n";
        cout << "\t\t\t\t\t7. Neurology\n";
        cout << endl;
        
        cout << "\t\t\t\t\tDepartment: ";
        string department;
        cin.ignore();
        getline(cin, department);

        if(department == "Cardiology")
        {
            Cardiology Cardio[3] = {
                Cardiology("Dr. Anowar", 1009, "0192929373", "Dhaka Medical College", "Professor", 1),
                Cardiology("Dr. Rafiq", 2014, "0156767596", "Rajshahi Medical College", "Associate Professor", 2),
                Cardiology("Dr. Leokey", 3002, "0164554343", "Ahsania Mission Medical College", "Assistant Professor", 3),
        };
            for(int i = 0; i < 3; i++)
            {
                Cardio[i].display();
            }
        }

        else if(department == "Orthopedics")
        {
            Orthopedics Ortho[3] = {
                Orthopedics("Dr. Sinha", 5021, "01345684564", "Ibn Sina Medical College", "Professor", 1),
                Orthopedics("Dr. Sayema", 2007, "0175645654", "Sir Salimullah Medical College", "Associate Professor", 2),
                Orthopedics("Dr. Ali Hossain", 3011, "0185435343", "International Medical College", "Assistant Professor", 3),
            };
            for(int i = 0; i < 3; i++)
            {
                Ortho[i].display();
            }
        
        }

        else if(department == "Medicine")
        {
            Medicine Medi[3] = {
            Medicine("Dr. Arif", 3004, "0153498289", "Bangubandhu Medical University", "Professor", 1),
            Medicine("Dr. Ayesha", 4022, "0145345300", "Tajuddin Medical College", "Associate Professor", 2),
            Medicine("Dr. Ali Hossain", 5010, "0186535335", "Cumilla Medical College", "Assistant Professor", 3),
        };
            for(int i = 0; i < 3; i++)
            {
                Medi[i].display();
            }
        }

            
        else if(department == "Gastrology")
        {
            Gastrology Gas[3] = {
            Gastrology("Dr. Roksana", 1004, "0165488353", "Abdul Malek Ukil Medical College", "Professor", 1),
            Gastrology("Dr. Nayeem", 4012, "0145645600", "MAG Osmani Medical College", "Associate Professor", 2),
            Gastrology("Dr. Alimujjaman ", 5007, "0186493503", "Barishal Medical College", "Assistant Professor", 3),
        };
            for(int i = 0; i < 3; i++)
            {
                Gas[i].display();
            }
        }

        else if(department == "Dermatology")
        {
            Dermatology Derma[3] = {
            Dermatology("Dr. Hasan", 2001, "0156845680", "Uttara Adhunik Medical College", "Professor", 1),
            Dermatology("Dr. Sunny", 5020, "0175467486", "Delta Medical College", "Associate Professor", 2),
            Dermatology("Dr. Sweet", 4008, "0186459890", "Sheikh Hasina Medical College", "Assistant Professor", 3),
        };
            for(int i = 0; i < 3; i++)
            {
                Derma[i].display();
            }
        }

        else if(department == "Surgery")
        {
            Surgery Surg[2] = {
            Surgery("Dr. Ishak", 4016, "0165488353", "Dhaka Medical College", "Professor", 1),
            Surgery("Dr. Asgor", 4017, "0145645600", "Mymensigh Medical College", "Associate Professor", 2),
        };
            for(int i = 0; i < 2; i++)
            {
                Surg[i].display();
            }
        }

        else if(department == "Neurology")
        {
            Neurology Neu[3] = {
            Neurology("Dr. Koushik", 1020, "016084086", "Bangubandhu Medical University", "Professor", 1),
            Neurology("Dr. Pinan", 5002, "0167856459", "Rajshahi Medical College", "Associate Professor", 2),
            Neurology("Dr. Mithila", 4019, "0156890567 ", "Shahid Shorawardi Medical College", "Assistant Professor", 2)
        };
            for(int i = 0; i < 3; i++)
            {
                Neu[i].display();
            }
        }
        
    }
    else if(n == n2)
    {
        Patient p;
        p.inputDetails();
        p.appointment();
        
    }
    else if(n == n3)
    {
        cout << "Thank you for visiting Bomvola Medical Center. Goodbye!\n";
    }

    else{
        cout << "\t\t\t\t\tInvalid Choice. Please try again." << endl;
    }
    getch();
 }
}
