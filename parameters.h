//
// Created by landulu on 17/10/2019.
//

#ifndef CSCRAPPER_PARAMETERS_H
#define CSCRAPPER_PARAMETERS_H


typedef struct Options Options;
struct Options {
    int verbose;
};

typedef struct Action Action;
struct Action {
    char** acceptedFileTypes;
    char* name;
    char* url;
    Options options;
};

typedef struct ActionListElement ActionListElement;
struct ActionListElement {
    Action* data;
    ActionListElement* next;
};

typedef struct ActionList ActionList;
struct ActionList {
    ActionListElement* start;
    int length;
};

typedef struct Task Task;
struct Task {
    long int interval;
    ActionListElement* firstAction;
    int actionListSize;
};

typedef struct TaskListElement TaskListElement;
struct TaskListElement {
    Task* data;
    TaskListElement* next;
};

typedef struct TaskList TaskList;
struct TaskList {
    TaskListElement* start;
    int length;
};


typedef struct Parameters Parameters;
struct Parameters {
    TaskList taskList;
};



#endif //CSCRAPPER_PARAMETERS_H
