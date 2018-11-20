// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _STUFFSYS_H_
#define _STUFFSYS_H_

// Scripts Command
int buildin_getstuffitem(struct script_state* st);

// Atcommand
int atcommand_stuffitem(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _STUFFSYS_H_ */
