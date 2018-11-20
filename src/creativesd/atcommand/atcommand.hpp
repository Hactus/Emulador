// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _CSDATCMDCMDS_H_
#define _CSDATCMDCMDS_H_

// Atcommand
int atcommand_woemanager(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_vipcontrol(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_vipcontrolreload(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_viptimer(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_cashcontrol(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_cashinfo(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_presence(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bepresence(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_goevent(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_evmanager(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _CSDATCMDCMDS_H_ */
