#include "stonewt.h"
#include <iostream>

using std::cout;

int main(void)
{
    Stonewt incognito = 275;
    Stonewt wolfe(285.7);
    Stonewt taft(21, 8);
    cout << "The celebrity weighed " << incognito;
    cout << "The detective weighed " << wolfe;
    cout << "The President weighed " << taft;
    incognito = 276.8;
    taft = 325;
    cout << "After dinner, the celebrity weighed " << taft;
    cout << "Celebrity + Detective: " << incognito + wolfe;
    cout << "President - Detective: " << taft - wolfe;
    cout << "Detective * 5: " << wolfe * 5;
    cout << "3 * Celebrity: " << 3 * incognito;
    incognito.setStnMode();
    cout << "Celebrity Stone mode: " << incognito;
    incognito.setIntMode();
    cout << "Celebrity Int mode: " << incognito;
    incognito.setDoubleMode();
    cout << "Celebrity Float mode: " << incognito;
    cout << "The wrestler weighed even more.\n";
    cout << "No stone left unearned\n";
    return 0;
}