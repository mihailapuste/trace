#include "Trace.h"
#include "TraceBuffer.h"
#include <iostream>
#include <fstream>


using namespace std;

Trace::Trace(){
    Filename = NULL; 
    bufpos = -1; //buffer position
}

void Trace::trace_start(char* filename){
  Filename = filename; //stores filename in 0th position of buffer
  // open file to make sure it doesn't crash
};


void Trace::trace_event_start(char* name, char* categories, char* arguments){
    bufpos ++; //increment buffer position by 1
    TraceBuffer[bufpos].name = name;
    TraceBuffer[bufpos].cat = categories;
    TraceBuffer[bufpos].args = arguments;
}

// void Trace::trace_event_end(char* arguments){}

// void Trace::trace_instant_global(char* name){}

// void Trace::trace_object_new(char* name, void* obj_pointer){}

// void Trace::trace_object_gone(char* name, void* obj_pointer){}

// void Trace::trace_counter(char* name, char* key, char* value){}

// void Trace::trace_flush(){}

void Trace::trace_end(){
      ofstream traceFile;
      traceFile.open(Filename);
      traceFile << TraceBuffer[bufpos].name << "\n" 
                << TraceBuffer[bufpos].cat << "\n"
                << TraceBuffer[bufpos].args << "\n";
      traceFile.close();
}