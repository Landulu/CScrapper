//
// Created by landulu on 17/10/2019.
//

#ifndef CSCRAPPER_CONFPARSER_H
#define CSCRAPPER_CONFPARSER_H

#include "commons.h"


void initScrapperParameters(Parameters* parameters);

void getParametersFromConfigFile(Parameters *pParameters, char *configFileName);

void parseActions(ActionList* pActionList,FILE* fp);
void parseTasks(Parameters* pParameters,ActionList actionList,FILE* fp);




#endif //CSCRAPPER_CONFPARSER_H
