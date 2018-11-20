// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifdef QUEUE_SYSTEM_ENABLE
	// Queue System
	{ "queue_max_players",                  &battle_config.queue_max_players, 127, 0, INT_MAX, },
	{ "queue_join_delay",                   &battle_config.queue_join_delay, 0, 0, INT_MAX, },
	{ "queue_notify",                       &battle_config.queue_notify, 0, 0, 3, },
	{ "queue_only_towns",                   &battle_config.queue_only_towns, 0, 0, 1, },
#endif
#ifdef BG_WARFARE_ENABLE
	// Battleground Warfare
	{ "bg_mode",                            &battle_config.bg_mode, 1, 0, 1, },
	{ "bg_timer_attack",                    &battle_config.bg_timer_attack, 1, 1, 1440, },
	{ "bg_group_filter",                    &battle_config.bg_group_filter, 1, 0, 1, },
	{ "bg_achievement",                     &battle_config.bg_achievement, 1, 0, 1, },
	{ "bg_player_announce",                 &battle_config.bg_player_announce, 1, 0, 1, },
	{ "bg_afk_timer",                       &battle_config.bg_afk_timer, 30, 30, 5000, },
	{ "bg_afk_team_report",                 &battle_config.bg_afk_team_report, 1, 0, 1, },
	{ "bg_afk_warp_save_point",             &battle_config.bg_afk_warp_save_point, 1, 0, 1, },
	{ "bg_ranking_rows",                    &battle_config.bg_ranking_rows, 1, 1, 30, },
	{ "bg_enable_skills",                   &battle_config.bg_enable_skills, 1, 0, 1, },
	{ "bg_name_position",                   &battle_config.bg_name_position, 1, 0, 1, },
	{ "bg_enable_cross_swords",             &battle_config.bg_enable_cross_swords, 0x00, 0x00, 0x03, },
	{ "bg_reward_rate_enable",              &battle_config.bg_reward_rate_enable, 1, 0, 1, },
	{ "bg_reward_rate",                     &battle_config.bg_reward_rate, 1, 1, 10000, },
	{ "bg_reward_rate_min",                 &battle_config.bg_reward_rate_min, 1, 1, 10000, },
	{ "bg_reward_rate_max",                 &battle_config.bg_reward_rate_max, 1, 1, 10000, },
	{ "bg_reward_max_given",                &battle_config.bg_reward_max_given, 0, 0, INT_MAX, },
	{ "bg_capture_flag_path",               &battle_config.bg_capture_flag_path, 1, 1, 10, }, 
#endif
#ifdef STUFF_ITEMS_ENABLE
	// Stuff Items
	{ "stuff_bg_reserved_id",               &battle_config.stuff_bg_reserved_id,          165100,  0,      INT_MAX,        },
	{ "stuff_gvg_reserved_id",              &battle_config.stuff_gvg_reserved_id,         165101,  0,      INT_MAX,        },
	{ "stuff_pvp_reserved_id",              &battle_config.stuff_pvp_reserved_id,         165102,  0,      INT_MAX,        },
	{ "stuff_enable_trade",                 &battle_config.stuff_enable_trade,             0x00,    0x00,   0x07,           },
	{ "stuff_enable_sell",                  &battle_config.stuff_enable_sell,              0x00,    0x00,   0x07,           },
    { "stuff_enable_storage",               &battle_config.stuff_enable_storage,           0x00,    0x00,   0x07,           },
	{ "stuff_enable_guild_storage",         &battle_config.stuff_enable_guild_storage,     0x00,    0x00,   0x07,           },
	{ "stuff_enable_drop",                  &battle_config.stuff_enable_drop,              0x00,    0x00,   0x07,           },
	{ "stuff_enable_cart",                  &battle_config.stuff_enable_cart,              0x00,    0x00,   0x07,           },
#endif
#ifdef OSHOPS_ENABLE
	// Organized Shops
	{ "organized_shops_announce",           &battle_config.organized_shops_announce,         1,     0,      1,              },
	{ "organized_shops_ballon",             &battle_config.organized_shops_ballon,           1,     0,      1,              },
#endif
#ifdef RESTOCK_SYSTEM_ENABLE
	// Restock System
	{ "restock_zeny_cost",                  &battle_config.restock_zeny_cost, 10000000, 0, MAX_ZENY, },
	{ "restock_castle",                     &battle_config.restock_castle, 1, 0, 1, },
	{ "restock_pvp",                        &battle_config.restock_pvp, 1, 0, 1, },
	{ "restock_gvg",                        &battle_config.restock_gvg, 1, 0, 1, },
#endif
#ifdef AREALOOT_ENABLE
	// Arealoot
	{ "arealoot_range",                     &battle_config.arealoot_range,                  1,     1,       INT_MAX,        },
#endif
#ifdef EXTENDED_VENDING_ENABLE
	// [CreativeSD/Lilith] Extendend Vending
	{ "extended_vending",					&battle_config.extended_vending,				1,		0,		1,				},
	{ "show_broadcas_info",					&battle_config.show_broadcas_info,				1,		0,		1,				},
	{ "show_item_vending",					&battle_config.show_item_vending,				1,		0,		1,				},
	{ "ex_vending_info",					&battle_config.ex_vending_info,					1,		0,		1,				},
	{ "ex_vending_report",					&battle_config.ex_vending_report,				1,		0,		1,				}, // [Easycore]
	{ "item_zeny",							&battle_config.item_zeny,						0,		0,		MAX_ITEMID,		},
	{ "item_cash",							&battle_config.item_cash,						0,		0,		MAX_ITEMID,		},
