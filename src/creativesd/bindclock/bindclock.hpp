// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _BINDCLOCK_H_
#define _BINDCLOCK_H_

// Struct
struct npc_bind_clock_list {
	char clock[5];
	char event[EVENT_NAME_LENGTH];
};

extern struct npc_bind_clock_list npc_bind_clock[MAX_BIND_CLOCK];

// Map Functions
int npc_event_bind_clock(const char* timestr);
bool npc_create_bind_clock(int hour, int minute, const char* ev);
bool npc_remove_bind_clock(int hour, int minute, const char* ev);
bool npc_check_bind_clock(int hour, int minute, const char* ev);
void npc_clear_bind_clock(void);

// Scripts Command
int buildin_bindclock(struct script_state* st);
int buildin_unbindclock(struct script_state* st);
int buildin_checkbindclock(struct script_state* st);
#endif /* _BINDCLOCK_H_ */
