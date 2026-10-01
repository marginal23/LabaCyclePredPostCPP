/*******************************************
* Автор: Сатин Владимир                    *
* Вариант: 10                              *
* Название: Циклы с пред. и пост. условием *
*******************************************/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double InitialTemperature;
    double RoomTemperature;
    double CoolingTime;
    double CurrentTemperature;

    double timeValues[] = { 0, 0.25, 0.5, 0.75, 1, 2, 3, 4, 5 };

    int i = 0;

    cout << "InitialTemperature = ";
    cin >> InitialTemperature;

    cout << "RoomTemperature = ";
    cin >> RoomTemperature;

    do {
        CoolingTime = timeValues[i];

        CurrentTemperature = RoomTemperature + (InitialTemperature - RoomTemperature) * exp(-CoolingTime / 20.0);

        cout << "Cooling time = " << CoolingTime << ", Temperature = " << CurrentTemperature << endl;

        i++;

    } while (i < 9);

    return 0;
}