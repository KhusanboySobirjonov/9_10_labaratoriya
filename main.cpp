#include <iostream>
#include <cmath>
using namespace std;
class PowerN {
    public:
        float result , solution;
        int result_1;
        PowerN (float X , int N) {
            this->result = X;
            this->result_1 = N;
        }
        float operator- () {
            if (result_1 == 0) {
                solution = pow(result , result_1);
            }
            if (result_1 > 0 && result_1 / 2 == 0) {
                solution = pow(result , result_1 / 2) * pow(result , result_1 / 2);
            }
            if (result_1 > 0 && result_1 % 2 == 1) {
                solution = result * pow(result , result_1-1);
            }
            if (result_1 < 0) {
                solution = pow(1 / result , - result_1);
            }
            cout << "Result : \n" << solution << endl;
        }
};

int main(){
    int X, N1 , N2 , N3;
    cout << "Enter the number that raises the level : ";
    cin >> X;
    cout << "Enter the degree :\n";
    cout << "N1 = "; cin >> N1;
    cout << "N2 = "; cin >> N2;
    cout << "N3 = "; cin >> N3;
    PowerN obj1(X,N1) , obj2(X,N2) , obj3(X,N3);
    -obj1;
    -obj2;
    -obj3;
    return 0;
}
