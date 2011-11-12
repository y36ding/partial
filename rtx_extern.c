#include "rtx.h"

// global variables
pcb* current_process;
pcb* prev_process;
MsgEnvQ* free_env_queue;
pcb* pcb_list[PROCESS_COUNT];
MsgEnvQ* displayQ;


// globals
inputbuf * in_mem_p_key;	// pointer to structure that is the shared memory
outputbuf* in_mem_p_crt;	// pointer to structure that is the shared memory
int in_pid_keyboard;		// pid of keyboard child process
int in_pid_crt;				// pid of crt child process
caddr_t mmap_ptr_keyboard;
caddr_t mmap_ptr_crt;
int bufsize;
int fid, fid2, status;		//used to create the shared memory

int numOfTicks;
int displayClock;

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
char * sfilename;
char * cfilename;
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++