
void Larisator::pronounce_text() {

    int length = this->text.size();        // change the text's length and fill it with ' ', so as if
    this->text.resize(length+1, ' ');      // one the sequence ou is in the and of the string text
    length = this->text.size();            // the match with the key will be achieved

    int found;
    string key1 = "ou ";
    found= this->text.find(key1);
    
    for (int i=0; i<length; i++)
    {

        if (found==string::npos){break;}
        this->text.erase(found, 2);
        found=this->text.find(key1,found);

    }
    
    string key2 = "e";
    found= this->text.find_first_of(key2);
    string change2 = "i";

    for (int i=0; i<length; i++)
    {

        if (found==string::npos){break;}
        this->text.insert(found, change2);
        found=this->text.find_first_of(key2,found+2);

    }

    cout << "A guy from Larisa pronounce this text like this: ";
    cout << this->text << endl;
}

