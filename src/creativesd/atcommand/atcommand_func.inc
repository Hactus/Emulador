// © Creative Services and Development
// Site Oficial: www.creativesd.com.br
// Termos de Contrato e Autoria em: http://creativesd.com.br/?p=termos

#ifdef EVENTROOM_ENABLE
ACMD_FUNC(goevent);
#endif
#ifdef EVENTMANAGER_ENABLE
ACMD_FUNC(evmanager);
#endif
#ifdef WOE_MANAGER_ENABLE
ACMD_FUNC(woemanager);
#endif
#ifdef VIP_CONTROL_ENABLE
ACMD_FUNC(vipcontrol);
ACMD_FUNC(vipcontrolreload);
ACMD_FUNC(viptimer);
#endif
#ifdef CASH_CONTROL_ENABLE
ACMD_FUNC(cashcontrol);
ACMD_FUNC(cashinfo);
#endif
#ifdef PRESENCE_SYSTEM_ENABLE
ACMD_FUNC(presence);
ACMD_FUNC(bepresence);
#endif