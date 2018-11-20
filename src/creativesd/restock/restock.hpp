// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _RESTOCK_H_
#define _RESTOCK_H_

// Map Functions
int pc_restock_item(struct map_session_data *sd, int itemid);
void pc_restock_getstorage(struct map_session_data *sd, int itemid, int amount);

// Script Command
int buildin_addrestock(struct script_state* st);
int buildin_delrestock(struct script_state* st);

// Atcommand
int atcommand_restock(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _RESTOCK_H_ */
