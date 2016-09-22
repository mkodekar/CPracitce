#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void editMessagenSent(char * message, int size) {
  char newMessage[] = "New message";

  if (size > sizeof(newMessage)) {
    for(int i = 0; i < sizeof(newMessage); i++) {
      message[i] = newMessage[i];
    }
  } else {
    printf("New message is too big\n\n");
  }
}

void main() {

  char randomMessage[] = "this is a message";

  printf("Old Message : %s\n\n", randomMessage);

  editMessagenSent(randomMessage, sizeof(randomMessage));

  printf("New Message : %s\n\n", randomMessage);
}
