#ifndef _CREATIVESDMAP_HPP_
#define _CREATIVESDMAP_HPP_

#include "../config.hpp"	 // For Configs
#include "../../map/map.hpp" // EVENT_NAME_LENGTH

#ifdef QUEUE_SYSTEM_ENABLE
// Queue System
#ifndef QUEUE_COLOR
	#define	QUEUE_COLOR	0x89cff0
#endif

struct queue_players {
	int position;
	struct map_session_data *sd;
	struct queue_players *next;
};

struct queue_data {
	unsigned int queue_id;
	unsigned char count;
	unsigned int min_level, max_level;
	struct queue_players *first, *last;
	char name[QUEUE_NAME_LENGTH];
	char join_event[EVENT_NAME_LENGTH];
};

struct queue_data *queue_search(int queue_id);
int queue_create(int queue_id, const char *name, int min_level, int max_level, const char *event);
int queue_delete(int queue_id);
int queue_join(struct map_session_data *sd, int queue_id, int flag);
int queue_leave(struct map_session_data *sd, int flag);
int queue_clean(struct queue_data *queue, int delay, int flag);
int queue_atcommand_list(struct map_session_data *sd);
void queue_join_notify(int queue_id, struct map_session_data *sd);
void queue_leave_notify(int queue_id, struct map_session_data *sd, int flag);
const char* queue_delay(int delay);

#define queue_check_town(m) (map_getmapflag(m,MF_TOWN))

void do_init_queue(void);
void do_final_queue(void);

// Script Command
int buildin_queue_create(struct script_state* st);
int buildin_queue_delete(struct script_state* st);
int buildin_queue_check(struct script_state* st);
int buildin_queue_size(struct script_state* st);
int buildin_queue_join(struct script_state* st);
int buildin_queue_leave(struct script_state* st);
int buildin_queue_clean(struct script_state* st);
int buildin_queue_leave_notify(struct script_state* st);
int buildin_queue_get_players(struct script_state* st);
int buildin_queue_get_data(struct script_state* st);
int buildin_queue_set_data(struct script_state* st);
int buildin_queue_char_info(struct script_state* st);
int buildin_queue_set_delay(struct script_state* st);

// Atcommand
int atcommand_queue(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_queuelist(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_queuekick(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_queuesetdelay(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_queuedelay(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_queuenomove(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef BG_WARFARE_ENABLE
// Battleground Warfare
extern struct guild bg_guild[];

// [CreativeSD]: Version
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
	unsigned int crystal_kills, crystal_damage;
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
bool bg_score_damage(struct block_list *src, struct block_list *dst, int damage);
bool bg_score_kills(struct block_list *src, struct block_list *dst);
bool bg_score_heal(struct block_list *bl, int hp, int sp);
bool bg_score_item_heal(struct map_session_data *sd, int amount, int hp, int sp);
bool bg_score_del_item(struct map_session_data *sd, int item_id, int amount);
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
#endif

#ifdef RANKED_SYSTEM_ENABLE
// Ranked System
extern struct Ranked_Config {
	int show_mode;
	int show_timer;
	int duration_timer;
	int mode;
	int show_maps;
	int show_aura;
	int disable_aura;
	int bg_crossover;
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
#endif

#ifdef RESTOCK_SYSTEM_ENABLE
// Restock System
// Map Functions
int pc_restock_item(struct map_session_data *sd, int itemid);
void pc_restock_getstorage(struct map_session_data *sd, int itemid, int amount);

// Script Command
int buildin_addrestock(struct script_state* st);
int buildin_delrestock(struct script_state* st);

// Atcommand
int atcommand_restock(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef STUFF_ITEMS_ENABLE
// Stuff Items
// Scripts Command
int buildin_getstuffitem(struct script_state* st);

// Atcommand
int atcommand_stuffitem(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef SHOP_EXTENDED_ENABLE
// Shop Extended
// Map Functions
int npc_cashshop_buylist_sub(struct map_session_data* sd, unsigned short itemreq, const char *reg, int discount, int n, unsigned short* item_list, int point, struct npc_data* nd);
#endif

#ifdef COSTUME_SYSTEM_ENABLE
// Costume System
// Scripts Command
int buildin_costume(struct script_state* st);
int buildin_getcostumeitem(struct script_state* st);

// Atcommand
int atcommand_costumeitem(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef OSHOPS_ENABLE
// Organized Shops
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
#endif

#ifdef BIND_CLOCK_ENABLE
// Bind Clock
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
#endif

#ifdef AREALOOT_ENABLE
// Arealoot
// Map Functions
int pc_arealoot_item(struct map_session_data *sd, struct flooritem_data *fitem);

// Atcommand
int atcommand_arealoot(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef PET_EXTENDED_ENABLE
// Pet Extended
enum s_pet_evolution_result {
	POV_UNKNOWN = 0x0,
	POV_NOT_EXIST = 0x1,
	POV_NOT_PET_EGG = 0x2,
	POV_RECIPE = 0x3,
	POV_REQUERIMENT = 0x4,
	POV_INTIMATE = 0x5,
	POV_SUCCESS = 0x6
};

struct s_pet_evolution_data {
	short mob_class;
	unsigned char count;
	unsigned short nameid[PET_EVO_MAX_ITEMS], amount[PET_EVO_MAX_ITEMS];
};

// Map Auto Feed
bool pet_set_autofeed(struct map_session_data *sd, bool flag); 
void pet_autofeed(struct map_session_data *sd);

// Map Pet Evolution
bool pet_evolution_check_req(struct map_session_data *sd);
int pet_egg_search(struct map_session_data* sd, int pet_id);
void pet_evolution_egg_clean(struct map_session_data *sd);
int pet_evolution(struct map_session_data *sd, int16 pet_id);

void do_init_pet_extended();
void do_final_pet_extended();

// Clif
void clif_parse_pet_evolution(int fd, struct map_session_data *sd);
void clif_pet_evolution_result(int fd, enum s_pet_evolution_result result);

// Script Commands
int buildin_pet_evolution(struct script_state* st);
int buildin_pet_set_autofeed(struct script_state* st);
int buildin_pet_get_autofeed(struct script_state* st);

// Atcommand
int atcommand_petevolution(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_petevolutioninfo(const int fd, struct map_session_data* sd, const char* command, const char* message);
int atcommand_petautofeed(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef PACK_GUILD_ENABLE
// Pack Guild
enum packguild_flag {
	PACKGUILD_LEFT,
	PACKGUILD_EXPULSION,
	PACKGUILD_SCRIPT
};

// PC Functions
int pc_remove_items_guild(struct map_session_data *sd, enum packguild_flag flag);

// Scripts Command
int buildin_getguilditem(struct script_state* st);
int buildin_delguilditem(struct script_state* st);
int buildin_countguilditem(struct script_state* st);
int buildin_removeguilditems(struct script_state* st);

// Atcommand
int atcommand_guilditem(const int fd, struct map_session_data* sd, const char* command, const char* message);
#endif

#ifdef CREATIVE_SCRIPTCMD_ENABLE
// Scripts Command
int buildin_getmapxyunit(struct script_state* st);
int buildin_alive(struct script_state* st);
int buildin_countguildmap(struct script_state* st);
int buildin_getcharisdead(struct script_state* st);
int buildin_getplayersarea(struct script_state* st);
int buildin_getplayersrange(struct script_state* st);
int buildin_setlangtype(struct script_state *st);
#endif
#ifdef CREATIVE_ATCMD_ENABLE
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
#endif
#endif /* _CREATIVESDMAP_HPP_ */
