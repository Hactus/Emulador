// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifdef EVENTROOM_ENABLE
		ACMD_DEF(goevent),
#endif
#ifdef EVENTMANAGER_ENABLE
		ACMD_DEF(evmanager),
#endif
#ifdef WOE_MANAGER_ENABLE
		ACMD_DEF(woemanager),
#endif
#ifdef VIP_CONTROL_ENABLE
		ACMD_DEF(vipcontrol),
		ACMD_DEF(vipcontrolreload),
		ACMD_DEF(viptimer),
#endif
#ifdef CASH_CONTROL_ENABLE
		ACMD_DEF(cashcontrol),
		ACMD_DEF(cashinfo),
#endif
#ifdef PRESENCE_SYSTEM_ENABLE
		ACMD_DEF(presence),
		ACMD_DEF(bepresence),
#endif