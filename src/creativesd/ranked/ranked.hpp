// � Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifndef _RANKED_H_
#define _RANKED_H_

#include "../../map/map.hpp" // EVENT_NAME_LENGTH

#define	RANKED_RESERVED_ID	(SHRT_MAX-3) // (o valor � MAX-3 para n�o entrar em conflitos com a BG Warfare)

#ifndef RGB2BGR
	#define RGB2BGR(c) ((c & 0x0000FF) << 16 | (c & 0x00FF00) | (c & 0xFF0000) >> 16)
#endif

#define RANK_COLOR_RED     0xff0000U
#define RANK_COLOR_GREEN   0x00ff00U

extern struct Ranked_Config {
	int show_mode;
	int show_timer;
	int duration_timer;
	int mode;
	int show_maps;
	int show_aura;
	int disable_aura;
	float kill_points_gain;
	float kill_points_drop;
	float support_points;
} ranked_config;

enum ranked_display {
	RANK_NONE,
	RANK_SHOW
};

enum ranked_update {
	RANK_CHAR,
	RANK_ACCOUNT,
	RANK_BOTH
};

struct ranked_data {
	unsigned int rank_id;
	float points;
	int auras[MAX_RANKED_AURA];

	// Fake Guild
	struct guild *g;
};

enum ranked_msg_points {
	RANK_P_NONE,
	RANK_P_KILL,
	RANK_P_SUPPORT,
	RANK_P_OTHERS
};

extern struct guild ranked_guild[];

/* [CreativeSD]: Ranked System */

// Cliff
void clif_ranked_belonginfo(struct map_session_data *sd, struct guild *g);
void clif_remove_belonginfo(struct map_session_data *sd);

// Ranked
struct ranked_data *ranked_search(int rank_id);
float ranked_get_last_points();
int ranked_getbl_rank(struct block_list *bl);
float ranked_getbl_points(struct block_list *bl, int flag);
int ranked_getbl_status(struct block_list *bl);
int ranked_getbl_disable(struct block_list *bl);
int ranked_get_rank(float points);
int ranked_get_next(float points);
int ranked_get_guild_id(struct block_list *bl);
int ranked_create(int rank_id, const char *name, float points, const char *emblem, int aura[], int a);
int ranked_change_emblem(int tid, unsigned int tick, int id, intptr_t data);
void ranked_update_rank(struct map_session_data *sd, float amount, enum ranked_update status, enum ranked_msg_points type);
void ranked_show_aura(struct block_list *bl);
void ranked_show_list(struct map_session_data *sd);
bool ranked_check_zone(int m);
bool ranked_show_map(int m);
bool ranked_show_aura(int m);
int ranked_config_read(void);
void ranked_readdb(void);
void do_reload_ranked(void);
void do_init_ranked(void);
void do_final_ranked(void);

// Script Command
int buildin_getrankinfo(struct script_state* st);
int buildin_getcharrankinfo(struct script_state* st);
int buildin_setrankpoints(struct script_state* st);
int buildin_setrank(struct script_state* st);

// Atcommand
int atcommand_reloadrankdb(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_rankinfo(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_rankinfo2(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_rankinfo3(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_rankshow(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_ranklist(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_setrank(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_setrankpoints(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif /* _RANKED_H_ */
