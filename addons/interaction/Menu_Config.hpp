
#define HSPACE 0.5-2.0/16/2
#define VSPACE 0.5-0.3/9/2

class RscStructuredText;
class ACE_Interaction_Button_Base {
  tooltip = "";
  //action = "ACE_Interaction_isMousePressed = true;(findDisplay 1713999) closeDisplay 1;_action = ACE_Interaction_Buttons select ACE_Interaction_SelectedButton;ACE_Interaction_SelectedButton = -1; if (call (_action select 2)) then {call (_action select 1)};";
  action = "";

  idc = -1;
  access = 0;
  type = 1;
  text = "";
  font = "PuristaMedium";
  sizeEx = "0.8 / 40 / (getResolution select 5)";
  shadow = 2;

  style = 2;
  x = 0;
  y = 0;
  w = 2.0 / 16 * safezoneW;
  h = 0.3 / 9 * safezoneH;

  offsetX = 0.003;
  offsetY = 0.003;
  offsetPressedX = 0.002;
  offsetPressedY = 0.002;
  borderSize = 0;

  colorText[] = {1,1,1,1};
  colorDisabled[] = {0.5,0.5,0.5,1};
  colorBackground[] = {0,0,0,0.8};
  colorBackgroundDisabled[] = {0,0,0,0.8};
  colorBackgroundActive[] = {1,1,1,0};
  colorFocused[] = {1,1,1,1};
  colorShadow[] = {0,0,0,0};
  colorBorder[] = {1,1,1,0.8};

  soundEnter[] = {"\A3\ui_f\data\sound\RscButton\soundEnter",0.09,1};
  soundPush[] = {"\A3\ui_f\data\sound\RscButton\soundPush",0.09,1};
  soundClick[] = {"\A3\ui_f\data\sound\RscButton\soundClick",0.09,1};
  soundEscape[] = {"\A3\ui_f\data\sound\RscButton\soundEscape",0.09,1};
};

#define ICON_BORDER 0.05

// Old command rose
class ACE_Interaction_Dialog {
  idd = 1713999;
  enableSimulation = 1;
  movingEnable = 0;
  onLoad = "_dlgInteractionDialog = _this select 0; for '_a' from 10 to 19 do {(_dlgInteractionDialog displayCtrl _a) ctrlShow false}; uiNamespace setVariable ['ACE_Interaction_Dialog', _dlgInteractionDialog];";
  objects[] = {};
  class controls {
    class Interaction_BackgroundMain: ACE_Interaction_Button_Base {
      type = 0;
      style = 2;
      idc = 2;
      colorBackground[] = {0,0,0,0.5};
      colorBackgroundDisabled[] = {0,0,0,0.5};
      x = "(0.5-1.8/16/2 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.55/9/2 + 0 * 0.04) * safezoneH + safezoneY";
      w = "1.8 / 16 * safezoneW";
      h = "0.55 / 9 * safezoneH";
    };

    class Interaction_ButtonMain: ACE_Interaction_Button_Base {
      action = "-1 call ACE_Interaction_fnc_onClick;";
      style = 2;
      tooltip = "";
      text = "Interaction Menu";
      idc = 3;
      sizeEx = "0.6 / 40 / (getResolution select 5)";
      colorBackground[] = {0,0,0,0};
      colorBackgroundDisabled[] = {0,0,0,0};
      colorBackgroundActive[] = {1,1,1,0.2};
      colorFocused[] = {0,0,0,0};
      x = "(0.5-1.8/16/2 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.55/9/2 + 0 * 0.04) * safezoneH + safezoneY";
      w = "1.8 / 16 * safezoneW";
      h = "0.55 / 9 * safezoneH";
    };

