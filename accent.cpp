/*Το παρακάτω πρόγραμμα δέχεται ένα κείμενο από τον χρήστη, το τροποποιεί 
φωνολογικά έτσι ώστα να εξυπηρετεί τις διάφορες κατά τόπους ντοπιολαλιές, 
και το εκτυπώνει ξανά για κάθε μία από αυτές. 

Το κείμενο, προς το παρόν πρέπει είναι γραμμένο με λατινικούς χαρακτήρες,
διότι οι ελληνικοί χαρακτήρες δεσμεύουν 2 Bytes στην μνήμη και όχι 1 Byte,
πράγμα που δυσχεραίνει την διαχείρισή τους.
*/

#include <iostream>
#include <string>

using namespace std;

class Accentator {
  protected:
    string text;
  public:
    Accentator () {}
     
    
};

class Salonicator: public Accentator {
  public:
    Salonicator(string t) {text=t;}
    void pronounce_text();
        
};
 
void Salonicator::pronounce_text() {
  	
   int length = this->text.size(); 
  	
   int found[length]; 
   string key = "l";
   found[0]= this->text.find_first_of(key);
   string change = "l";
   
   for (int i=0; i<length; i++)
   {
  	 
	    if (found[i]==string::npos){break;}

	    if (text[found[i]+1] != 'l') 
	    {this->text.insert(found[i], change);}    

	    found[i+1]=this->text.find_first_of(key,found[i]+2);
    
    }
  	
    cout << "A guy from Thessaloniki pronounce this text like this: ";
    cout << this->text << endl;

}


class Cyprator: public Accentator {
  public:
    Cyprator(string t) {text = t;}
    void pronounce_text();
    
};
  
void Cyprator::pronounce_text() {
	
   int length = this->text.size();        // change the text's length and fill it with ' ', so as if 
   this->text.resize(length+1, ' ');      // one of the letters o,i is in the and of the string text
   length = this->text.size();            // the match with the keys will be achieved
   
   int letterO[length], letterI[length]; 
   string key1 = "o ";
   
   letterO[0] = this->text.find(key1);
   string change = "n";
   
   for(int i=0; i<length; i++)
   {
        if (letterO[i]==string::npos){ break; }  
    	this->text.insert(letterO[i]+1, change);
    	letterO[i+1]=this->text.find(key1,letterO[i]+1);
   } 
   
   string key2 = "i ";   
   letterI[0] = this->text.find(key2);
   
   for(int i=0; i<length; i++)
   { 
    	if(letterI[i]==string::npos) { break; }
    	this->text.insert(letterI[i]+1, change);  
    	letterI[i+1]=this->text.find(key2,letterI[i]+1); 
   }
  	
   cout << "A guy from Cyprus pronounce this text like this: ";
   cout << this->text << endl;
  
}

class Larisator: public Accentator {
  public:
    Larisator(string t) {text=t;}
    void pronounce_text();
        
};
 
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

int main () {
  string *text;
  text = new string;  

  cout << "Please write a text of your choice\n";
  getline(cin,*text);
  cout << "The text you enter is: " << *text << endl;
       
  Salonicator Chatz(*text);
  Cyprator Papandreou(*text);
  Larisator Mousmoulos(*text);
  
  Chatz.pronounce_text();
  Papandreou.pronounce_text();
  Mousmoulos.pronounce_text();
  
  delete text;
   
  return 0;
}
