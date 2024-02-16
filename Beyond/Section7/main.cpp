#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> Vector1;

    Vector1.push_back(10);
    Vector1.push_back(20);

    cout << "Vector1 size: " << Vector1.size()
    << "\nVector1 first value: " << Vector1.at(0)
    << "\nVector1 second value: " << Vector1.at(1);

    cout << "\n\n-=-=-=-=-=-=-=-=-=-=\n\n";

    vector<int> Vector2;

    Vector2.push_back(100);
    Vector2.push_back(200);

    cout << "Vector2 size: " << Vector2.size() << "\nVector2 first value: " << Vector2.at(0) << "\nVector2 second value: " << Vector2.at(1);

    cout << "\n\n-=-=-=-=-=-=-=-=-=-=\n\n";

    vector<vector<int>> Vector2D;

    Vector2D.push_back(Vector1);
    Vector2D.push_back(Vector2);

    cout << "Vector2D first value: " << Vector2D.at(0).at(0) << " " << Vector2D.at(0).at(1)
    << "\nVector2D second value: " << Vector2D.at(1).at(0) << " " << Vector2D.at(1).at(1);

    cout << "\n\n-=-=-=-=-=-=-=-=-=-=\n\n";


    Vector1.at(0) = 1000;

    cout << "Vector2D first value: " << Vector2D.at(0).at(0) << " " << Vector2D.at(0).at(1)
    << "\nVector2D second value: " << Vector2D.at(1).at(0) << " " << Vector2D.at(1).at(1);

    cout << "\n\n-=-=-=-=-=-=-=-=-=-=\n\n";

    cout << "Vector1 first value: " << Vector1.at(0)
    << "\nVector1 second value: " << Vector1.at(1);

    return 0;
}