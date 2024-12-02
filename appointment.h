// #ifndef DOCTORLIST_H 
// #define DOCTORLIST_H
#pragma

class Patient {
private:
    string name;
    string dob;
    char gender;
    string pNum;
    string address;

public:
    void inputDetails() {
        cout << "\t\t\t\t\tFirst Name: ";
        string firstName, lastName;
        cin.ignore();
        getline(cin, firstName);
        cout << "\t\t\t\t\tLast Name: ";
        getline(cin, lastName);
        name = firstName + " " + lastName;

        cout << "\t\t\t\t\tDate of Birth (dd/mm/yyyy): ";
        cin >> dob;

        cout << "\t\t\t\t\tGender (M/F): ";
        cin >> gender;

        cout << "\t\t\t\t\tPhone Number: ";
        cin >> pNum;

        cout << "\t\t\t\t\tAddress: ";
        cin.ignore();
        getline(cin, address);

        cout << "\n\t\t\t\t\tThank you for your regestration!\n";
    }

    void appointment() {
        string previousVisit;
        cout << "\n\t\t\t\t\tHave you ever applied to our facility before? (yes/no  : ";
        cin >> previousVisit;
        if(previousVisit == "yes")
        {
            cout <<"\n\t\t\t\t\t\t\t\t\tWelcome Again\n";
            cout << "\n\t\t\t\t\t\t\t\t\tAppointment confirmed!\n";
            
        }
        else if(previousVisit == "no"){
            cout << "\n\t\t\t\t\tAvailable Departments:\n";
            cout << "\t\t\t\t\t1. Cardiology\t2. Orthopedics\t3. Medicine\n";
            cout << "\t\t\t\t\t4. Gastrology\t5. Dermatology\t6. Surgery\n";
            cout << "\t\t\t\t\t7. Neurology\n";

            string department;
            cout << "\n\t\t\t\t\tWhich department would you like to get an appointment from? ";
            cin.ignore();
            getline(cin, department);

            cout << "\n\t\t\t\t\tAppointment Types:\n";
            cout << "\t\t\t\t\t1. Doctor Consultation\t2. Result Analysis\t3. General Check-up\n";
            string procedure;
            cout << "\t\t\t\t\tWhich procedure do you want to make an appointment for? ";
            getline(cin, procedure);

            string preferredDate;
            cout << "\t\t\t\t\tTell us your preferred appointment date (dd/mm/yyyy): ";
            getline(cin, preferredDate);

            cout << "\n\t\t\t\t\t\t\t\t\tAppointment confirmed!\n";
            cout << "\t\t\t\t\tName: " << name << "\t\t\t\t\tDepartment:  " << department << "\n\t\t\t\t\tProcedure: " << procedure << "\n\t\t\t\t\tDate: " << preferredDate << endl;
        }
        else{
            cout <<"\n\t\t\t\t\tError ! Invalid character";
        }

    }
};

//#endif
