/*Το παρακάτω πρόγραμμα δέχεται ένα κείμενο από τον χρήστη, το τροποποιεί 
φωνολογικά έτσι ώστα να εξυπηρετεί τις διάφορες κατά τόπους ντοπιολαλιές, 
και το εκτυπώνει ξανά για κάθε μία από αυτές. 

Το κείμενο, προς το παρόν πρέπει είναι γραμμένο με λατινικούς χαρακτήρες,
διότι οι ελληνικοί χαρακτήρες δεσμεύουν 2 Bytes στην μνήμη και όχι 1 Byte,
πράγμα που δυσχεραίνει την διαχείρισή τους.
*/

#include <iostream>

#include "Salonicator.h"
#include "Cyprator.h"
#include "Larisator.h"

using namespace std;

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
