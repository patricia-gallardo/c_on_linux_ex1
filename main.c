#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

struct Token {
  char *token;
  size_t token_length; // Number of characters
};

int count_tokens(const char *input) {
  (void) input;
  return 0;
}

int split_into_strings(const char *input, char ***output) {
  (void) input;
  (void) output;
  return 0;
}

int split_into_tokens(const char *input, struct Token **output) {
  (void) input;
  (void) output;
  return 0;
}

void testCountTokens() {
  char input[17];
  strcpy(input, "This is a string");
  assert(4 == count_tokens(input));
}

void testMakeTokenStrings() {
  char input[17];
  strcpy(input, "This is a string");

  char **tokens = 0;
  assert(4 == split_into_strings(input, &tokens));
  assert(0 == strcmp(tokens[0], "This"));
  assert(0 == strcmp(tokens[1], "is"));
  assert(0 == strcmp(tokens[2], "a"));
  assert(0 == strcmp(tokens[3], "string"));
}

void testMakeTokenStructs() {
  char input[17];
  strcpy(input, "This is a string");

  struct Token *tokens = 0;
  assert(4 == split_into_tokens(input, &tokens));
  assert(tokens[0].token_length == 4);
  assert(0 == strncmp(tokens[0].token, "This", 4));
  assert(tokens[1].token_length == 2);
  assert(0 == strncmp(tokens[1].token, "is", 2));
  assert(tokens[2].token_length == 1);
  assert(0 == strncmp(tokens[2].token, "a", 1));
  assert(tokens[3].token_length == 6);
  assert(0 == strncmp(tokens[3].token, "string", 6));
}

int main() {
  testCountTokens();
  testMakeTokenStrings();
  testMakeTokenStructs();
  return EXIT_SUCCESS;
}
