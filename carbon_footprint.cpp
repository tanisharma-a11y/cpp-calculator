#include <iostream>
using namespace std;

int main() {
    float travel_km, electricity_units;
    float carbon_from_travel, carbon_from_electricity, total;

    cout << "Enter daily travel distance (in km): ";
    cin >> travel_km;

    cout << "Enter daily electricity usage (in units): ";
    cin >> electricity_units;

    // Approximate values
    carbon_from_travel = travel_km * 0.21;       // kg CO2 per km
    carbon_from_electricity = electricity_units * 0.85; // kg CO2 per unit

    total = carbon_from_travel + carbon_from_electricity;

    cout << "\nEstimated Daily Carbon Footprint: " << total << " kg CO2" << endl;

    return 0;
}