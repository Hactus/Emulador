// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos
//
// Official Site: www.creativesd.com.br
// Terms of Agreement and Authorship in: http://creativesd.com.br/?p=termos
#ifndef _CREATIVESD_HPP_
#define _CREATIVESD_HPP_

// CreativeSD Emulator Version!
// Do not change, the version is specified by the developers for solutions of bugs or errors.
#ifndef CSDVERSION
	#define CSDVERSION "4.0.00b"
#endif

// Queue System
#ifndef QUEUE_SYSTEM_ENABLE
	// Enable Queue System
	// Comment out the '//' line to disable a system.
	#define QUEUE_SYSTEM_ENABLE

	// Is setting should be in accordance with the 'SCRIPT_MAX_ARRAYSIZE' if you increase this setting,
	// variable vectorized scripts will not accept indexing and will miss data in scripting processes.
	#define MAX_QUEUE_PLAYERS	127

	// Queue Name Length
	#define	QUEUE_NAME_LENGTH	30

	// Enter the queue message id.
	// This is for multi language support, so feel free to change it.
	#define QUEUE_MSG_TXT	1750
#endif

// Battleground Warfare
#ifndef BG_WARFARE_ENABLE
	// Enable BG Warfare
	// Comment out the '//' line to disable a system.
	#define BG_WARFARE_ENABLE
	
	// Max Rewards Read
	#define MAX_BG_REWARDS	120

	// Max BG Guild Positions
	#define MAX_BG_POSITION	4

	// Enter the BG message id.
	// This is for multi language support, so feel free to change it.
	#define BG_MSG_TXT 1650
#endif

// Ranked System
#ifndef RANKED_SYSTEM_ENABLE
	// Enable Ranked System
	// Comment out the '//' line to disable a system.
	#define RANKED_SYSTEM_ENABLE

	// Max Ranks DB
	#define	MAX_RANKED_DB	15

	// Max Aura in DB Row
	#define MAX_RANKED_AURA 3

	// Enter the ranked message id.
	// This is for multi language support, so feel free to change it.
	#define RANKED_MSGTXT	1600
#endif

// Shop Extended
#ifndef SHOP_EXTENDED_ENABLE
	// Enable Shop Extended
	// Comment out the '//' line to disable a system.
	#define SHOP_EXTENDED_ENABLE
#endif

// Stuff Items
#ifndef STUFF_ITEMS_ENABLE
	// Enable Stuff Items
	// Comment out the '//' line to disable a system.
	#define STUFF_ITEMS_ENABLE

	// Enter the Stuff Items message id.
	// This is for multi language support, so feel free to change it.
	#define STUFF_ITEMS_MSG_TXT 1842
#endif

// Organized Shops
#ifndef OSHOPS_ENABLE
	// Enable Stuff Items
	// Comment out the '//' line to disable a system.
	#define OSHOPS_ENABLE

	// Max Vending Block
	#define MAX_OSHOPS_BLOCK	4

	// Enter the Organized Shop message id.
	// This is for multi language support, so feel free to change it.
	#define OSHOP_MSG_TXT 1790
#endif

// Restock System
#ifndef RESTOCK_SYSTEM_ENABLE
	// Enable Restock System
	// Comment out the '//' line to disable a system.
	#define RESTOCK_SYSTEM_ENABLE

	// Max Items in Restock
	#define MAX_RESTOCK 100
#endif

// Bind Clock
#ifndef BIND_CLOCK_ENABLE
	// Enable Bind Clock
	// Comment out the '//' line to disable a system.
	#define BIND_CLOCK_ENABLE

	// Max Bind Block
	#define MAX_BIND_CLOCK 30
#endif

// Presence
#ifndef PRESENCE_SYSTEM_ENABLE
	// Enable Presence System
	// Comment out the '//' line to disable a system.
	#define PRESENCE_SYSTEM_ENABLE

	// Enter the presence message id.
	// This is for multi language support, so feel free to change it.
	#define PRESENCE_MSG_TXT 1796
#endif

// Arealoot
#ifndef AREALOOT_ENABLE
	// Enable Arealoot
	// Comment out the '//' line to disable a system.
	#define AREALOOT_ENABLE

	// Enter the arealoot message id.
	// This is for multi language support, so feel free to change it.
	#define AREALOOT_MSG_TXT 1797
#endif

