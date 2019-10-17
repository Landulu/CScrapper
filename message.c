//
// Created by landulu on 17/10/2019.
//

#define DEBUG 1

#include "message.h"

void printDebug(char* message) {
    if (DEBUG) {
        printf("%s", message);
    }
}

void printError(char* message) {
    if (DEBUG) {
        printf("!!!!! %s", message);
    }
}

