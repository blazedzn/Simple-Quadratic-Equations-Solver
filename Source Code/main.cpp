#include <iostream>
#include <cmath>
using namespace std;

double calc_discriminant(int a, int b, int c);
void calc_x_more_than_zero(double discriminant, int a, int b);
void calc_x_equal_to_zero(int a, int b);

int main(){
    while(true) {
		cout << endl;
		cout << "-----------------------------"<< endl;
		
        int a{0}, b{0}, c{0};
        double discriminant{0};

        cout << "Enter x^2 coefficient: ";
        cin >> a;
        cout << "Enter x coefficient: ";
        cin >> b;
        cout << "Enter num coefficient: ";
        cin >> c;
        cout << endl;

        discriminant = calc_discriminant(a, b, c);

        if (discriminant < 0) {
            cout << "Discriminant is less than 0. There is no solution of equation." << endl;
        } else if (discriminant == 0) {
            calc_x_equal_to_zero(a, b);
        } else if (discriminant > 0) {
            calc_x_more_than_zero(discriminant, a, b);
        }
    }
}

double calc_discriminant(int a, int b, int c){
    double discriminant {0};

    discriminant = (b*b) - (4 * a * c);

    cout << "Discriminant is " << discriminant  << endl;

    return discriminant;
}

void calc_x_more_than_zero(double discriminant, int a, int b){
    double x1{0};
    double x2{0};

    x1 =(-b + sqrt(discriminant)) / (2 * a);
    x2 = (-b - sqrt(discriminant))/ (2 * a);

    cout << "x1 is: " << x1 << endl;
    cout << "x2 is: " << x2 << endl;
}

void calc_x_equal_to_zero(int a, int b){
    double result{0};
    int mod_b {0};

    mod_b = -b;
    result =   (double )mod_b/ (2 * a);

    cout << "x is: " << result << endl;
}