    class Interaction_Background0: ACE_Interaction_Button_Base {
      type = 0;
      style = 2;
      idc = 40;
      colorBackground[] = {0,0,0,0.5};
      colorBackgroundDisabled[] = {0,0,0,0.5};
      x = "(0.5-2.0/16/2 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 2.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background1: Interaction_Background0 {
      idc = 41;
      x = "(0.5-2.0/16/2 + 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background2: Interaction_Background0 {
      idc = 42;
      x = "(0.5-2.0/16/2 + 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background3: Interaction_Background0 {
      idc = 43;
      x = "(0.5-2.0/16/2 + 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background4: Interaction_Background0 {
      idc = 44;
      x = "(0.5-2.0/16/2 + 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background5: Interaction_Background0 {
      idc = 45;
      x = "(0.5-2.0/16/2 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 2.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background6: Interaction_Background0 {
      idc = 46;
      x = "(0.5-2.0/16/2 - 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background7: Interaction_Background0 {
      idc = 47;
      x = "(0.5-2.0/16/2 - 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background8: Interaction_Background0 {
      idc = 48;
      x = "(0.5-2.0/16/2 - 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Background9: Interaction_Background0 {
      idc = 49;
      x = "(0.5-2.0/16/2 - 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };

    class Interaction_Icon0: ACE_Interaction_Button_Base {
      tooltip = "";
      text = "";
      idc = 20;
      type = 0;
      style = 48;
      colorBackground[] = {0,0,0,0};
      x = (0.5-(2.0-ICON_BORDER)/16/2 + 0 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 - 2.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon1: Interaction_Icon0 {
      idc = 21;
      x = (0.5-(2.0-ICON_BORDER)/16/2 + 1.0 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 - 1.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon2: Interaction_Icon0 {
      idc = 22;
      x = (0.5-(2.0-ICON_BORDER)/16/2 + 1.25 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 - 0.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon3: Interaction_Icon0 {
      idc = 23;
      x = (0.5-(2.0-ICON_BORDER)/16/2 + 1.25 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 + 0.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon4: Interaction_Icon0 {
      idc = 24;
      x = (0.5-(2.0-ICON_BORDER)/16/2 + 1.0 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 + 1.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon5 : Interaction_Icon0 {
      idc = 25;
      x = (0.5-(2.0-ICON_BORDER)/16/2 + 0 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 + 2.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon6: Interaction_Icon0 {
      idc = 26;
      x = (0.5-(2.0-ICON_BORDER)/16/2 - 1.0 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 + 1.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon7: Interaction_Icon0 {
      idc = 27;
      x = (0.5-(2.0-ICON_BORDER)/16/2 - 1.25 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 + 0.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon8: Interaction_Icon0 {
      idc = 28;
      x = (0.5-(2.0-ICON_BORDER)/16/2 - 1.25 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 - 0.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };
    class Interaction_Icon9: Interaction_Icon0 {
      idc = 29;
      x = (0.5-(2.0-ICON_BORDER)/16/2 - 1.0 * 0.1) * safezoneW + safezoneX;
      y = (0.5-(0.3-ICON_BORDER)/9/2 - 1.5 * 0.04) * safezoneH + safezoneY;
      w = (0.3-ICON_BORDER) / 16 * safezoneW;
      h = (0.3-ICON_BORDER) / 9 * safezoneH;
    };

    class Interaction_Shortcut0: ACE_Interaction_Button_Base {
      tooltip = "";
      text = "";
      idc = 30;
      style = 2;
      colorBackground[] = {0,0,0,0};
      x = "(0.5+2.0/16/2-0.3/16 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 2.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut1: Interaction_Shortcut0 {
      idc = 31;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 + 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 1.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut2: Interaction_Shortcut0 {
      idc = 32;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 + 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 0.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut3: Interaction_Shortcut0 {
      idc = 33;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 + 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 0.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut4: Interaction_Shortcut0 {
      idc = 34;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 + 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 1.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut5 : Interaction_Shortcut0 {
      idc = 35;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 2.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut6: Interaction_Shortcut0 {
      idc = 36;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 - 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 1.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut7: Interaction_Shortcut0 {
      idc = 37;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 - 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 0.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut8: Interaction_Shortcut0 {
      idc = 38;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 - 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 0.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Shortcut9: Interaction_Shortcut0 {
      idc = 39;
      type = 0;
      x = "(0.5+2.0/16/2-0.3/16 - 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 1.5 * 0.04) * safezoneH + safezoneY";
      w = "0.3 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };

    class Interaction_Button0: ACE_Interaction_Button_Base {
      action = "0 call ACE_Interaction_fnc_onClick;";
      style = 2;
      tooltip = "";
      text = "";
      idc = 10;
      colorBackground[] = {0,0,0,0};
      colorBackgroundDisabled[] = {0,0,0,0};
      colorBackgroundActive[] = {1,1,1,0.2};
      colorFocused[] = {0,0,0,0};
      x = "(0.5-2.0/16/2 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 2.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button1: Interaction_Button0 {
      action = "1 call ACE_Interaction_fnc_onClick;";
      idc = 11;
      x = "(0.5-2.0/16/2 + 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button2: Interaction_Button0 {
      action = "2 call ACE_Interaction_fnc_onClick;";
      idc = 12;
      x = "(0.5-2.0/16/2 + 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button3: Interaction_Button0 {
      action = "3 call ACE_Interaction_fnc_onClick;";
      idc = 13;
      x = "(0.5-2.0/16/2 + 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button4: Interaction_Button0 {
      action = "4 call ACE_Interaction_fnc_onClick;";
      idc = 14;
      x = "(0.5-2.0/16/2 + 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button5: Interaction_Button0 {
      action = "5 call ACE_Interaction_fnc_onClick;";
      idc = 15;
      x = "(0.5-2.0/16/2 + 0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 2.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button6: Interaction_Button0 {
      action = "6 call ACE_Interaction_fnc_onClick;";
      idc = 16;
      x = "(0.5-2.0/16/2 - 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button7: Interaction_Button0 {
      action = "7 call ACE_Interaction_fnc_onClick;";
      idc = 17;
      x = "(0.5-2.0/16/2 - 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 + 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button8: Interaction_Button0 {
      action = "8 call ACE_Interaction_fnc_onClick;";
      idc = 18;
      x = "(0.5-2.0/16/2 - 1.25 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 0.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
    class Interaction_Button9: Interaction_Button0 {
      action = "9 call ACE_Interaction_fnc_onClick;";
      idc = 19;
      x = "(0.5-2.0/16/2 - 1.0 * 0.1) * safezoneW + safezoneX";
      y = "(0.5-0.3/9/2 - 1.5 * 0.04) * safezoneH + safezoneY";
      w = "2.0 / 16 * safezoneW";
      h = "0.3 / 9 * safezoneH";
    };
  };
};

class RscListbox;
class IGUIBack;
class RscText;
#define X_OFFSET 0.2

class RscACE_SelectAnItem {
  idd = 8854;
  movingEnable = 0;
  class controls {
    class back:IGUIBack {
      x = X_OFFSET;
      y = 0;
      w = 0.6;
      h = 0.71;
      colorBackground[] = {0, 0, 0, 0.2};
    };
    class header: RscText{
      idc = 8870;
      x = X_OFFSET + 0.005;
      y = 0.005;
      w = 0.59;
      h = 0.05;
      style = 0x02;
      text = "";
    };
    class itemList:RscListBox {
      onMouseButtonDblClick = "_this call ACE_Interaction_fnc_onSelectMenuDblClick";
      idc = 8866;
      x = X_OFFSET + 0.005;
      w = 0.59;
      h = 0.54;
      y = 0.06;
    };

    class cancelBtnBackground: ACE_Interaction_Button_Base {
      type = 0;
      style = 2;
      idc = -1;
      colorBackground[] = {0,0,0,0.5};
      colorBackgroundDisabled[] = {0,0,0,0.5};
      x = X_OFFSET + 0.005;
      w = 0.15;
      h = 0.1;
      y = 0.605;
    };
    class approveBtnBackground: ACE_Interaction_Button_Base {
      type = 0;
      style = 2;
      idc = -1;
      colorBackground[] = {0,0,0,0.5};
      colorBackgroundDisabled[] = {0,0,0,0.5};
      x = X_OFFSET + 0.445;
      y = 0.605;
      h = 0.1;
      w = 0.15;
    };

    class cancelBtn: ACE_Interaction_Button_Base {
      idc = 8855;
      x = X_OFFSET + 0.005;
      w = 0.15;
      h = 0.1;
      y = 0.605;
      style = 2;
      text = $STR_ACE_Interaction_Back; //$STR_ACE_Interaction_CancelSelection;
      action = "call ACE_Interaction_fnc_hideMenu;";   //'Default' call ACE_Interaction_fnc_openMenu;    'Default' call ACE_Interaction_fnc_openMenuSelf;
      colorBackground[] = {0,0,0,0};
      colorBackgroundDisabled[] = {0,0,0,0};
      colorBackgroundActive[] = {1,1,1,0.2};
      colorFocused[] = {0,0,0,0};
    };
    class approveBtn: ACE_Interaction_Button_Base {
      idc = 8860;
      x = X_OFFSET + 0.445;
      y = 0.605;
      h = 0.1;
      w = 0.15;
      style = 2;
      text = $STR_ACE_Interaction_MakeSelection;
      action = "call ACE_Interaction_fnc_hideMenu;";
      colorBackground[] = {0,0,0,0};
      colorBackgroundDisabled[] = {0,0,0,0};
      colorBackgroundActive[] = {1,1,1,0.2};
      colorFocused[] = {0,0,0,0};
    };
  };
};

#define GUI_GRID_W  (0.025)
#define GUI_GRID_H  (0.04)

class RscPicture;
class RscInteractionIcon: RscPicture {
  x = 19.25 * GUI_GRID_W;
  y = 15.75 * GUI_GRID_H;
  w = 2*GUI_GRID_H;
  h = 2*GUI_GRID_H;
};
class RscInteractionHelperIcon: RscInteractionIcon {
  x = 20 * GUI_GRID_W;
  y = 16 * GUI_GRID_H;
  w = GUI_GRID_H;
  h = GUI_GRID_H;
};
class RscInteractionText: RscText{
  x = 21 * GUI_GRID_W;
  y = 16 * GUI_GRID_H;
  w = 8 * GUI_GRID_W;
  h = 1.5 * GUI_GRID_H;
};
class RscTitles {
  class GVAR(InteractionHelper) {
    idd = 9930;
    enableSimulation = 1;
    movingEnable = 0;
    fadeIn=0.5;
    fadeOut=0.5;
    duration = 10e10;
    onLoad = "uiNamespace setVariable ['ACE_Helper_Display', _this select 0];";

    class controls {
      class SelectIcon: RscInteractionHelperIcon{
        idc = 1200;
        text = PATHTOF(UI\mouse_left_ca.paa);
        y = 17.5 * GUI_GRID_H;
      };
      class SelectText: RscInteractionText{
        idc = 1000;
        y = 17 * GUI_GRID_H;
        text = $STR_ACE_Interaction_MakeSelection;
      };
      class GoBackIcon: RscInteractionHelperIcon{
        idc = 1201;
        text = PATHTOF(UI\mouse_right_ca.paa);
        y = 19.5 * GUI_GRID_H;
      };
      class GoBackText: RscInteractionText{
        idc = 1001;
        y = 19 * GUI_GRID_H;
        text = $STR_ACE_Interaction_Back;
      };
      class ScrollIcon: RscInteractionHelperIcon{
        idc = 1202;
        text = PATHTOF(UI\mouse_scroll_ca.paa);
        y = 18.5 * GUI_GRID_H;
      };
      class ScrollText: RscInteractionText{
        idc = 1002;
        y = 18 * GUI_GRID_H;
        text = $STR_ACE_Interaction_ScrollHint;
      };
    };
  };
};
