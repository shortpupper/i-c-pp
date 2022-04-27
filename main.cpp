// add the stdio library
#include <stdio.h>
// write to the screen
#include <iostream>
#include <fstream>
// Include the string library
#include <string>
// include the library for replace
#include <random>
#include <tuple>
#include <stdlib.h>

using namespace std;


// make a class called python
class Python {
 public:
  // function to make a input like python
  string inputf(string name) {
   string inp;
   cout << name;
   cin >> inp;
   return inp;
  };
};

// class for user commands
class UserCommand {
 public:
  // helpMessage for the user
  string helpMessage = "for commands there is -file when used it adds you to file editing\n - exit does what is says it exits the while loop";
};


// make the main function
int main() {
 // create a python object
 Python python;
 // the class for user commands
 UserCommand cmds;
 cout << "Hello you ran the file!" << endl;
 // make a input to ask the user if they want to continue
 string inps = python.inputf("Do you want to continue? (y/n): ");
 if (inps == "y") {
  // string to call the input
  string inp;
  // then print a help command
  cout << cmds.helpMessage << endl;
  while (true) {
   // take the user's input
   inp = python.inputf("/home/cmds/cmds.exe> ");
   // test if the user inputs exit
   if (inp == "-exit" or inp == "exit") {
    break;
   } /* then check if the user inputs read*/ else if (inp == "-read") {
    // then have another input for the location
    inp = python.inputf("what is the file location?: ");
    // then try to open the file and if that fails then print that the file donesn't exists
    try {
     // make a text var
     string theText;
     ifstream cat(inp);
     while (getline (cat, theText)) {
      // Output the text from the file
      cout << theText;
     };
     // Close the file
     cat.close();
     if (theText == "") {
      throw 404; // Throw an exception when a problem arise
     } else {cout << "\n";};
     } catch (int fail) {
     cout << "[ERROR " + to_string(fail) + "] That file is not readable, check if it exsists.\n";
    };
   } else if (inp == "-write") {
    // then have another input for the location
    inp = python.inputf("what is the file location?: ");
    // then try to open the file and if that fails then print that the file donesn't exists
    // make a text var
    string theText;
    ofstream cat(inp);
    // tell the user that they are now writeing to the file and if they want to exit do -exit
    cout << "Now you are writing to the file, if you want to exit do '-exit'" << endl;
    // then get user input in a while loop until thye type exit
    while (true) {
     inp = python.inputf("");
     inp.replace("\n", " ");
     cout << "\n\n" + inp + "\n\n";
     // check if the user inputs exit
     if (inp == "-exit") {
      inp = python.inputf("are you writing this to the file? (y/n): ");
      // if y then add it to thetext variable
      if (inp == "y") {
       theText += inp + "\n";
      } else if (inp == "n") {
       break;
      } else {
       // tell the user that input is invalid
       cout << "Invalid input. Now you are writing to the file.";
      };
     } else if (inp == "-show") {
      // then output theTtxt 
      cout << theText << endl;
     } else {
      theText = (theText + inp + "\n");
     };
    };
    // then write the text to the file
    cat << theText;
    // Close the file
    cat.close();
   } else {
    cout << "\ncommand not found\n";
   };
  };
 } else {
  // say goodbye to the user
  cout << "Goodbye have a nice day." << endl;
 };
 return 0;
};
//ssh pi@192.168.2.104
//C:/compiler/cplues/SomeLocalDir/

//make -j4