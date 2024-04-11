#include<iostream>
using namespace std;

class Diamond{
    private:
        int comp_id;
        string comp_name;
        int comp_staff_quantity;
        double comp_revenue; 
        int comp_import_raw_diamonds;
        int comp_export_diamonds;
        string comp_ceo;
    
    public:
        Diamond(int id, string name, int staff_quantity, double revenue, int import_count, int export_count, string ceo_name)
        {
            this->comp_id = id;
            this->comp_name = name;
            this->comp_staff_quantity = staff_quantity;
            this->comp_revenue = revenue;
            this->comp_import_raw_diamonds = import_count;
            this->comp_export_diamonds = export_count;
            this->comp_ceo = ceo_name; 
        }
        
        void DisplayInfo()
        {
            cout << "Company ID: " << comp_id << endl;
            cout << "Company Name: " << comp_name << endl;
            cout << "Staff Quantity: " << comp_staff_quantity << endl;
            cout << "Annual Revenue: $" << comp_revenue << endl;
            cout << "Imported Raw Diamonds: " << comp_import_raw_diamonds << endl;
            cout << "Exported Diamonds: " << comp_export_diamonds << endl;
            cout << "CEO: " << comp_ceo << endl;
            cout << "------------------------------------" << endl;
        }
};

int main()
{
    Diamond company1(1, "Diamond Co. 1", 100, 1000000.0, 5000, 2000, "Bhavya");
    Diamond company2(2, "Diamond Co. 2", 200, 2000000.0, 8000, 3000, "Bhavik");
    Diamond company3(3, "Diamond Co. 3", 150, 1500000.0, 6000, 2500, "Yash");

    company1.DisplayInfo();
    company2.DisplayInfo();
    company3.DisplayInfo();

    return 0;
}

