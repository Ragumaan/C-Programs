#include <iostream>
using namespace std;

int main() {    
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

while(n1 >= n2 && n1 >= n3)
{

        cout << "Largest number: " << n1;
        break;
}
while(n2 >= n1 && n2 >= n3)
{

        cout << "Largest number: " << n2;
        break;
    }
    
while(n3 >= n1 && n3 >= n2)
{

        cout << "Largest number: " << n3;
        break;
}
    return 0;
}

