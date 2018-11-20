// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _AREALOOT_H_
#define _AREALOOT_H_

// Map Functions
int pc_arealoot_item(struct map_session_data *sd, struct flooritem_data *fitem);

// Atcommand
int atcommand_arealoot(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _AREALOOT_H_ */
