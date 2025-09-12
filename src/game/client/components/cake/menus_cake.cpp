/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */

#include <engine/shared/config.h>
#include <game/client/components/menus.h>
#include <game/localization.h>

void CMenus::RenderSettingsCake(CUIRect MainView)
{
	CUIRect Button, Label;
	MainView.HSplitTop(20.0f, nullptr, &MainView);

	// Title
	MainView.HSplitTop(20.0f, &Label, &MainView);
	Ui()->DoLabel(&Label, Localize("Cake Settings"), 20.0f, TEXTALIGN_LEFT);
	MainView.HSplitTop(10.0f, nullptr, &MainView);

	// Local hook sound toggle
	MainView.HSplitTop(20.0f, &Button, &MainView);
	if(DoButton_CheckBoxAutoVMarginAndSet(&g_Config.m_ClLocalHookSound, Localize("Enable Local Hook Sound"), &g_Config.m_ClLocalHookSound, &Button, 2.0f))
	{
		// Handle local hook sound toggle
	}
}