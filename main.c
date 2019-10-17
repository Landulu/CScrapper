#include <curl/curl.h>
#include "commons.h"
#include "confParser.h"

int main() {

    Parameters* parameters;

    initScrapperParameters(parameters);

    scrap(*parameters);

    freeParams(parameters);


    return 0;
}