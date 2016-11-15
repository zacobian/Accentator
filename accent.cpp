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
    void express_text();
        
};
 
void Salonicator::express_text() {
  	
  	
  	int length = this->text.size(); 
  	//cout<< length<<endl;   
   int found[length]; 
   found[0]= this->text.find_first_of("l");
   string change = "l";
   
	for (int i=1; i<length; i++)
   {
  	 
    if (found[i-1]==string::npos){break;}
    //cout<<found[i-1]<<endl;
    this->text.insert(found[i-1], change);     
    found[i]=this->text.find_first_of("l",found[i-1]+2);
    
  	}
  	
  	cout << "A guy from Thessaloniki pronounce this text like this: ";
  	cout << this->text << endl;

}


class Cyprator: public Accentator {
  public:
    Cyprator(string t) {text = t;}
    void express_text();
    
};
  
void Cyprator::express_text() {
	
   int length = this->text.size(); 
  	//cout<< length<<endl;   
   int found[length]; 
   found[0]= this->text.find_first_of("oi");
   string change = "n";
   
	for (int i=1; i<length; i++)
   {
  	 
    if (found[i-1]==string::npos){break;}
    //cout<<found[i-1]<<endl;
    this->text.insert(found[i-1]+1, change);     
    found[i]=this->text.find_first_of("oi",found[i-1]+2);
    
  	}
  	cout << "A guy from Cyprus pronounce this text like this: ";
   cout << this->text << endl;
  
}

int main () {
  string text;  
  
  cout << "Please write a text of your choice\n";
  getline(cin,text);
  cout << "The text you enter is: " << text << endl;
       
  Salonicator Chatz(text);
  Cyprator Petrakis(text);
  Chatz.express_text();
  Petrakis.express_text();
   
  return 0;
}