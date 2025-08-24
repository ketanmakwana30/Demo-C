// Customer Record System (Encapsulation).

#include <iostream>
using namespace std;

class Customer {
private:
    int cust_id, cust_age, cust_simcard_validity;
    string cust_name, cust_city, cust_mobile_number, cust_telecom_brand_name;

public:
    void setData(int id, string name, int age, string city,
                 string mobile, int validity, string brand) {
        cust_id = id;
        cust_name = name;
        cust_age = age;
        cust_city = city;
        cust_mobile_number = mobile;
        cust_simcard_validity = validity;
        cust_telecom_brand_name = brand;
    }

    void display() {
        cout << "ID: " << cust_id << ", Name: " << cust_name << ", Age: " << cust_age
             << ", City: " << cust_city << ", Mobile: " << cust_mobile_number
             << ", Validity: " << cust_simcard_validity << " years"
             << ", Brand: " << cust_telecom_brand_name << endl;
    }
};

int main() {
    Customer c[5];

    c[0].setData(1, "Ketan", 20, "Bhavnagar", "9998887777", 2, "Jio");
    c[1].setData(2, "Rajvir", 21, "Surat", "8887776666", 3, "Airtel");
    c[2].setData(3, "Aniket", 22, "Mahuva", "7776665555", 1, "Vi");
    c[3].setData(4, "Rajendra", 19, "Khari", "6665554444", 5, "BSNL");
    c[4].setData(5, "Dharmesh", 23, "Ahmedabad", "5554443333", 2, "Jio");

    for (int i = 0; i < 5; i++) {
        c[i].display();
    }
    return 0;
}
