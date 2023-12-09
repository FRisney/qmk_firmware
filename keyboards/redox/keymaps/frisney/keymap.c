#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0
#define _SYMB 1
#define _NAVI 2
#define _ADJU 3
#define _WKMN 4

// enum custom_keycodes {
//   BASE = SAFE_RANGE,
//   SYMB,
//   NAVI,
//   ADJU,
// };

// Shortcut to make keymap more readable
#define RINDEX1 KC_SLSH
#define RINDEX2 TG(_WKMN)

#define RTHUMB10 KC_BSPC
#define RTHUMB11 KC_BSPC
#define RTHUMB12 KC_BSPC
#define RTHUMB13 KC_BSPC

#define RTHUMB20 KC_LSIFT
#define RTHUMB20 OSM(MOD_RGUI)

#define RTHUMB30 TG(_SYMB)
#define RTHUMB31 TG(_NAVI)
#define RTHUMB32 TG(_ADJU)
#define RTHUMB33 TO(_BASE)

#define RHOME1 MT(MOD_RCTL, KC_J)
#define RHOME2 MT(MOD_LALT, KC_K)
#define RHOME3 MT(MOD_RGUI, KC_L)


#define LINDEX1 KC_BSLS
#define LINDEX2 TG(_NAVI)

#define LTHUMB10 KC_ENTER
#define LTHUMB11 KC_ENTER
#define LTHUMB12 KC_ENTER
#define LTHUMB13 KC_ENTER

#define LTHUMB20 KC_SPC
#define LTHUMB21 KC_SPC
#define LTHUMB22 KC_SPC
#define LTHUMB23 KC_SPC

#define LTHUMB30 MO(_SYMB)
#define LTHUMB31 MO(_NAVI)
#define LTHUMB32 MO(_ADJU)
#define LTHUMB33 MO(_BASE)

#define LHOME1 MT(MOD_RCTL, KC_F)
#define LHOME2 MT(MOD_LALT, KC_D)
#define LHOME3 MT(MOD_RGUI, KC_S)

