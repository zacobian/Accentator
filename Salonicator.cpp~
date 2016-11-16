#include "Salonicator.h"

void Salonicator::pronounce_text() {

    int length = this->text.size();

    int found[length];
    string key = "l";
    found[0] = this->text.find_first_of(key);
    string change = "l";

    for (int i = 0; i < length; i++) {

        if (found[i] == string::npos) { break; }

        if (text[found[i] + 1] != 'l') { this->text.insert(found[i], change); }

        found[i + 1] = this->text.find_first_of(key, found[i] + 2);

    }

    cout << "A guy from Thessaloniki pronounce this text like this: ";
    cout << this->text << endl;
}



