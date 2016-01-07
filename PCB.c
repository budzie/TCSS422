
 
typedef struct PCB {
	int p_id;
	int priority;
	address pc;
	enum state_type state;
	struct pcb *next;
} pcb, *pcb_ptr;
