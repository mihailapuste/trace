#include "Trace.h"
#include <iostream>

using namespace std;

int main(){
    cout << "\n" << "Hello World";
    char buffer[100] = "test.txt";
    char* filename = buffer;
    char name[5] = "hllo";
    char cat[5] = "dog";
    char args[30] = "{ 'just': 'do', 'b': 'it' }";

    char* n = name;
    char* c = cat;
    char* a = args;

    Trace trace;

    trace.trace_start(filename);
    trace.trace_event_start(n, c, a);
    trace.trace_end();

    return 0;
}