// 5 Diamond companies using encapsulation 

#include <iostream>
using namespace std;

class DiamondCompany {
private:

    int comp_id, comp_staff_quantity, comp_revenue;
    int comp_import_raw, comp_export;
    string comp_name, comp_ceo;

public:
    void setData(int id, string name, int staff, int revenue,
                 int import_raw, int export_d, string ceo) {

        comp_id = id;
        comp_name = name;
        comp_staff_quantity = staff;
        comp_revenue = revenue;
        comp_import_raw = import_raw;
        comp_export = export_d;
        comp_ceo = ceo;
    }

    void getData() {

        cout << "ID: " << comp_id << ", Name: " << comp_name
             << ", Staff: " << comp_staff_quantity
             << ", Revenue: " << comp_revenue
             << ", Import Raw Diamonds: " << comp_import_raw
             << ", Export Diamonds: " << comp_export
             << ", CEO: " << comp_ceo << endl;
    }
};

int main() {

    DiamondCompany c[5];

    for(int i=0; i<5; i++) {
        int id, staff, revenue, import_raw, export_d;

        string name, ceo;
        cout << "Enter Company " << i+1 << " details:\n";
        cin >> id >> name >> staff >> revenue >> import_raw >> export_d >> ceo;
        c[i].setData(id, name, staff, revenue, import_raw, export_d, ceo);
    }
    
    cout << "\n--- Company Details ---\n";
    for(int i=0; i<5; i++) {
        c[i].getData();
    }
}
