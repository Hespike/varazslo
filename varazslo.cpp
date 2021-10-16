#include <string>

using namespace std;

string valogat(const string& str, int osszeolvasas[], int darab) {

string ujstring;

    for (int i = 0; i < darab; i++) {
        ujstring += str[osszeolvasas[i]];
    }

    return ujstring;
}
/*
#include <string>

using namespace std;

string valogat(const string& str, int osszeolvasas[], int darab) {
    string res;
    for (int i = 0; i < darab; i++) {
        res += str[osszeolvasas[i]];
    }

    return res;
}
 */
