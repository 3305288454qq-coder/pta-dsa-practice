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

    const int province_width = 14;
    const int area_width = 14;
    const int population_width = 14;
    const int table_width =
        province_width + area_width + population_width;

    cout << string(table_width, '-') << '\n';
    cout << left << setw(province_width) << "Province"
         << right << setw(area_width) << "Area(km2)"
         << setw(population_width) << "Pop.(10K)" << '\n';
    cout << string(table_width, '-') << '\n';

    cout << fixed << setprecision(2);

    for (const ProvinceData &row : table)
    {
        cout << left << setw(province_width) << row.province
             << right << setw(area_width) << row.area
             << setw(population_width) << row.population << '\n';
    }

    cout << string(table_width, '-') << '\n';

    return 0;
}
