// Problem : U-Va 11926: Multitasking

#include <iostream>
#include <bitset>

using namespace std;

#define MIL 1000000

bitset <MIL> timeTable;

int main(void) {
    int normal, 
	repetitive,
       	a, b,
       	rep, s, e;

    while (cin >> normal >> repetitive) {
        if (normal == 0 && repetitive == 0)
            break;

        bool allesGut = true;
	timeTable &= 0;

        while (normal--) {
            cin >> a >> b;

            for ( int l = a; l < b; l++ ) {
                if (timeTable[l] == 1)
                    allesGut = false;

                timeTable[l] = 1;
            }
        }

        while (repetitive--) {
            cin >> a >> b >> rep;

            for (int i = 0; b + i * rep < MIL; i++) {
                s = a + i * rep;
                e = b + i * rep;

                for ( int l = s; l < e; l++ ) {
                    if (timeTable[l] == true)
                        allesGut = false;

                    timeTable[l] = true;
                }
            }
        }

        if (allesGut)
            cout << "NO CONFLICT" << endl;
        else
            cout << "CONFLICT" << endl;
    }

    return 0;

}
