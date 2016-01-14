#include <iostream>
#include "LinearRegression.h"

using namespace std;

void chirps_vs_temp() {
    double chirps[] = {20, 16, 20, 18, 17, 16, 15, 17, 15, 16, 15, 17, 16, 17, 14};
    double temperatures[] = {89, 72, 93, 84, 81, 75, 70, 82, 69, 83, 80, 83, 81, 84, 76};

    LinearRegression lr(chirps, temperatures, 15);

    cout << "Enter learning rate alpha (default: 0.01): ";
    double alpha;
    cin >> alpha;

    cout << "Enter number of iterations (default: 1500): ";
    int iterations;
    cin >> iterations;

    cout << "Training model..." << endl;
    lr.train(alpha, iterations);

    cout << "Model has been trained, enter number of chirps: ";
    double x;
    cin >> x;

    double temperature = lr.predict(x);
    cout << "Estimated temperature: " << temperature << " F" << endl;
}

void sand_vs_slope() {
    double diameter[] = {0.17, 0.19, 0.22, 0.235, 0.235, 0.3, 0.35, 0.42, 0.85};
    double slope[] = {0.63, 0.7, 0.82, 0.88, 1.15, 1.5, 4.4, 7.3, 11.3};

    LinearRegression lr(diameter, slope, 9);

    cout << "Enter learning rate alpha (default: 0.01): ";
    double alpha;
    cin >> alpha;

    cout << "Enter number of iterations (default: 1500): ";
    int iterations;
    cin >> iterations;

    cout << "Training model..." << endl;
    lr.train(alpha, iterations);

    cout << "Model has been trained, enter diameter: ";
    double x;
    cin >> x;

    double temperature = lr.predict(x);
    cout << "Estimated slope: " << temperature << endl;
}

void fires_vs_theft() {
    double fires[] = {6.2, 9.5, 10.5, 7.7, 8.6, 34.1, 11, 6.9, 7.3, 15.1, 29.1, 2.2, 5.7, 2, 2.5, 4, 5.4, 2.2, 7.2,
                      15.1, 16.5, 18.4, 36.2, 39.7, 18.5, 23.3, 12.2, 5.6, 21.8, 21.6, 9, 3.6, 5, 28.6, 17.4, 11.3, 3.4,
                      11.9, 10.5, 10.7, 10.8, 4.8};
    double theft[] = {29, 44, 36, 37, 53, 68, 75, 18, 31, 25, 34, 14, 11, 11, 22, 16, 27, 9, 29, 30, 40, 32, 41, 147,
                      22, 29, 46, 23, 4, 31, 39, 15, 32, 27, 32, 34, 17, 46, 42, 43, 34, 19};

    LinearRegression lr(fires, theft, 42);

    cout << "Enter learning rate alpha (default: 0.01): ";
    double alpha;
    cin >> alpha;

    cout << "Enter number of iterations (default: 1500): ";
    int iterations;
    cin >> iterations;

    cout << "Training model..." << endl;
    lr.train(alpha, iterations);

    cout << "Model has been trained, enter fires: ";
    double x;
    cin >> x;

    double temperature = lr.predict(x);
    cout << "Estimated theft: " << temperature << endl;
}

int main() {
    while (1) {
        cout << "Choose example: " << endl;
        cout << "0: Exit" << endl;
        cout << "1. Cricket chirps/sec vs temperature in degrees fahrenheit" << endl;
        cout << "2. Diameter (mm) of sand granules vs slope on natural beach (degrees)" << endl;
        cout << "3. Fires per 1000 houses vs thefts per 1000 population in Chicago" << endl;

        int opt;
        cin >> opt;

        if (!opt) {
            break;
        }

        cout << endl;

        switch (opt) {
            case 1:
                chirps_vs_temp();
                break;

            case 2:
                sand_vs_slope();
                break;

            case 3:
                fires_vs_theft();
                break;

            default:
                break;
        }

        cout << endl << endl;
    }

    return 0;
}
