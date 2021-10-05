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
    size_t len = strlen(input);
    int k = 0; 
    int l = 0; 

    for (int i = 0; i < len; i++) {
        if(isalpha(input[i])) { //checks if alphanumeric 
            input2[k] = toupper(input[i]); //inserts lowercases chars from input into input2
            k++; //keeps track of how many chars are inserted into input 2; it also helps each char to save into different indexes 
                //after one iteration, c increases by 1, and the next valid char in input1 gets inserted into input2 
        }
    }

    for (int i = k; i --> 0; ){ //for loop backwards and insert reversed array into another array
      input3[l] = input2[i]; 
      l++; 
    }

  //str compare the filtered input and reversed input
  if (memcmp(input2, input3, l) == 0){ //compare memory
    cout << "Palindrome." << endl;
  } else {
    cout << "Not a Palindrome." << endl;
  } 
 return 0;
}
