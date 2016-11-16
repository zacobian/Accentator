#include "Larisator.h"


void Larisator::pronounce_text() {

    int length = this->text.size();        // change the text's length and fill it with ' ', so as if
    this->text.resize(length+1, ' ');      // one the sequence ou is in the and of the string text
    length = this->text.size();            // the match with the key will be achieved

    int letterU[length], letterE[length];
    string key1 = "ou ";
    //string change1 = "";
    letterU[0]= this->text.find(key1);
    string key2 = "e";
    letterE[0]= this->text.find_first_of(key2);
    string change2 = "i";

    for (int i=0; i<length; i++)
    {

        if (letterU[i]==string::npos){break;}
        //cout<<letterU[i-1]<<endl;
        this->text.erase(letterU[i], 2);
        letterU[i+1]=this->text.find(key1,letterU[i]);

    }

    for (int i=0; i<length; i++)
    {

        if (letterE[i]==string::npos){break;}
        //cout<<letterE[i-1]<<endl;
        this->text.insert(letterE[i], change2);
        letterE[i+1]=this->text.find_first_of(key2,letterE[i]+2);

    }

    cout << "A guy from Larisa pronounce this text like this: ";
    cout << this->text << endl;
}

