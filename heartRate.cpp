#include <iostream>
#include <cmath> // Required for most common mathematical functions
#include <iomanip> // Optional: for better formatting of output
//
int main() {
    double hrBaseline = 2.3; //Baseline Heartrate
    double hrC = 0.25; //Current Heartrate
    double multiplier = 5; //Exponent Base Used in Calculating Stress Metric
    double maxStressLevel = 10; //Maximum Stress Level Output

    double hrRatio = hrBaseline / hrC; //Calculate the Ratio of Heartrate Ratio to Base Heartrate

    if (hrRatio <= 1) {
        return 0; // No Stress Found from HR
    } else {
        double stressLevel = std::pow(multiplier, hrRatio); //Calculate Stress Level Metric
        return std::min(stressLevel, maxStressLevel); //Return
    }
}
