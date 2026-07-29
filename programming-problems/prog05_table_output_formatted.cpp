#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ProvinceData
{
    string province;
    double area;
    double population;
};

int main()
{
    vector<ProvinceData> table = {
        {"Anhui", 139600.00, 6461.00},
        {"Beijing", 16410.54, 1180.70},
        {"Chongqing", 82400.00, 3144.23},
        {"Shanghai", 6340.50, 1360.26},
        {"Zhejiang", 101800.00, 4894.00}
    };

    cout << string(36, '-') << '\n';
    cout << left << setw(10) << "Province"
         << right << setw(13) << "Area(km2)"
         << setw(12) << "Pop.(10K)" << '\n';
    cout << string(36, '-') << '\n';

    cout << fixed << setprecision(2);
    for (const ProvinceData &row : table)
    {
        cout << left << setw(10) << row.province
             << right << setw(13) << row.area
             << setw(10) << row.population << '\n';
    }

    cout << string(36, '-') << '\n';

    return 0;
}
