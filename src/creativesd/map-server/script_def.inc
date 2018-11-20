// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifdef QUEUE_SYSTEM_ENABLE
	// Queue System
	BUILDIN_DEF(queue_create, "is???"),
	BUILDIN_DEF(queue_delete, "i"),
	BUILDIN_DEF(queue_check, "i"),
	BUILDIN_DEF(queue_size, "i"),
	BUILDIN_DEF(queue_join, "i???"),
	BUILDIN_DEF(queue_leave, "??"),
	BUILDIN_DEF(queue_clean, "i??"),
	BUILDIN_DEF(queue_leave_notify, "ii?"),
	BUILDIN_DEF(queue_get_players, "i"),
	BUILDIN_DEF(queue_get_data, "ii"),
	BUILDIN_DEF(queue_set_data, "iiv"),
	BUILDIN_DEF(queue_char_info, "i?"),
	BUILDIN_DEF(queue_set_delay, "i?"),
#endif
#ifdef BG_WARFARE_ENABLE
	// Battleground Warfare
	BUILDIN_DEF(bg_create_team, "isiiiiisss"),
	BUILDIN_DEF(bg_join_team, "i??"),
	BUILDIN_DEF(bg_kick_team, "i?"),
	BUILDIN_DEF(bg_team_search, "i"),
	BUILDIN_DEF(bg_team_size, "i"),
	BUILDIN_DEF(bg_get_team, "i"),
	BUILDIN_DEF(bg_set_respawn, "iii"),
	BUILDIN_DEF(bg_attach_respawn, "??"),
	BUILDIN_DEF(bg_attach_respawn_all, "i?"),
	BUILDIN_DEF(bg_viewpoint, "iiiiii"),
	BUILDIN_DEF(bg_team_getxy, "ii"),
	BUILDIN_DEF(bg_respawn_getxy, "ii"),
	BUILDIN_DEF(bg_areapercentheal, "isiiiiii"),
	BUILDIN_DEF(bg_refresh_patent, "i"),
	BUILDIN_DEF(bg_message, "is"),
	BUILDIN_DEF(bg_digit_timer, "i?"),
	BUILDIN_DEF(bg_reward, "ii?"),
	BUILDIN_DEF(bg_get_score, "i?"),
	BUILDIN_DEF(bg_set_score, "ii?"),
	BUILDIN_DEF(bg_set_npc, "i????"),
	BUILDIN_DEF(bg_npc_getid, ""),
	BUILDIN_DEF(bg_flag_click, ""),
	BUILDIN_DEF(bg_flag_respawn, "s??"),
	BUILDIN_DEF(bg_console, "s"),
#endif
#ifdef RANKED_SYSTEM_ENABLE
	// Ranked System
	BUILDIN_DEF(getrankinfo, "ii"),
	BUILDIN_DEF(getcharrankinfo, "i?"),
	BUILDIN_DEF(setrankpoints, "v??"),
	BUILDIN_DEF(setrank, "i??"),
#endif
#ifdef RESTOCK_SYSTEM_ENABLE
	// Restock System
	BUILDIN_DEF(addrestock,"vi"),
	BUILDIN_DEF(delrestock,"v"),
#endif
#ifdef STUFF_ITEMS_ENABLE
	// Suff Items
	BUILDIN_DEF(getstuffitem, "vii"),
#endif
#ifdef COSTUME_SYSTEM_ENABLE
	// Costume System
	BUILDIN_DEF(costume, "i"),
	BUILDIN_DEF(getcostumeitem, "vi"),
#endif
#ifdef OSHOPS_ENABLE
	// Organized Shops
	BUILDIN_DEF(oshops_getinfo, "si?"),
	BUILDIN_DEF(oshops_set, "siiiiiiiii"),
	BUILDIN_DEF(oshops_remove, "si"),
	BUILDIN_DEF(oshops_remove_all, "s"),
	BUILDIN_DEF(oshops_rellocate, "s"),
#endif
#ifdef BIND_CLOCK_ENABLE
	// Bind Clock
	BUILDIN_DEF(bindclock, "ss"),
	BUILDIN_DEF(unbindclock, "ss"),
	BUILDIN_DEF(checkbindclock, "ss"),
#endif
#ifdef PET_EXTENDED_ENABLE
	// Pet Extended
	BUILDIN_DEF(pet_evolution, "?"),
	BUILDIN_DEF(pet_set_autofeed, "i?"),
	BUILDIN_DEF(pet_get_autofeed, "?"),
#endif
#ifdef PACK_GUILD_ENABLE
	// Pack Guild
	BUILDIN_DEF(getguilditem, "vi??"),
	BUILDIN_DEF(delguilditem, "vi?"),
	BUILDIN_DEF(countguilditem, "v???"),
	BUILDIN_DEF(removeguilditems, "?"),
#endif
#ifdef CREATIVE_SCRIPTCMD_ENABLE
	// Script Commands
	BUILDIN_DEF(getmapxyunit, "irrr"),
	BUILDIN_DEF(alive, "?"),
	BUILDIN_DEF(countguildmap, "s"),
	BUILDIN_DEF(getcharisdead, "?"),
	BUILDIN_DEF(getplayersarea,"siiii"),
	BUILDIN_DEF(getplayersrange, "siii"),
	BUILDIN_DEF(setlangtype, "i?"),
#endif
