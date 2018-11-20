// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifndef BATTLEGROUND_HPP
#define BATTLEGROUND_HPP

#include "../common/cbasetypes.hpp"
#include "../common/mmo.hpp" // struct party
#include "../creativesd/bgwarfare/bgwarfare.hpp"

#define MAX_BG_MEMBERS 30

#ifndef BG_COLOR
	#define	BG_COLOR	0xFFA500
#endif

enum bg_team_leave_type {
	BGTL_LEFT = 0x0,
	BGTL_QUIT = 0x1,
	BGTL_AFK  = 0x2,
	BGTL_KICK = 0x3
};

// [CreativeSD]: Modify for Battleground Warfare
struct battleground_member_data {
	unsigned short x, y;
	struct map_session_data *sd;
	unsigned afk : 1;
};

struct battleground_data {
	unsigned int bg_id;
	unsigned char count;
	struct battleground_member_data members[MAX_BG_MEMBERS];
	// BG Cementery
	unsigned short mapindex, x, y;
	// Logout Event
	char logout_event[EVENT_NAME_LENGTH];
	char die_event[EVENT_NAME_LENGTH];
#ifdef BG_WARFARE_ENABLE
	// Skills
	int skill_block_timer[MAX_GUILDSKILL];
	// Fake Guild
	struct guild *g;
	int army, master_id, timerdigit_count, timerdigit;
	// Respawn Timer
	unsigned short respawn_x, respawn_y;
	// Without Event
	char without_event[EVENT_NAME_LENGTH];
#endif
};

void do_init_battleground(void);
void do_final_battleground(void);

struct battleground_data* bg_team_search(int bg_id);
int bg_send_dot_remove(struct map_session_data *sd);
int bg_team_get_id(struct block_list *bl);
struct map_session_data* bg_getavailablesd(struct battleground_data *bg);

int bg_create_sub(int bg_id, unsigned short mapindex, short rx, short ry, short rsx, short rsy, int army, const char *ev, const char *dev, const char *wev);
#ifdef BG_WARFARE_ENABLE
#define bg_create(bg_id, mapindex, rx, ry, rsx, rsy, army, ev, dev, wev) bg_create_sub(bg_id, mapindex, rx, ry, rsx, rsy, army, ev, dev, wev)
#else
#define bg_create(mapindex, rx, ry, ev, dev) bg_create_sub(0,mapindex,rx,ry,0,0,0,ev,dev,"")
#endif
int bg_team_join(int bg_id, struct map_session_data *sd, int flag);
int bg_team_delete(int bg_id);
int bg_team_leave(struct map_session_data *sd, enum bg_team_leave_type flag);
int bg_team_warp(int bg_id, unsigned short mapindex, short x, short y);
int bg_member_respawn(struct map_session_data *sd);
int bg_send_message(struct map_session_data *sd, const char *mes, int len);
#endif /* BATTLEGROUND_HPP */
