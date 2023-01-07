#include<stdio.h>
#include<string.h>

// asks the user to input two strings of max length of 20 each and any combination of the letters a, b, c, d. Returns whether the two strings are anagrams.

int main() {
 int counter1[] = {0,0,0,0};
 int counter2[] = {0,0,0,0};
 char s1[20];
 printf("Enter the first string: \n");
 scanf("%s", s1);
 char s2[20];
 printf("Enter the second string: \n");
 scanf("%s", s2);

 for (int i = 0; i < strlen(s1); i++) {
   if(s1[i] == 'a'){
    counter1[0]++;
  } else if (s1[i] == 'b') {
    counter1[1]++;
  } else if (s1[i] == 'c') {
    counter1[2]++;
  } else if (s1[i] == 'd') {
    counter1[3]++;
  } else {
    continue;
  }
 }

 for (int j = 0; j < strlen(s2); j++) {
   if(s2[j] == 'a'){
    counter2[0]++;
  } else if (s2[j] == 'b') {
    counter2[1]++;
  } else if (s2[j] == 'c') {
    counter2[2]++;
  } else if (s2[j] == 'd') {
    counter2[3]++;
  } else {
    continue;
  }
 }

 int flag = 0;

 for (int n =0; n < 4; n++) {
   if (counter1[n] != counter2[n]) {
     flag = 1;
     break;
   }
 }

 if (flag == 0) {
   printf("Anagram!");
 } else {
   printf("Not Anagram!");
 }
}
