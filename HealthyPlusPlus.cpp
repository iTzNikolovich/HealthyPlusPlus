//
//  main.cpp
//  HealthyPlusPlus
//
//  Created by Nikolovich on 14/07/21.
//

#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;
int main()
{
    float cm, m, weight, bmi;
    system("clear");
    cout << "Height: ";
    cin >> cm;
    cout << cm << " cm" << endl;
    cout << "Weight: ";
    cin >> weight;
    cout << weight << " kg" << endl;
    m = cm/100;
    bmi = weight/(m*m);
    if (bmi < 16.5)
    {
        cout << "You're extremely underweight" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 16.5 && bmi <= 18.4)
    {
        cout << "You're unedrweight" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        cout << "Your weight is normal" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 25 && bmi <= 30)
    {
        cout << "You're overweight" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 30.01 && bmi <= 34.9)
    {
        cout << "First degree obesity" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 35 && bmi <= 40)
    {
        cout << "Second degree obesity" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi > 40)
    {
        cout << "Third degree obesity" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    system("exit > /dev/null");
}
