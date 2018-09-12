struct {
   char* name; /*he name of the event, as displayed in Trace Viewer*/
   char* cat; /*The event categories. This is a comma separated list of categories for the event. The categories can be used to hide events in the Trace Viewer UI. */
   char* ph; /* ​The event type. This is a single character which changes depending on the type of event being output. The valid values are listed in the table below​. 
​ We will discuss each phase type below.*/
   int ts;  /*The tracing clock timestamp of the event. The timestamps are provided at microsecond 
1 
granularity. */
   int pid;  /* The process ID for the process that output this event. */
   int tid;  /* The thread ID for the thread that output this event. */
   char* args;  /*Any arguments provided for the event. Some of the event types have required argument fields, otherwise, you can put any information you wish in here. The arguments are displayed in Trace Viewer when you view an event in the analysis section.*/
} TraceBuffer[10000];
