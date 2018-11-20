// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos
//#define _CRT_SECURE_NO_WARNINGS
//#define _CRT_NONSTDC_NO_DEPRECATE

#ifndef _BGWARFARE_HPP_
#define _BGWARFARE_HPP_

extern struct guild bg_guild[];

// [CreativeSD]: Names, Version and Rewards
static const char bg_version[7] = "2.0.02";

#ifndef BG_COLOR
#define	BG_COLOR	0xFFA500
#endif

enum bg_reward_type {
	BGRT_WIN,
	BGRT_LOSS,
	BGRT_WO
};

enum bg_reward_items {
	BGRI_ITEM,
	BGRI_ZENY,
	BGRI_CASH,
	BGRI_KAFRA,
	BGRI_BEXP,
	BGRI_JEXP,
	BGRI_BLVL,
	BGRI_JLVL,
	BGRI_BONUS_STATUS,
	BGRI_CHAR_VAR,
	BGRI_ACC_VAR
};

// [CreativeSD]: Battleground Warfare
struct batleground_statistic {
	// Skills
	unsigned int skills_support_success, skills_support_fail;
	// Healing
	unsigned int heal_hp, heal_sp;
	unsigned int item_heal_hp, item_heal_sp;
	// Items
	unsigned int item_heal, ammos, poison_bottle, fire_bottle, acid_bottle;
	unsigned int oridecon, elunium, steel, emveretarcon, wooden_block, stone, yellow_gemstone, red_gemstone, blue_gemstone;
	// Vs Players
	unsigned int player_deaths, player_kills;
	unsigned int player_damage_taken, player_damage_given;
	// Vs Rune Stones
	unsigned int runestone_kills, runestone_damage, runestone_repair;
	// Vs Emperium
	unsigned int emperium_kills, emperium_damage;
	// Vs Barricades
	unsigned int barrier_kills, barrier_damage, barrier_repair;
	// Vs Objectives and Supplies
	unsigned int objective_kills, objective_damage;
	// Vs Flags
	unsigned int flag_kills, flag_damage, flag_capture, flag_recapture;
	// Vs Crystals
	unsigned int cristal_kills, cristal_damage;
	// Vs Guardians
	unsigned int guardian_kills, guardian_deaths;
	unsigned int guardian_damage_taken, guardian_damage_given;
};

struct battleground_rewards_objects {
	int object_type, value, flag_type, rate;
	char object[32], desc[32];
};

struct battleground_rewards {
	int arena_id;
	unsigned char count;
	struct battleground_rewards_objects items[MAX_BG_REWARDS];
};

/*==========================================
* CreativeSD: Battleground Warfare
*------------------------------------------*/
// Clif
void clif_sendbgmobemblem_single(int fd, struct mob_data *md);
void clif_bg_basicinfo(struct map_session_data *sd);
void clif_bg_belonginfo(struct map_session_data *sd);
void clif_bg_memberlist(struct map_session_data *sd);

// Battleground
struct guild* bg_get_guild(int idx);
int bg_refresh_patent(int bg_id);
void bg_clean_skill(struct battleground_data *bg);
void bg_block_skill(struct map_session_data *sd, int time);
void bg_block_skill_change(struct map_session_data *sd);
void bg_block_skill_end(struct map_session_data *sd);
int bg_report_afk(int tid, unsigned int tick, int id, intptr_t data);
int bg_kick_player(struct map_session_data* sd, struct map_session_data *pl_sd, const char* mes);
int bg_change_master(int bg_id, int char_id, struct map_session_data *sd);
int bg_respawn_timer(int tid, unsigned int tick, int id, intptr_t data);
void bg_respawn_timer_delete(struct map_session_data *sd);
int bg_digit_timer(int tid, unsigned int tick, int id, intptr_t data);
void bg_create_guild();
void bg_guild_requestinfo(struct map_session_data *sd);
void bg_score_damage(struct block_list *src, struct block_list *dst, int damage);
void bg_score_kills(struct block_list *src, struct block_list *dst);
void bg_score_heal(struct block_list *bl, int hp, int sp);
void bg_score_item_heal(struct map_session_data *sd, int amount, int hp, int sp);
void bg_score_del_item(struct map_session_data *sd, int item_id, int amount);
struct battleground_rewards* bg_create_reward(int arena_id);
struct battleground_rewards* bg_search_reward(int arena_id);
void bg_reload_rewards();
int bg_load_rewards_from_sql();
int bg_reward(struct map_session_data *sd, int arena_id, enum bg_reward_type flag);
int bg_flag_alarm_npc(int tid, unsigned int tick, int id, intptr_t data);
int bg_flag_alarm_player(int tid, unsigned int tick, int id, intptr_t data);
int bg_set_npc(int bg_id, struct npc_data *nd, int npc_id, short x, short y, const char *ev, const char *rev);
int bg_flag_drop(struct map_session_data *sd);
int bg_flag_capture_area(struct map_session_data* sd, int m, int x, int y);
int bg_flag_catch_area(struct map_session_data* sd, int m, int x, int y);
int bg_flag_respawn(int m, int bg1_id, int bg2_id);
int bg_guild_refresh_all(struct battleground_data *bg);
void do_bg_reward_reload(void);
void do_init_bgwarfare(void);
void do_final_bgwarfare(void);

// Script Command
int buildin_bg_create_team(struct script_state* st);
int buildin_bg_join_team(struct script_state* st);
int buildin_bg_kick_team(struct script_state* st);
int buildin_bg_team_search(struct script_state* st);
int buildin_bg_team_size(struct script_state* st);
int buildin_bg_get_team(struct script_state* st);
int buildin_bg_set_respawn(struct script_state* st);
int buildin_bg_attach_respawn(struct script_state* st);
int buildin_bg_attach_respawn_all(struct script_state* st);
int buildin_bg_viewpoint(struct script_state* st);
int buildin_bg_areapercentheal(struct script_state* st);
int buildin_bg_team_getxy(struct script_state* st);
int buildin_bg_respawn_getxy(struct script_state* st);
int buildin_bg_refresh_patent(struct script_state* st);
int buildin_bg_message(struct script_state* st);
int buildin_bg_digit_timer(struct script_state* st);
int buildin_bg_reward(struct script_state* st);
int buildin_bg_get_score(struct script_state* st);
int buildin_bg_set_score(struct script_state* st);
int buildin_bg_set_npc(struct script_state* st);
int buildin_bg_npc_getid(struct script_state* st);
int buildin_bg_flag_click(struct script_state* st);
int buildin_bg_flag_respawn(struct script_state* st);
int buildin_bg_console(struct script_state* st);

// Atcommand
int atcommand_reloadbg(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgregister(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgjoin(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgunregister(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgleave(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgwaiting(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgreportafk(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgorder(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgchangeleader(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_bgreloadrewards(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif // _BGWARFARE_HPP_
