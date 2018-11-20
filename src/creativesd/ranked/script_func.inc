// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos
//

/*==========================================
 * CreativeSD: Ranked System
 *------------------------------------------*/

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