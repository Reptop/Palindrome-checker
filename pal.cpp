//Author: Raed K 
#include <iostream> 
#include <cstring>
using namespace std; 

//function that returns true or false based on comparing char array forwards and backwards 
bool isPal(char x[100], int len) {
     for(int i = 0; i < len; i++){
        if(x[i] != x[len-i-1]) { //compares with the array running  backwards 
            return false; 
        }
        else {
            return true;    
        }
    }
}


// Driver code
int main() {

    //variables 
    char input[100];
    char input3; 
    char input2[100];

    cout << "Enter a word or sentence: "; 
    cin.getline(input, 100); 
    int len = strlen(input); 
    int k = 0; 

    for (int i = 0; i < len; i++) {
        if(isalpha(input[i])) { //checks if alphanumeric 
            input2[k] = tolower(input[i]); //inserts lowercases chars from input into input2
            k++; //keeps track of how many chars are inserted into input 2; it also helps each char to save into different indexes 
                //after one iteration, c increases by 1, and the next valid char in input1 gets inserted into input2 
        }
    }
    len = k; //redeclare the new length of char array input2 after punctuation is removed 

    if(!isPal(input2, k)) {
        cout << "Not a Palindrome" << endl;
    }
    else {
        cout << "Its a Palindrome!" << endl; 
    }    
}

