// � Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _COSTUMESYS_H_
#define _COSTUMESYS_H_

// Scripts Command
int buildin_costume(struct script_state* st);
int buildin_getcostumeitem(struct script_state* st);

// Atcommand
int atcommand_costumeitem(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _COSTUMESYS_H_ */
