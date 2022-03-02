#include <iostream>
#include <string>
#include <vector> 
#include <fstream>
#include <iterator>

using namespace std;

int main() {
    vector<string> voc_german;
    vector<string> voc_spanish;
    
    cout << "Vokabeltrainer\n";
    cout << "Bitte treffe eine Auswahl:\n";
    cout << "(1) Neue Vokabel hinzufügen\n";
    cout << "(2) Vokabeltest starten\n";
    string option;
    cin >> option;

    if(option == "1") {
        cout << "Welche Vokabel (Deutsch)?";
        string german_word;
        string spanish_word;
        cin >> german_word;
        cout << "Wie lautet die Übersetzung?";
        cin >> spanish_word;
        // Deutsches Wort hinzufügen
        voc_german.push_back(german_word);
        voc_spanish.push_back(spanish_word);
        cout << "Vokabel wurde hinzugefügt.\n";
        cout << "Hinzugefügte Vokabeln: " + to_string(voc_german.size());

        // Deutsche Vokabeln speichern
        ofstream output_file("./voc_german.txt");
        ostream_iterator<string> output_iterator(output_file, "\n");
        copy(voc_german.begin(), voc_german.end(), output_iterator);
        
        // Spanische Vokabeln speichern
        ofstream output_file2("./voc_spanish.txt");
        ostream_iterator<string> output_iterator2(output_file2, "\n");
        copy(voc_spanish.begin(), voc_spanish.end(), output_iterator2);


    } else {
        cout << "Vokabeltest wird gestartet...";
    }
    
    


    return 0;
}