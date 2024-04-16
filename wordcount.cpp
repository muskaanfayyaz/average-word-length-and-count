#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string word;
    int total_length = 0;
    int word_count = 0;
    cout<<"enter words(press Enter 'x' to end):";
    while (true) {
        cin>>word; // Read a line of input
        if(word=="x"){
        	break;	
		}
        total_length += word.length();
        word_count++;
    }
    if (word_count == 0) {
        cout << "No words entered." << endl;
    } else {
    	cout<<"total length"<<total_length<<endl;
    	cout<<"word count"<< word_count<<endl;
        float average_length = (total_length) / word_count;
        cout << "The average length of the words entered is " << average_length << "." << endl;
    }
    return 0;
}

