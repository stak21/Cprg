// Concat two strings 9.1

//POA: given two strings, iterate through string1 for string1 length 
//using result, copy each char in i;
//once you copy, iterate through string2 and this time result will be i + string1 length
//return result

// stringLength 9.2

//POA: given a string, iterate through the string incrementing count each iteration.
//The number of iterations will be until str[i] is null or \o
//once you hit that step out of the loop and return count

//revised concat 9.3

//POA: given two strings and result, you will use varible length method to get the end of the array length
//you will also use the %s character to printf the string

//equalStrings 9.4

//POA: given 2 strings, iterate through each string and do validations on equal length, equal charactes
//set isEqual to true;
//see if you can do a instant validation with checking the length of each array
// use a while loop (isEqual should be true) to iterate through the strings and validate if the characters are equal and if not then
//isEqual is false
//return isEqual

//readLine 9.6

//POA: given a string array to store characters in, use getChar to request character to store in the string array

//wordCount 9.7

//POA: given a string array, iterate through the array until you hit an alphebetic letter,
// increment count until you hit a non alphebetic character 
//repeat until you hit \0

//wordCountUsingReadLine 9.8

//POA: allow the user to input as many lines as they want and to tell the program that they are done they can press enter again


#include <stdio.h>
#include <stdbool.h>
bool isAlphabetic(char c) {
  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <='z')) {
    return true;
  } else {
    return false;
  }
}

int wordCount(char str[]) {
  bool isAlphabetic(char c);
  bool newWord = true;
  int i = 0;
  int count = 0;
while (str[i] != '\0') {
  if (isAlphabetic(str[i])) {
    if (newWord) {
      count += 1;
      newWord = false;
    }
  } else {
    newWord = true;
  }
  i += 1;
}
return count;
}
void readLine(char buffer[]) {
  int i = 0;
  char character;
  do {
    character = getchar();
    buffer[i] = character;
    i += 1;
  }
   while (character != '\n');
  buffer[i - 1] = '\0';
}
bool isEqual(char str1[], char str2[]) {
  bool isEqual = true;
  int i = 0;

  while (str1[i] == str2[i] &&
          str1[i] != '\0' && str2[i] != '\0') 
          ++i;
    // if (str1[i] != str2[i]) {
    //   isEqual = false;
    // }
    // if (str1[i] == '\0') {
    //   if (str2[i] != '\0') {
    //     return isEqual = false;
    //   }
  if (str1[i] == '\0' && str2[i] == '\0') {
    isEqual = true;
  } else {
    isEqual = false;
  }

  return isEqual;
}


  // void concat(char result[], char str1[], char str2[]) {
  //   int i, j;
  //   i = 0;
  //   j = 0;
  //   while (str1[i] != '\0') {
  //     result[i] = str1[i];
  //     i += 1;
  //   }
    
  //   while (str2[j] != '\0') {
  //     result[j + i] = str2[j];
  //     j += 1;
  //   }
  //   result[i + j] = '\0';
  // }

// int stringLength(char str[]) {
//   int count = 0;

//   while (str[count] != '\0') {
//     count += 1;
//   }
//   return count;
// }


//   void concat(char result[], int n1, char str1[], int n2, char str2[]) {
//   int i, j;
//   for (i = 0; i < n1; i += 1) {
//     result[i] = str1[i];
//   }
//   for (j = 0; j < n2; j += 1) {
//     result[j + n1] = str2[j];
//   }
// }



int main(int argc, char const *argv[])
{
  void readLine(char buffer[]);
  int wordCount(char str[]);
  char text[81];
  int totalWords = 0;
  bool endOfText = false;

  printf ("Type in your text. \n");
  printf ("When you are done, press 'RETURN'.\n\n");

  while (!endOfText) {
    readLine(text);

    if (text[0] == '\0') {
      endOfText = true;
    } else {
      totalWords += wordCount(text);
    }
    printf ("\nThere are %i words in the above text.\n", totalWords);

    return 0;
  }
}
