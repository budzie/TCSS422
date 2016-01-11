typedef struct pcb {
	int p_id; /* process ID#*/
	int priority;  /* priority # */
	address pc;  /* index to a memory location for producer/consumers to utilize.  */
	enum state_type state;  /* running, ready, waiting, halted */
	struct pcb *next;  /*  ptr to next pcb*/
	int count; /* Random amount of cpu cycles this pcb will run for */
	int curr_count; /* The pcb's current number of cpu cycles it has run for */
	
} pcb, *pcb_ptr;

typedef pcb *pcb_ptr;
