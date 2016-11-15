#include "Cyprator.h"

void Cyprator::pronounce_text() {

        int length = this->text.size();        // change the text's length and fill it with ' ', so as if
        this->text.resize(length + 1, ' ');      // one of the letters o,i is in the and of the string text
        length = this->text.size();            // the match with the keys will be achieved

        int letterO[length], letterI[length];
        string key1 = "o ";

        letterO[0] = this->text.find(key1);
        string change = "n";

        for (int i = 0; i < length; i++) {
            if (letterO[i] == string::npos) { break; }
            this->text.insert(letterO[i] + 1, change);
            letterO[i + 1] = this->text.find(key1, letterO[i] + 1);
        }

        string key2 = "i ";
        letterI[0] = this->text.find(key2);

        for (int i = 0; i < length; i++) {
            if (letterI[i] == string::npos) { break; }
            this->text.insert(letterI[i] + 1, change);
            letterI[i + 1] = this->text.find(key2, letterI[i] + 1);
        }

        cout << "A guy from Cyprus pronounce this text like this: ";
        cout << this->text << endl;
}
