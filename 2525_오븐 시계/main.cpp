#include <iostream>

using namespace std;

int main()
{
    int ph, pm, am;
    cin >> ph >> pm >> am;
    int ah = am / 60;
    int mm = am % 60;
    ph += ah;
    pm += mm;
    if (pm > 59)
    {
        ph++;
        pm -= 60;
    }
    if (ph > 23)
        ph -= 24;
    
    cout << ph << " " << pm << "\n";
}