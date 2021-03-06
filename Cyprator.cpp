
void Cyprator::pronounce_text() {

        int length = this->text.size();        // change the text's length and fill it with ' ', so as if
        this->text.resize(length + 1, ' ');      // one of the letters o,i is in the and of the string text
        length = this->text.size();            // the match with the keys will be achieved

        int found;
        string key1 = "o ";

        found = this->text.find(key1);
        string change = "n";

        for (int i = 0; i < length; i++) {
            if (found == string::npos) { break; }
            this->text.insert(found + 1, change);
            found = this->text.find(key1, found + 1);
        }

        string key2 = "i ";
        found = this->text.find(key2);

        for (int i = 0; i < length; i++) {
            if (found == string::npos) { break; }
            this->text.insert(found + 1, change);
            found = this->text.find(key2, found + 1);
        }

        cout << "A guy from Cyprus pronounce this text like this: ";
        cout << this->text << endl;
}