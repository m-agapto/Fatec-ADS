#include <iostream>
using namespace std;

int main() {
    int func[3];

    cout << "Indique o coeficiente de A:" << endl;
    cin >> func[0];

    cout << "Indique o coeficiente de B:" << endl;
    cin >> func[1];

    cout << "Indique o coeficiente de C:" << endl;
    cin >> func[2];

    cout << "Equacao: " << func[0] << "X² - "
         << func[1] << "X + "
         << func[2] << " = 0" << endl;

    return 0;
}

