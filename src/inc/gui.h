#ifndef GUI_H
#define GUI_H

enum GUI_ELEMENTS {
	GUI_EL_AREA_STATUSBAR_TOP,
	GUI_EL_AREA_STATUSBAR_DROPPED,

	GUI_EL_AREA_CONTENT,

	GUI_EL_MBTN_MAP,
		GUI_EL_AREA_MAP,
		GUI_EL_AREA_SCAN,
		GUI_EL_SLI_MAP_SCALE,

	GUI_EL_MBTN_VIEW,

	GUI_EL_MBTN_SETTINGS,
		GUI_EL_BTN_CALTOUCH,
		GUI_EL_BTN_RESET,
		GUI_EL_SW_LIDAR,
	//////////DO NOT ADD ANYTHING BELOW THIS LINE!!!////////////
	GUI_ELEMENTS_CNT
};

enum GUI_MENU {
	MENU_INIT, MENU_INIT_IDLE,
	MENU_MAP_INIT, MENU_MAP_IDLE,
	MENU_VIEW_INIT, MENU_VIEW_IDLE,
	MENU_SETTINGS_INIT, MENU_SETTINGS_IDLE,
	MENU_CALIBRATION
};

extern void gui_init(void);

#endif // GUI_H
