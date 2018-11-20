// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _OSHOPS_H_
#define _OSHOPS_H_

// Map Functions
int organized_shops_get_block(int m);
void organized_shops_xy(int x1, int y1, int x2, int y2, int type, int *x, int *y);
int organized_shops_rellocate(int m);

// Scripts Command
int buildin_oshops_getinfo(struct script_state* st);
int buildin_oshops_set(struct script_state* st);
int buildin_oshops_remove(struct script_state* st);
int buildin_oshops_remove_all(struct script_state* st);
int buildin_oshops_rellocate(struct script_state* st);

// Atcommand
int atcommand_oshopsreorder(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _OSHOPS_H_ */
