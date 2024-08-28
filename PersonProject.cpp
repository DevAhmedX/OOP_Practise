#include <iostream>
using namespace std;

class clsPerson
{
private:
    string _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(string ID, string FirstName, string LastName, string Email, string Phone)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
    }

    void SetFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    string GetFirstName()
    {
        return _FirstName;
    }

    void SetLastName(string LastName)
    {
        _LastName = LastName;
    }

    string GetLastName()
    {
        return _LastName;
    }

    string GetFullName()
    {
        return _FirstName + " " + _LastName;
    }

    void SetEmail(string Email)
    {
        _Email = Email;
    }

    string GetEmail()
    {
        return _Email;
    }

    void SetPhoneNumber(string Phone)
    {
        _Phone = Phone;
    }

    string GetPhoneNumber()
    {
        return _Phone;
    }

    string GetID()
    {
        return _ID;
    }

    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message is sent successfully to: " << GetEmail() << "\n";
        cout << "Subject: " << Subject << "\n";
        cout << "Body: " << Body << "\n";
    }

    void SendSMS(string message)
    {
        cout << "The following message is sent to: " << GetPhoneNumber() << "\n";
        cout << message << "\n";
    }

    void Print()
    {
        cout << "INFO\n";
        cout << "=============================\n";
        cout << "\nID: " << _ID << "\n";
        cout << "First Name: " << GetFirstName() << "\n";
        cout << "Last Name: " << GetLastName() << "\n";
        cout << "Full Name: " << GetFullName() << "\n";
        cout << "Email: " << GetEmail() << "\n";
        cout << "Phone: " << GetPhoneNumber() << "\n";
    }
};

int main()
{
    clsPerson Person1("10", "NA", "NA", "NA", "NA");
    Person1.Print();
    Person1.SendEmail("Hi", "How are you");
    Person1.SendSMS("HI");

    system("pause");  
    return 0;
}

