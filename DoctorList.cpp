#include<iostream>
using namespace std;

class DoctorInfo
{
public:
    string name;
    int room;
    string contact;
};

class Cardiology : public DoctorInfo
{
public:
    string institution;
    string post;
    int position;

    Cardiology(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};

class Orthopedics : public DoctorInfo
{
    public:
    string institution;
    string post;
    int position;

    Orthopedics(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};

class Medicine : public DoctorInfo
{
    public:
    string institution;
    string post;
    int position;

    Medicine(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};

class Gastrology : public DoctorInfo
{
    public:
    string institution;
    string post;
    int position;

    Gastrology(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};

class Dermatology : public DoctorInfo
{
    public:
    string institution;
    string post;
    int position;

    Dermatology(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};

class Surgery : public DoctorInfo
{
    public:
    string institution;
    string post;
    int position;

    Surgery(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};

class Neurology : public DoctorInfo
{
    public:
    string institution;
    string post;
    int position;

    Neurology(string name, int room, string contact, string institution, string post, int position)
    {
        this->name = name;
        this->room = room;
        this->contact = contact;
        this->post = post;
        this->institution = institution;
        this->position = position;
    }

    void display()
    {
        cout << endl;
        cout << "--------------------------" << endl;
        cout << name << endl;
        cout << "Room: " << room << endl;
        cout << post << endl;
        cout << institution << endl;
        cout << contact << endl;
    }
};




