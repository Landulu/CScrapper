//
// Created by landulu on 17/10/2019.
//

#include "confParser.h"



void initScrapperParameters(Parameters* parameters) {

    parameters = malloc(sizeof(Parameters));

    getParametersFromConfigFile(parameters, NULL);


}

void getParametersFromConfigFile(Parameters *pParameters, char *configFileName) {

    FILE* fp = fopen(configFileName, "r");

    if (fp == NULL) {
        return;
    }

    ActionList* actionList;

    parseActions(actionList, fp);
    parseTasks(pParameters, *actionList, fp);


    fclose(fp);
}
