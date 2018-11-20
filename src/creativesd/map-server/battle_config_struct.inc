// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

#ifdef QUEUE_SYSTEM_ENABLE
	// Queue System
	int queue_max_players;
	int queue_join_delay;
	int queue_only_towns;
	int queue_notify;
#endif
#ifdef BG_WARFARE_ENABLE
	// Battleground Warfare
	int bg_mode;
	int bg_timer_attack;
	int bg_group_filter;
	int bg_achievement;
	int bg_player_announce;
	int bg_afk_timer;
	int bg_afk_team_report;
	int bg_afk_warp_save_point;
	int bg_ranking_rows;
	int bg_enable_skills;
	int bg_name_position;
	int bg_enable_cross_swords;
	int bg_reward_rate_enable;
	int bg_reward_rate;
	int bg_reward_rate_min;
	int bg_reward_rate_max;
	int bg_reward_max_given;
	int bg_capture_flag_path;
#endif
#ifdef STUFF_ITEMS_ENABLE
	// Stuff Items
	int stuff_bg_reserved_id;
	int stuff_gvg_reserved_id;
	int stuff_pvp_reserved_id;
	int stuff_enable_trade;
	int stuff_enable_sell;
	int stuff_enable_storage;
	int stuff_enable_guild_storage;
	int stuff_enable_drop;
	int stuff_enable_cart;
#endif
#ifdef OSHOPS_ENABLE
	// Organized Shops
	int organized_shops_announce;
	int organized_shops_ballon;
#endif
#ifdef RESTOCK_SYSTEM_ENABLE
	// Restock System
	int restock_zeny_cost;
	int restock_castle;
	int restock_pvp;
	int restock_gvg;
#endif
#ifdef AREALOOT_ENABLE
	// Arealoot
	int arealoot_range;
#endif
#ifdef EXTENDED_VENDING_ENABLE
	// [CreativeSD/Lilith] Extendend Vending
	int extended_vending;
	int show_broadcas_info;
	int show_item_vending;
	int ex_vending_info;
	int ex_vending_report;
	int item_zeny;
	int item_cash;
#endif
#ifdef CELL_PVP_ENABLE
	// [brAthena] Cell PvP
	int cell_pvp_allow_chat;
	int cell_pvp_join_chat;
	int cell_pvp_allow_vending;
	int cell_pvp_join_vending;
	int cell_pvp_prevent_blown;
	int cell_pvp_prevent_movepos;
	int cell_pvp_delay_leave;
	int cell_pvp_canrun_npc;
	int cell_pvp_can_trade;
	int cell_pvp_can_teleport;
	int cell_pvp_can_open_storage;
	int cell_pvp_party_invite;
	int cell_pvp_guild_invite;
	int cell_pvp_drop_item;
	int cell_pvp_ignore_noskill;
	int cell_pvp_homunculos_vaporize;
	int cell_pvp_pet_egg_return;
	int cell_pvp_party_immunity;
	int cell_pvp_guild_immunity;
	int cell_pvp_disable_on_woe;
	int cell_pvp_party_lock;
	int cell_pvp_guild_lock;
	int cell_pvp_block_level;
#endif
#ifdef REFINE_UI_ENABLE
	// Refine UI
	int feature_refineui;
#endif
#ifdef PET_EXTENDED_ENABLE
	// Pet Extended
	int feature_petevolution;
	int feature_pet_auto_feed;
	int feature_pet_auto_feed_force;
#endif
#ifdef COSTUME_SYSTEM_ENABLE
	// Costume System
	int costumeitem_reserved_id;
	int costumeitem_maps;
	int costumeitem_permission;
	int costumeitem_ignore_job;
#endif
#ifdef PACK_GUILD_ENABLE
	// Pack Guild
	int packguild_reserved_id;
	int packguild_maps;
	int packguild_permission;
	int packguild_storage;
	int packguild_events;
	int packguild_bound;
	int packguild_remove;
#endif
	// Misc Configs
	int unequip_prohibited_items;
