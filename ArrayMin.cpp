#include <iostream>
using namespace std;

int ArrayMin(int score[], int n)
    {
         int tmp = score[0];
          for (int i =1; i < n; i++){
               if (score [i] < tmp){
                    tmp = score [i];
               }
          }
          return tmp;
}