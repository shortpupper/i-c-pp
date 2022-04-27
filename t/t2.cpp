#include <iostream>
#include <string>
using namespace std;

// class for more string stuff
class liePy {
 public:
  // find the number of an arry like python
  string arry(string ary[], int f1, int f2) {
   string sry[f2];
   for (int i = 0; i < (sizeof(ary) / sizeof(int)); i++) {
    *ary = ary[i];
   };
  };
  // then have a function to replace
  // string replaces(string strs, string replace1, string replace1With) {
  // return strs.find(replace1);
  // };
  /* 2 - 1 = 1*/
};


int main() {
  liePy ly;
  string text = "food cool 2 2, 1";
  string replaceText[2] = {"1", "0"};
  cout << text << endl;
  int found = text.find("1");
  cout << replaceText[1];
  cout << ly.arry(&replaceText);
  // text = text.replace();
  return 0;
}

  // // call lieCy
  // liePy sts;
  // string text = "food cool 2 2, 1";
  // cout << sts.replaces(text, "", "");
