#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double time1, time2, percentage, v;
    float const c = 3 * pow(10.0 , 8.0);

    cout << "Enter velocity in meters per second: " << endl;
    cin >> v;

    // User inputs velocity in meters per second

    cout << "Enter time in years: " << endl;
    cin >> time2;

    // User inputs length of time in years

    time1 = time2 / sqrt(1 - pow(v, 2) / pow(c, 2));
    percentage = (v / c) * 100;

    // Input User Data Into Time Dilation Function
    // Determine percentage to speed of light

    cout << endl;

    cout << "If you travel on a rocket going " << percentage << "%"
         << " the speed of light, for " << time2 << " years, " << time1
         << " years will have passed on Earth! " << endl;


    return 0;
}
