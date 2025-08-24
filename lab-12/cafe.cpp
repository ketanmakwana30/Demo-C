// 5 Fast Food cafés using encapsulation. 

#include <iostream>
using namespace std;

class Cafe {
private:
    int cafe_id, cafe_rating, cafe_year, cafe_staff;
    string cafe_name, cafe_type, cafe_location;

public:
    void setData(int id, string name, string type, int rating,
                 string location, int year, int staff) {
        cafe_id = id;
        cafe_name = name;
        cafe_type = type;
        cafe_rating = rating;
        cafe_location = location;
        cafe_year = year;
        cafe_staff = staff;
    }

    void getData() {
        cout << "ID: " << cafe_id << ", Name: " << cafe_name
             << ", Type: " << cafe_type
             << ", Rating: " << cafe_rating
             << ", Location: " << cafe_location
             << ", Year: " << cafe_year
             << ", Staff: " << cafe_staff << endl;
    }
};

int main() {
    Cafe c[5];
    for(int i=0; i<5; i++) {
        int id, rating, year, staff;
        string name, type, location;
        cout << "Enter Cafe " << i+1 << " details:\n";
        cin >> id >> name >> type >> rating >> location >> year >> staff;
        c[i].setData(id, name, type, rating, location, year, staff);
    }
    cout << "\n--- Cafe Details ---\n";
    for(int i=0; i<5; i++) {
        c[i].getData();
    }
}

