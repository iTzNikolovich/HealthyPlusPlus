//
//
//  HealthyPlusPlus
//
//  Created by Nikolovich on 14/07/21.
//  Updated on 28/12/2021.
//
//
//

#include <iostream>
#include <cstdlib>
#include <cmath>

void menu();
void cBMI();
void cFM();
void cIW();

using namespace std;
int main(){
    char a;
    do{
        menu();
        cout << "Pick a choice [1-4]: ";
        cin >> a;
        switch(a){
        case '1':
                cBMI();
                break;
            case '2':
                    cFM();
                    break;
                case '3':
                        cIW();
                        break;
        }
    }while(a!='4');
}

void menu(){
    system("clear");
    cout << "=========Healthy++=========" << endl;
    cout << "1. BMI Calculator" << endl;
    cout << "2. Fat Mass Calculator" << endl;
    cout << "3. Ideal Weight" << endl;
    cout << "4. Exit" << endl;
    cout << "===========================" << endl;
    return;
}

void cBMI(){
    float cm, m, weight, bmi;
    cout << "1. BMI Calculator" << endl;
    cout << "Height [cm]: ";
    cin >> cm;
    cout << cm << " cm" << endl;
    cout << "Weight [kg]: ";
    cin >> weight;
    cout << weight << " kg" << endl;
    m = cm / 100;
    bmi = weight / (m * m);
    if (bmi < 16.5){
        cout << "You're extremely underweight" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 16.5 && bmi <= 18.4){
        cout << "You're unedrweight" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 18.5 && bmi <= 24.9){
        cout << "Your weight is normal" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 25 && bmi <= 30){
        cout << "You're overweight" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 30.01 && bmi <= 34.9){
        cout << "First degree obesity" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi >= 35 && bmi <= 40){
        cout << "Second degree obesity" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
    else if (bmi > 40){
        cout << "Third degree obesity" << endl;
        cout << "BMI: " << bmi << " kg/m2" << endl;
    }
}

void cFM(){
    float h, collo, vita, fianchi, gen, mg, fmg;
    cout << "2. Fat Mass Calculator" << endl;
    cout << "Height [cm]: ";
    cin >> h;
    cout << "Neck circumference [cm]: ";
    cin >> collo;
    cout << "Abdominal circumference [cm]: ";
    cin >> vita;
    cout << "Hips circumference [cm]: ";
    cin >> fianchi;
    cout << "Gender [1.M / 2.F]: ";
    cin >> gen;
    if (gen == 1) {
        mg = 495/(1.0324 - 0.19077*(log(vita-collo)/2.30258509299404) + 0.15456*(log(h)/2.30258509299404) ) - 450;
        fmg = (mg*1000) / 1000;
        cout << "Your Fat Mass is: " << fmg << endl;
    }
    else if (gen == 2) {
        mg = 495/(1.29579 - 0.35004*(log(vita+fianchi-collo)/2.30258509299404) + 0.22100*(log(h)/2.30258509299404) ) - 450;
        fmg = (mg*1000) / 1000;
        cout << "Your Fat Mass is: " << fmg << endl;
    }
    else
        cout << "Your choise isn't valid" << endl;
}

void cIW(){
    float h, gen, i = 0;
    cout << "3. Ideal Weight" << endl;
    cout << "Heihgt [cm]: ";
    cin >> h;
    do{
    cout << "Gender [1.M / 2.F]: ";
    cin >> gen;
    if (gen == 1){
    i = h - 100 - (h - 150) / 4;
    }
    if (gen == 2){
    i = h - 100 - (h - 150) / 2;
    }
    }while(i < 2);
    cout << "Ideal weight: " << i << "kg " << "(Lorenz formula)" << endl;
}
