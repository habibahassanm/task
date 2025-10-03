#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    string name;
    int age;
    string medicalHistory;
    string historyPassword;
public:
    Patient(const string& name_, int age_, const string& password_)
        : name(name_), age(age_), medicalHistory(""), historyPassword(password_) {}
    void addHistory(const string& entry) {
        if (!medicalHistory.empty()) {
            medicalHistory += "\n";
        }
        medicalHistory += entry;
    }
    string getHistory(const string& password) const {
        if (password == historyPassword) {
            return medicalHistory.empty() ? "(No medical history)" : medicalHistory;
        }
        return "Access denied: incorrect password.";
    }
    string getBasicInfo() const {
        return "Name: " + name + " | Age: " + to_string(age);
    }
};

int main() {
    Patient p("Mona", 30, "secret123");
    cout << p.getBasicInfo() << endl;
    p.addHistory("2024-01-10: Flu, treated with rest.");
    p.addHistory("2024-03-05: Allergy - prescribed antihistamine.");
    cout << "\nTrying with wrong password:\n";
    cout << p.getHistory("wrong") << endl;
    cout << "\nWith correct password:\n";
    cout << p.getHistory("secret123") << endl;
    return 0;
}
