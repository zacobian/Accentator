#include "Salonicator.h"

void Salonicator::pronounce_text() {

    int length = this->text.size();

    int found;
    string key = "l";
    found = this->text.find_first_of(key);
    string change = "l";

    for (int i = 0; i < length; i++) {

        if (found == string::npos) { break; }

        if (text[found + 1] != 'l') { this->text.insert(found, change); }

        found = this->text.find_first_of(key, found + 2);

    }

    cout << "A guy from Thessaloniki pronounce this text like this: ";
    cout << this->text << endl;
}



