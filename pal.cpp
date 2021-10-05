//Author: Raed K 
//10/5/21 
//This program basically checks if a word or sentence is a panidrome 
#include <iostream> 
#include <cstring>
using namespace std; 

// Driver code
int main() {

    //variables 
    char input[80];
    char input2[80];
    char input3[80]; 

    cout << "Enter a word or sentence: "; 
    cin.getline(input, 80); 
    int len = strlen(input); 
    int k = 0; // counters for each array
    int l = 0; 

    for (int i = 0; i < len; i++) {
        if(isalpha(input[i])) { //checks if alphanumeric 
            input2[k] = tolower(input[i]); //inserts lowercases chars from input into input2
            k++; //keeps track of how many chars are inserted into input 2; it also helps each char to save into different indexes 
                //after one iteration, c increases by 1, and the next valid char in input1 gets inserted into input2 
        }
    }
    len = k; //redeclare the new length of char array input2 after punctuation is removed

    for (int i = len - 1; i >= 0; i--) { //for loop backwards and insert reversed array into another array
      input3[l] = input2[i]; 
      l++; 
  } 
    //Display the different stages of the program 
    cout << "Filtered Input: " << input2 << endl; 
    cout << "Reversed Input: " << input3 << endl; 

  //str compare the filtered input and reversed input
  if (strcmp(input3, input2) == 0) { 
      //if true, return as a palindrome 
      cout << "Its a Palindrome" << endl; 
  } 
  else {
    //otherwise its not a palindrome 
    cout << "Not a palindrome"; 
  }

}
