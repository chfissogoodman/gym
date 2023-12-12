#include <iostream>

using namespace std;


void calculateNutrientIntake(double weight, double& carbs, double& fats, double& proteins, int dayType);

int main() {
  double weight;
  cout << "Please enter your weight (kg) :";
  cin >> weight;

  double highCarb, highFat, highProtein;
  calculateNutrientIntake(weight, highCarb, highFat, highProtein, 1);


  double moderateCarb, moderateFat, moderateProtein;
  calculateNutrientIntake(weight, moderateCarb, moderateFat, moderateProtein, 2);


  double lowCarb, lowFat, lowProtein;
  calculateNutrientIntake(weight, lowCarb, lowFat, lowProtein, 3);


  cout << "\nOn a high carbon day:\n";
  cout << "Carbohydrate intake:" << highCarb << " g\n";
  cout << "Fat intake:" << highFat << " g\n";
  cout << "protein intake:" << highProtein << " g\n";

  cout << "\nOn a medium carbon day:\n";
  cout << "Carbohydrate intake:" << moderateCarb << " g\n";
  cout << "Fat intake:" << moderateFat << " g\n";
  cout << "protein intake:" << moderateProtein << " g\n";

  cout << "\nOn Low carbon Day:\n";
  cout << "Carbohydrate intake:" << lowCarb << " g\n";
  cout << "Fat intake:" << lowFat << " g\n";
  cout << "protein intake:" << lowProtein << " g\n";

  return 0;
}


void calculateNutrientIntake(double weight, double& carbs, double& fats, double& proteins, int dayType) {
  double carbRatio=2, fatRatio=0.8, proteinRatio=1.5;
  double weekCarb=weight*7*carbRatio;
  double weekFat=weight*7*fatRatio;
  double weekProtein=weight*7*proteinRatio;

  switch (dayType) {
    case 1:
      carbs = (weekCarb*0.5)/2;
      fats = (weekFat*0.15)/2;
      proteins = weekProtein/7;
      break;
    case 2:
      carbs = (weekCarb*0.35)/3;
      fats = (weekFat*0.35)/3;
      proteins = weekProtein/7;
      break;
    case 3:
      carbs = (weekCarb*0.15)/2;
      fats = (weekFat*0.5)/2;
      proteins = weekProtein/7;
      break;
    default:
      cerr << "Invalid day type\n";
      return;
  }
}
