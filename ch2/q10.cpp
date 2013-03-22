// question 10 chapter 2

#include <stdio.h>
#include <vector>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main (int argc, char* argv[]){

  vector<float> nums;

  float converted;


  for (int i = 1; i < argc; i++){
    cout << argv[i] << endl;
    converted = atof(argv[i]);
    nums.push_back(converted);
  }

  for (int i = 0; i < nums.size(); i++)
    cout << nums[i]*nums[i] << endl;

}