#endif
#ifdef CELL_PVP_ENABLE
	// [brAthena] Cell PvP
	{ "cell_pvp.allow_chat",				&battle_config.cell_pvp_allow_chat,				1,      0,      1,				},
	{ "cell_pvp.join_chat",					&battle_config.cell_pvp_join_chat,				1,		0,		1,				},
	{ "cell_pvp.allow_vending",				&battle_config.cell_pvp_allow_vending,			1,		0,		1,				},
	{ "cell_pvp.join_vending",				&battle_config.cell_pvp_join_vending,			1,		0,		1,				},
	{ "cell_pvp.prevent_blown",				&battle_config.cell_pvp_prevent_blown,			0,		0,		1,				},
	{ "cell_pvp.prevent_movepos",			&battle_config.cell_pvp_prevent_movepos,		0,		0,		1,				},
	{ "cell_pvp.delay_leave",				&battle_config.cell_pvp_delay_leave,			0,		0,		10000,			},
	{ "cell_pvp.canrun_npc",				&battle_config.cell_pvp_canrun_npc,				1,		0,		1,				},
	{ "cell_pvp.can_trade",					&battle_config.cell_pvp_can_trade,				1,		0,		1,				},
	{ "cell_pvp.can_teleport",				&battle_config.cell_pvp_can_teleport,			1,		0,		1,				},
	{ "cell_pvp.can_open_storage",			&battle_config.cell_pvp_can_open_storage,		1,		0,		1,				},
	{ "cell_pvp.party_invite",				&battle_config.cell_pvp_party_invite,			1,		0,		1,				},
	{ "cell_pvp.guild_invite",				&battle_config.cell_pvp_guild_invite,			1,		0,		1,				},
	{ "cell_pvp.drop_item",					&battle_config.cell_pvp_drop_item,				1,		0,		1,				},
	{ "cell_pvp.ignore_noskill",			&battle_config.cell_pvp_ignore_noskill,			0,		0,		1,				},
	{ "cell_pvp.homunculos_vaporize",		&battle_config.cell_pvp_homunculos_vaporize,	0,		0,		1,				},
	{ "cell_pvp.pet_egg_return",			&battle_config.cell_pvp_pet_egg_return,			0,		0,		1,				},
	{ "cell_pvp.party_immunity",			&battle_config.cell_pvp_party_immunity,			0,		0,		1,				},
	{ "cell_pvp.guild_immunity",			&battle_config.cell_pvp_guild_immunity,			0,		0,		1,				},
	{ "cell_pvp.disable_on_woe",			&battle_config.cell_pvp_disable_on_woe,			0,		0,		1,				},
	{ "cell_pvp.party_lock",				&battle_config.cell_pvp_party_lock,				1,		0,		1,				},
	{ "cell_pvp.guild_lock",				&battle_config.cell_pvp_guild_lock,				1,		0,		1,				},
	{ "cell_pvp.block_level",				&battle_config.cell_pvp_block_level,			0,		0,	   50,				},
#endif
#ifdef REFINE_UI_ENABLE
	// Refine UI
	{ "feature.refineui",                   &battle_config.feature_refineui,                0,      0,      3,              },
#endif
#ifdef PET_EXTENDED_ENABLE
	// Pet Evolution
	{ "feature.petevolution",               &battle_config.feature_petevolution,            1,      0,      1,              },
	{ "feature.petautofeed",                &battle_config.feature_pet_auto_feed,           1,      0,      1,              },
	{ "feature.petautofeedforce",           &battle_config.feature_pet_auto_feed_force,     1,      0,      1,              },
#endif
#ifdef COSTUME_SYSTEM_ENABLE
	// Costume System
	{ "costumeitem_reserved_id",            &battle_config.costumeitem_reserved_id,    165103,      0,      INT_MAX,        },
	{ "costumeitem_maps",                   &battle_config.costumeitem_maps,            0x001,  0x001,       0x0311,        },
	{ "costumeitem_permission",             &battle_config.costumeitem_permission,       0x00,   0x00,         0x31,        },
	{ "costumeitem_ignore_job",             &battle_config.costumeitem_ignore_job,          1,      0,            1,        },
#endif
#ifdef PACK_GUILD_ENABLE
	// Pack Guild
	{ "packguild_reserved_id",              &battle_config.packguild_reserved_id,      165104,      0,      INT_MAX,        },
	{ "packguild_maps",                     &battle_config.packguild_maps,              0x001,  0x001,       0x0311,        },
	{ "packguild_permission",               &battle_config.packguild_permission,         0x00,   0x00,         0x31,        },
	{ "packguild_storage",                  &battle_config.packguild_storage,            0x00,   0x00,         0x03,        },
	{ "packguild_events",                   &battle_config.packguild_events,             0x00,   0x00,         0x03,        },
	{ "packguild_bound",                    &battle_config.packguild_bound,                 1,      0,      1,              },
	{ "packguild_remove",                   &battle_config.packguild_remove,                1,      0,      1,              },
#endif
	// Misc Configs
	{ "unequip_prohibited_items",           &battle_config.unequip_prohibited_items,       1,      0,      1,              },
