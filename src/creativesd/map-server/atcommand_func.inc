// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

		// Reload Configs
		ACMD_FUNC(reloadcsdconfig);
#ifdef QUEUE_SYSTEM_ENABLE
		// Queue System
		ACMD_FUNC(queue);
		ACMD_FUNC(queuelist);
		ACMD_FUNC(queuekick);
		ACMD_FUNC(queuesetdelay);
		ACMD_FUNC(queuedelay);
		ACMD_FUNC(queuenomove);
#endif
#ifdef BG_WARFARE_ENABLE
		// Battleground Warfare
		ACMD_FUNC(reloadbg);
		ACMD_FUNC(bgregister);
		ACMD_FUNC(bgjoin);
		ACMD_FUNC(bgunregister);
		ACMD_FUNC(bgleave);
		ACMD_FUNC(bgranking);
		ACMD_FUNC(bgwaiting);
		ACMD_FUNC(bgplaying);
		ACMD_FUNC(bgreportafk);
		ACMD_FUNC(bgorder);
		ACMD_FUNC(bgchangeleader);
		ACMD_FUNC(bgreloadrewards);
#endif
#ifdef RANKED_SYSTEM_ENABLE
		// Ranked System
		ACMD_FUNC(reloadrankdb);
		ACMD_FUNC(rankinfo);
		ACMD_FUNC(rankinfo2);
		ACMD_FUNC(rankinfo3);
		ACMD_FUNC(rankshow);
		ACMD_FUNC(ranklist);
		ACMD_FUNC(setrank);
		ACMD_FUNC(setrankpoints);
#endif
#ifdef RESTOCK_SYSTEM_ENABLE
		// Restock System
		ACMD_FUNC(restock);
#endif
#ifdef STUFF_ITEMS_ENABLE
		// Stuff Items
		ACMD_FUNC(stuffitem);
#endif
#ifdef COSTUME_SYSTEM_ENABLE
		// Costume System
		ACMD_FUNC(costumeitem);
#endif
#ifdef OSHOPS_ENABLE
		// Organized Shops
		ACMD_FUNC(oshopsreorder);
#endif
#ifdef AREALOOT_ENABLE
		// Arealoot
		ACMD_FUNC(arealoot);
#endif
#ifdef PET_EXTENDED_ENABLE
		// Pet Extended
		ACMD_FUNC(petevolution);
		ACMD_FUNC(petevolutioninfo);
		ACMD_FUNC(petautofeed);
#endif
#ifdef PACK_GUILD_ENABLE
		// Pack Guild
		ACMD_FUNC(guilditem);
#endif
#ifdef EVENTROOM_ENABLE
		// Event Room
		ACMD_FUNC(goevent);
#endif
#ifdef EVENTMANAGER_ENABLE
		// Event Manager
		ACMD_FUNC(evmanager);
#endif
#ifdef WOE_MANAGER_ENABLE
		// WoE Manager
		ACMD_FUNC(woemanager);
#endif
#ifdef VIP_CONTROL_ENABLE
		// VIP Control
		ACMD_FUNC(vipcontrol);
		ACMD_FUNC(vipcontrolreload);
		ACMD_FUNC(viptimer);
#endif
#ifdef CASH_CONTROL_ENABLE
		// Cash Control
		ACMD_FUNC(cashcontrol);
		ACMD_FUNC(cashinfo);
#endif
#ifdef PRESENCE_SYSTEM_ENABLE
		// Presence System
		ACMD_FUNC(presence);
		ACMD_FUNC(bepresence);
#endif