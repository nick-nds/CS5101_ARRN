#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *toLower(char *s);
int main(void) {
  // List to check
  char listone[2][10] = {"Reebook", "Rahul"};
  char listtwo[2][10] = {"Nike", "Niku"};
  // Taking input from user
  char keyword[10];
  printf(" \n Enter the keyword ");
  scanf("%s", keyword);
  // Case conversion function
  // Search function for 1st list
  for (int i = 0; i < 2; i++) {
    char *source = listone[i];
    // compare strings
    char *found = strstr(toLower(source), toLower(keyword));
    // if something is common in both string print the term
    if (found != NULL) {
      printf("%s\n", source);
    }
  }
  // Search function for 2nd list
  for (int i = 0; i < 2; i++) {
    char *source = listtwo[i];
    // compare strings
    char *found = strstr(toLower(source), toLower(keyword));
    // if something is common in both string print the term
    if (found != NULL) {
      printf("%s\n", source);
    }
  }
  return 0;
}
char *toLower(char *s) {
  for (char *p = s; *p; p++)
    *p = tolower(*p);
  return s;
}