#define SSHIFT OSM(MOD_LSFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_BASE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_W    ,KC_E    ,KC_R    ,KC_T    ,LINDEX2 ,                          RINDEX2 ,KC_Y    ,KC_U    ,KC_I    ,KC_O    ,KC_P    ,KC_EQL  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┤────────┼────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_A    ,HOMEL3  ,HOMEL2  ,HOMEL1  ,KC_G    ,LINDEX1 ,                          RINDEX1 ,KC_H    ,RHOME1  ,RHOME2  ,RHOME3  ,KC_SCLN ,KC_QUOT ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┤────────┼────────┼────────┼────────┼────────┼────────┤
     SSHIFT  ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_PGUP ,KC_PGDN ,        KC_LALT ,KC_RCTL ,KC_N    ,KC_M    ,KC_COMM ,KC_DOT  ,KC_RALT ,SSHIFT  ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LGUI ,KC_PPLS ,KC_MINS ,KC_LALT ,     LTHUMB30,    LTHUMB20,LTHUMB10,        RTHUMB10,RTHUMB20,    RTHUMB30,     KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_SYMB] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,KC_F1   ,KC_F2   ,KC_F3   ,KC_F4   ,KC_F5   ,                                            KC_F6   ,KC_F7   ,KC_F8   ,KC_F9   ,KC_F10  ,KC_F11  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_EXLM ,KC_AT   ,KC_LCBR ,KC_RCBR ,KC_PIPE ,_______ ,                          _______ ,KC_PSLS ,KC_7    ,KC_8    ,KC_9    ,KC_PMNS ,KC_F12  ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_HASH ,KC_DLR  ,KC_LBRC ,KC_RBRC ,KC_GRV  ,_______ ,                          _______ ,KC_PAST ,KC_4    ,KC_5    ,KC_6    ,KC_PPLS ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_PERC ,KC_CIRC ,KC_LPRN ,KC_RPRN ,KC_TILD ,_______ ,_______ ,        _______ ,_______ ,KC_AMPR ,KC_1    ,KC_2    ,KC_3    ,KC_PENT ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,_______ ,_______ ,_______ ,     LTHUMB31,    LTHUMB21,LTHUMB11,        RTHUMB11,RTHUMB21,    RTHUMB31 ,     KC_0    ,KC_PDOT ,KC_PENT ,XXXXXXX
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_NAVI] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,                                            _______ ,_______ ,_______ ,_______ ,_______ ,_______ ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,KC_MS_U ,XXXXXXX ,KC_WH_U ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_MS_L ,KC_MS_D ,KC_MS_R ,KC_WH_D ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_BTN1 ,KC_BTN3 ,KC_BTN2 ,XXXXXXX ,XXXXXXX ,_______ ,_______ ,        _______ ,_______ ,XXXXXXX ,KC_HOME ,KC_PGDN ,KC_PGUP ,KC_END  ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     LTHUMB32,    LTHUMB22,LTHUMB12,        RTHUMB12,RTHUMB22,    RTHUMB32,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),

  [_ADJU] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     QK_BOOT, XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,                                            XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,KC_VOLD ,KC_VOLU ,KC_MUTE ,_______ ,                          _______ ,XXXXXXX ,KC_MPRV ,KC_MPLY ,KC_MNXT ,KC_MSTP ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,_______ ,                          _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_INS  ,XXXXXXX ,XXXXXXX ,XXXXXXX ,KC_PSCR ,_______ ,_______ ,        _______ ,_______ ,XXXXXXX ,KC_NUM  ,KC_CAPS ,XXXXXXX ,XXXXXXX ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     _______ ,XXXXXXX ,XXXXXXX ,XXXXXXX ,     LTHUMB33,    LTHUMB23,LTHUMB13,        RTHUMB13,RTHUMB23,    RTHUMB33,     XXXXXXX ,XXXXXXX ,XXXXXXX ,XXXXXXX
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
   [_WKMN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                                           ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV  ,KC_1    ,KC_2    ,KC_3    ,KC_4    ,KC_5    ,                                            KC_6    ,KC_7    ,KC_8    ,KC_9    ,KC_0    ,KC_MINS ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐                         ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB  ,KC_Q    ,KC_D    ,KC_R    ,KC_W    ,KC_B    ,LINDEX2 ,                          RINDEX2 ,KC_J    ,KC_F    ,KC_U    ,KC_P    ,KC_QUOT ,XXXXXXX ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤                         ├────────┼────────┤────────┼────────┼────────┼────────┼────────┤
     KC_ESC  ,KC_A    ,KC_S    ,KC_D    ,KC_F    ,KC_G    ,LINDEX1 ,                          RINDEX1 ,KC_Y    ,KC_N    ,KC_E    ,KC_O    ,KC_I    ,KC_SCLN ,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┼────────┐       ┌────────┼────────┼────────┤────────┼────────┼────────┼────────┼────────┤
     _______ ,KC_Z    ,KC_X    ,KC_C    ,KC_V    ,KC_B    ,KC_PGUP ,KC_PGDN ,        KC_LALT ,KC_RCTL ,KC_K    ,KC_L    ,KC_COMM ,KC_DOT  ,XXXXXXX ,_______ ,
  //├────────┼────────┼────────┼────────┼────┬───┴────┬───┼────────┼────────┤       ├────────┼────────┼───┬────┴───┬────┼────────┼────────┼────────┼────────┤
     KC_LGUI ,KC_PPLS ,KC_MINS ,KC_LALT ,     LTHUMB3 ,    LTHUMB20,LTHUMB10,        RTHUMB1 ,RTHUMB20,    RTHUMB3 ,     KC_LEFT ,KC_DOWN ,KC_UP   ,KC_RGHT
  //└────────┴────────┴────────┴────────┘    └────────┘   └────────┴────────┘       └────────┴────────┘   └────────┘    └────────┴────────┴────────┴────────┘
  ),
};
