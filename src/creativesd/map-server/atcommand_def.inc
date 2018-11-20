// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

		// Reload Config
		ACMD_DEF(reloadcsdconfig),
#ifdef QUEUE_SYSTEM_ENABLE
		// Queue System
		ACMD_DEF(queue),
		ACMD_DEF(queuelist),
		ACMD_DEF(queuekick),
		ACMD_DEF(queuesetdelay),
		ACMD_DEF(queuedelay),
		ACMD_DEF(queuenomove),
#endif
#ifdef BG_WARFARE_ENABLE
		// Battleground Warfare
		ACMD_DEF(reloadbg),
		ACMD_DEF(bgregister),
		ACMD_DEF(bgjoin),
		ACMD_DEF(bgunregister),
		ACMD_DEF(bgleave),
		ACMD_DEF(bgranking),
		ACMD_DEF(bgwaiting),
		ACMD_DEF2("bgplaying", bgwaiting),
		ACMD_DEF(bgreportafk),
		ACMD_DEF(bgorder),
		ACMD_DEF(bgchangeleader),
		ACMD_DEF(bgreloadrewards),
#endif
#ifdef RANKED_SYSTEM_ENABLE
		// Ranked Sytem
		ACMD_DEF(reloadrankdb),
		ACMD_DEF(rankinfo),
		ACMD_DEF(rankinfo2),
		ACMD_DEF(rankinfo3),
		ACMD_DEF(rankshow),
		ACMD_DEF(ranklist),
		ACMD_DEF(setrank),
		ACMD_DEF(setrankpoints),
#endif
#ifdef RESTOCK_SYSTEM_ENABLE
		// Restock System
		ACMD_DEF(restock),
#endif
#ifdef STUFF_ITEMS_ENABLE
		// Stuff Items
		ACMD_DEF(stuffitem),
#endif
#ifdef COSTUME_SYSTEM_ENABLE
		// Costume System
		ACMD_DEF(costumeitem),
#endif
#ifdef OSHOPS_ENABLE
		// Organized Shops
		ACMD_DEF(oshopsreorder),
#endif
#ifdef AREALOOT_ENABLE
		// Arealoot
		ACMD_DEF(arealoot),
#endif
#ifdef PET_EXTENDED_ENABLE
		// Pet Extended
		ACMD_DEF(petevolution),
		ACMD_DEF(petevolutioninfo),
		ACMD_DEF(petautofeed),
#endif
#ifdef PACK_GUILD_ENABLE
		// Pack Guild
		ACMD_DEF(guilditem),
#endif
#ifdef EVENTROOM_ENABLE
		// Event Room
		ACMD_DEF(goevent),
#endif
#ifdef EVENTMANAGER_ENABLE
		// Event Manager
		ACMD_DEF(evmanager),
#endif
#ifdef WOE_MANAGER_ENABLE
		// WoE Manager
		ACMD_DEF(woemanager),
#endif
#ifdef VIP_CONTROL_ENABLE
		// VIP Control
		ACMD_DEF(vipcontrol),
		ACMD_DEF(vipcontrolreload),
		ACMD_DEF(viptimer),
#endif
#ifdef CASH_CONTROL_ENABLE
		// Cash Control
		ACMD_DEF(cashcontrol),
		ACMD_DEF(cashinfo),
#endif
#ifdef PRESENCE_SYSTEM_ENABLE
		// Presence System
		ACMD_DEF(presence),
		ACMD_DEF(bepresence),
#endif