#include <iostream>

using namespace std;

void reverseword(char* beg, char* end){
  char tmp;

  while(beg < end){
    tmp = *beg;
    *beg++ = *end;
    *end-- = tmp;
  }
}

void revwholestring(char* str){

  char* end = str;
  char* keep = str;
  
  if (str){
    while(*end)
      end++;
    end--;
  }
  
  reverseword(str, end);

  while (*keep){
    str = keep;
    end = keep;
    while (*end && *end != ' ' ){
      end++;
      keep = end;
    }
    end--;
    reverseword(str, end);
    keep++;
  }
  
}

int main (int argc, char* argv[]){

  char a[] = "reverse this entire string";
  revwholestring(a);

  cout << a << endl << endl;

  return 0;
}
