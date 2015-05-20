class CODIRscText
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 0;
	idc = -1;
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	text = "";
	fixedWidth = 0;
	x = 0;
	y = 0;
	h = 0.037;
	w = 0.3;
	style = 0;
	shadow = 1;
	colorShadow[] = 
	{
		0,
		0,
		0,
		0.5
	};
	font = "PuristaMedium";
	SizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	linespacing = 1;
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
};
class CODIRscCombo
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 4;
	colorSelect[] = 
	{
		0,
		0,
		0,
		1
	};
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		1
	};
	colorScrollbar[] = 
	{
		1,
		0,
		0,
		1
	};
	colorPicture[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictureSelected[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPictudeDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	soundSelect[] = 
	{
		"\A3\ui_f\data\sound\RscCombo\soundSelect",
		0.1,
		1
	};
	soundExpand[] = 
	{
		"\A3\ui_f\data\sound\RscCombo\soundExpand",
		0.1,
		1
	};
	soundCollapse[] = 
	{
		"\A3\ui_f\data\sound\RscCombo\soundCollapse",
		0.1,
		1
	};
	maxHistoryDelay = 1;
	class ComboScrollBar
	{
		color[] = 
		{
			1,
			1,
			1,
			1
		};
	};
	style = "0x10 + 0x200";
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	shadow = 0;
	x = 0;
	y = 0;
	w = 0.12;
	h = 0.035;
	colorSelectBackground[] = 
	{
		1,
		1,
		1,
		0.7
	};
	arrowEmpty = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_ca.paa";
	arrowFull = "\A3\ui_f\data\GUI\RscCommon\rsccombo\arrow_combo_active_ca.paa";
	wholeHeight = 0.45;
	colorActive[] = 
	{
		1,
		0,
		0,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorPictureDisabled[] = 
	{
		1,
		1,
		1,
		1
	};
};
class CODIRscCheckBox
{
	idc = -1;
	type = 77;
	style = 0;
	checked = 0;
	x = "0.375 * safezoneW + safezoneX";
	y = "0.36 * safezoneH + safezoneY";
	w = "0.025 * safezoneW";
	h = "0.04 * safezoneH";
	color[] = 
	{
		1,
		1,
		1,
		0.7
	};
	colorFocused[] = 
	{
		1,
		1,
		1,
		1
	};
	colorHover[] = 
	{
		1,
		1,
		1,
		1
	};
	colorPressed[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.2
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundFocused[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundHover[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundPressed[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0
	};
	textureChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureFocusedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureFocusedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureHoverChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureHoverUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	texturePressedChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	texturePressedUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	textureDisabledChecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_checked_ca.paa";
	textureDisabledUnchecked = "\A3\Ui_f\data\GUI\RscCommon\RscCheckBox\CheckBox_unchecked_ca.paa";
	tooltipColorText[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorBox[] = 
	{
		1,
		1,
		1,
		1
	};
	tooltipColorShade[] = 
	{
		0,
		0,
		0,
		0.65
	};
	soundEnter[] = 
	{
		"",
		0.1,
		1
	};
	soundPush[] = 
	{
		"",
		0.1,
		1
	};
	soundClick[] = 
	{
		"",
		0.1,
		1
	};
	soundEscape[] = 
	{
		"",
		0.1,
		1
	};
};
class CODIRscButton
{
	deletable = 0;
	fade = 0;
	access = 0;
	type = 1;
	text = "";
	colorText[] = 
	{
		1,
		1,
		1,
		1
	};
	colorDisabled[] = 
	{
		1,
		1,
		1,
		0.25
	};
	colorBackground[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundDisabled[] = 
	{
		0,
		0,
		0,
		0.5
	};
	colorBackgroundActive[] = 
	{
		0,
		0,
		0,
		1
	};
	colorFocused[] = 
	{
		0,
		0,
		0,
		1
	};
	colorShadow[] = 
	{
		0,
		0,
		0,
		0
	};
	colorBorder[] = 
	{
		0,
		0,
		0,
		1
	};
	soundEnter[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEnter",
		0.09,
		1
	};
	soundPush[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundPush",
		0.09,
		1
	};
	soundClick[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundClick",
		0.09,
		1
	};
	soundEscape[] = 
	{
		"\A3\ui_f\data\sound\RscButton\soundEscape",
		0.09,
		1
	};
	style = 2;
	x = 0;
	y = 0;
	w = 0.095589;
	h = 0.039216;
	shadow = 2;
	font = "PuristaMedium";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1)";
	offsetX = 0;
	offsetY = 0;
	offsetPressedX = 0;
	offsetPressedY = 0;
	borderSize = 0;
};
class CODIIGUIBack
{
	type = 0;
	idc = 124;
	style = 128;
	text = "";
	colorText[] = 
	{
		0,
		0,
		0,
		0
	};
	font = "PuristaMedium";
	sizeEx = 0;
	shadow = 0;
	x = 0.1;
	y = 0.1;
	w = 0.1;
	h = 0.1;
	colorbackground[] = 
	{
		"(profilenamespace getvariable ['IGUI_BCG_RGB_R',0])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_G',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_B',1])",
		"(profilenamespace getvariable ['IGUI_BCG_RGB_A',0.8])"
	};
};

class CODI_Loadout_ClassSelector
{
	idd = -1;
	onLoad = "_this execVM 'CODI\loadout\initGUI.sqf';";
	class controls
	{
/* #Xuzogo
$[
	1.063,
	["class",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[1000,"",[1,"Side",["0.408333 * safezoneW + safezoneX","0.313073 * safezoneH + safezoneY","0.0401042 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1001,"",[1,"Class",["0.408333 * safezoneW + safezoneX","0.34606 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1002,"",[1,"Silenced",["0.408333 * safezoneW + safezoneX","0.412034 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2100,"",[1,"",["0.459896 * safezoneW + safezoneX","0.313073 * safezoneH + safezoneY","0.120313 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2101,"",[1,"",["0.459896 * safezoneW + safezoneX","0.34606 * safezoneH + safezoneY","0.120313 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2102,"",[1,"",["0.459896 * safezoneW + safezoneX","0.379047 * safezoneH + safezoneY","0.120313 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2800,"",[1,"",["0.459896 * safezoneW + safezoneX","0.412034 * safezoneH + safezoneY","0.0171875 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1003,"",[1,"Medic",["0.408333 * safezoneW + safezoneX","0.445021 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1004,"",[1,"ExSpec",["0.408333 * safezoneW + safezoneX","0.478009 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1005,"",[1,"Pilot",["0.408333 * safezoneW + safezoneX","0.510996 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2801,"",[1,"",["0.459896 * safezoneW + safezoneX","0.445021 * safezoneH + safezoneY","0.0171875 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2802,"",[1,"",["0.459896 * safezoneW + safezoneX","0.478009 * safezoneH + safezoneY","0.0171875 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2803,"",[1,"",["0.459896 * safezoneW + safezoneX","0.510996 * safezoneH + safezoneY","0.0171875 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1006,"",[1,"Visual",["0.408333 * safezoneW + safezoneX","0.379047 * safezoneH + safezoneY","0.0458333 * safezoneW","0.0219914 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"",[1,"Equip",["0.408333 * safezoneW + safezoneX","0.543983 * safezoneH + safezoneY","0.171875 * safezoneW","0.0329871 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2200,"",[1,"",["0.396875 * safezoneW + safezoneX","0.291081 * safezoneH + safezoneY","0.194792 * safezoneW","0.30788 * safezoneH"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Coding, v1.063, #Xuzogo)
////////////////////////////////////////////////////////

class RscText_1000: CODIRscText
{
	idc = 1000;
	text = "Side"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.313073 * safezoneH + safezoneY;
	w = 0.0401042 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscText_1001: CODIRscText
{
	idc = 1001;
	text = "Class"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.34606 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscText_1002: CODIRscText
{
	idc = 1002;
	text = "Silenced"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.412034 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCombo_2100: CODIRscCombo
{
	idc = 2100;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.313073 * safezoneH + safezoneY;
	w = 0.120313 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCombo_2101: CODIRscCombo
{
	idc = 2101;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.34606 * safezoneH + safezoneY;
	w = 0.120313 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCombo_2102: CODIRscCombo
{
	idc = 2102;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.379047 * safezoneH + safezoneY;
	w = 0.120313 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCheckbox_2800: CODIRscCheckbox
{
	idc = 2800;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.412034 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscText_1003: CODIRscText
{
	idc = 1003;
	text = "Medic"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.445021 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscText_1004: CODIRscText
{
	idc = 1004;
	text = "ExSpec"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.478009 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscText_1005: CODIRscText
{
	idc = 1005;
	text = "Pilot"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.510996 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCheckbox_2801: CODIRscCheckbox
{
	idc = 2801;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.445021 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCheckbox_2802: CODIRscCheckbox
{
	idc = 2802;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.478009 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscCheckbox_2803: CODIRscCheckbox
{
	idc = 2803;
	x = 0.459896 * safezoneW + safezoneX;
	y = 0.510996 * safezoneH + safezoneY;
	w = 0.0171875 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscText_1006: CODIRscText
{
	idc = 1006;
	text = "Visual"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.379047 * safezoneH + safezoneY;
	w = 0.0458333 * safezoneW;
	h = 0.0219914 * safezoneH;
};
class RscButton_1600: CODIRscButton
{
	idc = 1600;
	text = "Equip"; //--- ToDo: Localize;
	x = 0.408333 * safezoneW + safezoneX;
	y = 0.543983 * safezoneH + safezoneY;
	w = 0.171875 * safezoneW;
	h = 0.0329871 * safezoneH;
	action = "call CODI_Loadout_fnc_loadoutSelector";
};
class IGUIBack_2200: CODIIGUIBack
{
	idc = 2200;
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.291081 * safezoneH + safezoneY;
	w = 0.194792 * safezoneW;
	h = 0.30788 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

	};
};