#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string prova, prova2;

    cin >> prova;

    cout << "Stringa prova: "<< prova << endl;

    cin.ignore();

    getline(cin, prova2);


    cout << "Stringa prova 2: "<< prova2 << endl;

    vector<int> vett(5);
    vett.resize(10);

    cout << endl;

    for(int i= 1; i <= vett.size(); i++)
        cout << i << endl;

    return 0;
}