// Event Room
#ifndef EVENTROOM_ENABLE
	// Enable Default Event Room (@goevent)
	// Comment out the '//' line to disable a system.
	#define EVENTROOM_ENABLE

	// Event Room Map
	#define EVENTROOM_MAP "event_room"

	// Event Room x and y coordinate
	#define EVENTROOM_X 99
	#define EVENTROOM_Y 82

	// Enter the event room message id.
	// This is for multi language support, so feel free to change it.
	#define EVENTROOM_MSG_TXT 1799
#endif

// Event Manager
#ifndef EVENTMANAGER_ENABLE
	// Enable Event Manager (@evmanager)
	// Comment out the '//' line to disable a system.
	#define EVENTMANAGER_ENABLE
#endif

// Woe Manager
#ifndef WOE_MANAGER_ENABLE
	// Enable Woe Manager
	// Comment out the '//' line to disable a system.
	#define WOE_MANAGER_ENABLE

	// Enter the Woe Manager message id.
	// This is for multi language support, so feel free to change it.
	#define WOE_MANAGER_MSG_TXT 1800
#endif

#ifndef TEST_EMPERIUM_ENABLE
	// Enable Test Emperium (Mapflag)
	// Comment out the '//' line to disable a system.
	#define TEST_EMPERIUM_ENABLE
#endif

#ifndef EXTENDED_VENDING_ENABLE
	// Enable Extended Vending
	// @Custom from: https://rathena.org/board/files/file/3860-extended-vending-20/
	// Comment out the '//' line to disable a system.
	#define EXTENDED_VENDING_ENABLE

	// Enter the Extended Vending message id.
	// This is for multi language support, so feel free to change it.
	#define EXTVEND_MSG_TXT 1801
#endif

#ifndef CELL_PVP_ENABLE
	// Enable Cell PvP
	// @Custom from: brAthena / CarlosHenrq
	// Comment out the '//' line to disable a system.
	#define CELL_PVP_ENABLE

	// Enter the Cell PvP message id.
	// This is for multi language support, so feel free to change it.
	#define CELL_PVP_MSG_TXT 1817
#endif

#ifndef MF_NOSTORE_ENABLE
	// Enable Map Flag noStorage and noGuildStorage
	#define MF_NOSTORAGE_ENABLE

	// Enter the Mapflag Storage message id.
	// This is for multi language support, so feel free to change it.
	#define MF_NOSTORAGE_MSG_TXT 1852
#endif

#ifndef REFINE_UI_ENABLE
	// Enable Refine UI
	// @Custom from: https://github.com/rathena/rathena/pull/2494/files#diff-c5d5e782db2344e04a7089b24ba6c962R20251
	// Comment out the '//' line to disable a system.
	// ! Experimental, works only in hexed 2016-10-12 or later !
	#define REFINE_UI_ENABLE

	// Enter the Refine UI message id.
	// This is for multi language support, so feel free to change it.
	#define REFINE_UI_MSG_TXT 1836
#endif

#ifndef PET_EVOLUTION_ENABLE
	// Enable Pet Evolution
	// @Custom from: ???????
	// Comment out the '//' line to disable a system.
	// ! Experimental, works only in hexed 2014-10-08aRagexe or later !
	#define PET_EVOLUTION_ENABLE
#endif

#ifndef COSTUME_SYSTEM_ENABLE
	// Enable Costume System (Costume Item/Item Visual)
	// Comment out the '//' line to disable a system.
	#define COSTUME_SYSTEM_ENABLE

	// Enter the Costume System message id.
	// This is for multi language support, so feel free to change it.
	#define COSTUME_SYSTEM_MSG_TXT 1839
#endif

#ifndef VIP_CONTROL_ENABLE
	// Enable VIP Control
	// Comment out the '//' line to disable a system.
	#define VIP_CONTROL_ENABLE
#endif

#ifndef CASH_CONTROL_ENABLE
	// Enable Cash Control
	// Comment out the '//' line to disable a system.
	#define CASH_CONTROL_ENABLE
#endif

#ifndef CREATIVE_SCRIPTCMD_ENABLE
	// Enable Script Commands
	// Comment out the '//' line to disable a system.
	#define CREATIVE_SCRIPTCMD_ENABLE
#endif

#ifndef CREATIVE_ATCMD_ENABLE
	#if defined(WOE_MANAGER_ENABLE) || \
		defined(EVENTROOM_ENABLE) || \
		defined(EVENTMANAGER_ENABLE) || \
		defined(VIP_CONTROL_ENABLE) || \
		defined(CASH_CONTROL_ENABLE) || \
		defined(PRESENCE_SYSTEM_ENABLE)
			#define CREATIVE_ATCMD_ENABLE
	#endif
#endif

#endif /* _CREATIVESD_HPP_ */
