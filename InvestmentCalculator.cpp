//Header files
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

        double investment;
        double yearOnePercent;
        double yearTwoPercent;
        double yearThreePercent;
        double yearFourPercent;
        double totalReturn;
        char answer;

        do {

                //User input is taken. Amount invested and the percentage increase/decrease
                cout << "Enter invested amount: ";
                cin >> investment;

                cout << "Enter first year percentage: ";
                cin >> yearOnePercent;

                cout << "Enter second year percentage: ";
                cin >> yearTwoPercent;

                cout << "Enter third year percentage: ";
                cin >> yearThreePercent;

                cout << "Enter fourth year percentage: ";
                cin >> yearFourPercent;

                cout << endl;

                //Calculations are made over the fpurs years
                investment += investment * (yearOnePercent / 100);
                investment += investment * (yearTwoPercent / 100);
                investment += investment * (yearThreePercent / 100);
                investment += investment * (yearFourPercent / 100);

                //Result is displayed
                cout << fixed << setprecision(2) << showpoint;
                cout << "Your total return over four years is: " << investment << " SEK" << endl;
                cout << endl;

                cout << "Do you wish to calculate again? (Y/N) ";
                cin >> answer;

        } while (answer == 'Y' || answer == 'y');

        return 0;
}

