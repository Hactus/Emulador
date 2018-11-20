// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifdef QUEUE_SYSTEM_ENABLE
// Queue System
BUILDIN_FUNC(queue_create);
BUILDIN_FUNC(queue_delete);
BUILDIN_FUNC(queue_check);
BUILDIN_FUNC(queue_size);
BUILDIN_FUNC(queue_join);
BUILDIN_FUNC(queue_leave);
BUILDIN_FUNC(queue_clean);
BUILDIN_FUNC(queue_leave_notify);
BUILDIN_FUNC(queue_get_players);
BUILDIN_FUNC(queue_get_data);
BUILDIN_FUNC(queue_set_data);
BUILDIN_FUNC(queue_char_info);
BUILDIN_FUNC(queue_set_delay);
#endif
#ifdef BG_WARFARE_ENABLE
// Battleground Warfare
BUILDIN_FUNC(bg_create_team);
BUILDIN_FUNC(bg_join_team);
BUILDIN_FUNC(bg_kick_team);
BUILDIN_FUNC(bg_team_search);
BUILDIN_FUNC(bg_team_size);
BUILDIN_FUNC(bg_get_team);
BUILDIN_FUNC(bg_set_respawn);
BUILDIN_FUNC(bg_attach_respawn);
BUILDIN_FUNC(bg_attach_respawn_all);
BUILDIN_FUNC(bg_viewpoint);
BUILDIN_FUNC(bg_team_getxy);
BUILDIN_FUNC(bg_respawn_getxy);
BUILDIN_FUNC(bg_areapercentheal);
BUILDIN_FUNC(bg_refresh_patent);
BUILDIN_FUNC(bg_message);
BUILDIN_FUNC(bg_digit_timer);
BUILDIN_FUNC(bg_reward);
BUILDIN_FUNC(bg_get_score);
BUILDIN_FUNC(bg_set_score);
BUILDIN_FUNC(bg_set_npc);
BUILDIN_FUNC(bg_npc_getid);
BUILDIN_FUNC(bg_flag_click);
BUILDIN_FUNC(bg_flag_respawn);
BUILDIN_FUNC(bg_console);
#endif
#ifdef RANKED_SYSTEM_ENABLE
// Ranked System
//
// Get Rank info
//
// * getrankinfo(<rank_id>, <type>)
//	<type>
//		0: Rank Name
//		1: Points required
//
BUILDIN_FUNC(getrankinfo);

// Get Rank from Player
//
// * getcharrankinfo(<type>,{<account_id>})
//	<type>
//		0: Rank ID
//		1: Points (Char)
//		2: Points (Account)
//
BUILDIN_FUNC(getcharrankinfo);

//	Add points for player
//
// * setrankpoints <points>{<type>,{,<account_id>}}
//	<type>:
//		0: Upate Char Points Only
//		1: Update Account Points Only
//		2: Update Both
//
BUILDIN_FUNC(setrankpoints);

//	Set Rank for Player
//
// * setrank <rank_id>{,<type>{,<account_id>}}
//	<type>:
//		0: Upate Char Points Only
//		1: Update Account Points Only
//		2: Update Both
//
BUILDIN_FUNC(setrank);
#endif
#ifdef RESTOCK_SYSTEM_ENABLE
// Restock System
BUILDIN_FUNC(addrestock);
BUILDIN_FUNC(delrestock);
#endif
#ifdef STUFF_ITEMS_ENABLE
// Stuff Items
//
// Get Stuff Item
// * getstuffitem <item id>, <amount>, <type>;
// * getstuffitem <"item name">, <amount>, <type>;
BUILDIN_FUNC(getstuffitem);
#endif
#ifdef COSTUME_SYSTEM_ENABLE
// Costume System
//
// * costume <equip_pos>;
BUILDIN_FUNC(costume);

// * getcostumeitem <item id>, <amount>;
// * getcostumeitem <"item name">, <amount>;
BUILDIN_FUNC(getcostumeitem);
#endif
#ifdef OSHOPS_ENABLE
BUILDIN_FUNC(oshops_getinfo);
BUILDIN_FUNC(oshops_set);
BUILDIN_FUNC(oshops_remove);
BUILDIN_FUNC(oshops_remove_all);
BUILDIN_FUNC(oshops_rellocate);
#endif
#ifdef BIND_CLOCK_ENABLE
// Bind Clock
//
// * bindclock "<hour>:<minute>", "<npc_event::label>";
BUILDIN_FUNC(bindclock);
// * unbindclock "<hour>:<minute>", "<npc_event::label>";
BUILDIN_FUNC(unbindclock);
// * checkbindclock("<hour:minute>", "<npc_event::label>");
BUILDIN_FUNC(checkbindclock);
#endif
#ifdef PET_EXTENDED_ENABLE
// Pet Extended
//
// * pet_evolution{ <char_id>};
BUILDIN_FUNC(pet_evolution);

// * pet_set_autofeed <flag>{, <char_id>};
// 	- flag:
//		0 -> Disable
//  	1 -> Enable
BUILDIN_FUNC(pet_set_autofeed);

// * pet_get_autofeed{ <char_id>};
BUILDIN_FUNC(pet_get_autofeed);
#endif
#ifdef PACK_GUILD_ENABLE
// Pack Guild
//
// * getguilditem <item id>, <amount>{, <timer>};
// * getguilditem <"item name">, <amount>{, <timer>};
BUILDIN_FUNC(getguilditem);

// * delguilditem <item id>, <amount>{, <type>};
// * delguilditem <"item name">, <amount>{, <type>};
//	- type:
//		 0 -> Inventory
//		 1 -> Storage
//       2 -> Cart
BUILDIN_FUNC(delguilditem);

// * countguilditem(<item id>{, <type>{, <expire>{, <char_id>}}});
// * countguilditem(<"item name">{, <type>{, <expire>{, <char_id>}}});
//	- type:
//		0 -> Inventory
//		1 -> Storage
//		2 -> Cart
//	- expire:
//		0 -> No Time
//		1 -> With Time
//		2 -> Both
BUILDIN_FUNC(countguilditem);

// * removeguilditems(<char_id>});
// * removeguilditems(<char_id>});
BUILDIN_FUNC(removeguilditems);
#endif
#ifdef CREATIVE_SCRIPTCMD_ENABLE
// Script Commands
// * getmapxyunit <GID>, .@var$, .@x, .@y;
BUILDIN_FUNC(getmapxyunit);
// * alive {"<player_name>"};
BUILDIN_FUNC(alive);
// * countguild(<guild_id>);
BUILDIN_FUNC(countguildmap);
// * getcharisdead(<name>)
BUILDIN_FUNC(getcharisdead);
// * getplayersarea "<map>", "<x1>", "<y1>", "<x2>", "<y2>";
BUILDIN_FUNC(getplayersarea);
// * getplayersrange "<map>", "<x1>", "range";
BUILDIN_FUNC(getplayersrange);
// * setlangtype <lang_num>{, "<player>"};
BUILDIN_FUNC(setlangtype);
#endif
