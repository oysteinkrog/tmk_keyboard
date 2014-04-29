static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Keymap 0: Default Layer
     *
     * 0: Colemak
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |   ~    |   1  |   2  |   3  |   4  |   5  |  L0  |           |   6  |   7  |   8  |   9  |   0  |   -  |   =    |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   F  |   P  |   G  | Home |           | End  |   J  |   L  |   U  |   Y  |   ;  |   \    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LCtrl  |   A  |   R  |   S  |   T  |   D  |------|           |------|   H  |   N  |   E  |   I  |   O  |   '    |
     * |--------+------+------+------+------+------|  L0  |           | Ins  |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |   ,  |   .  |   /  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |LCtrl |  ~L2 | LGui | LAlt | ~L1  |                                       | ~L1  | RAlt |   [  |   ]  | RCtrl |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  ~L2 |  ~L4 |       |  ~L3 |  ~L2 |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      | PgUp |       |  Ins |      |      |
     *                                 | BkSp |  ESC |------|       |------| Enter| Space|
     *                                 |      |      | PgDn |       |  Del |      |      |
     *                                 `--------------------'       `--------------------'
     *
     */

    KEYMAP(  // layout: layer 1: F-keys + cursor
        // left hand
        GRV ,1   ,2   ,3   ,4   ,5   ,FN0 ,
        TAB ,Q   ,W   ,F   ,P   ,G   ,HOME,
        LCTL,A   ,R   ,S   ,T   ,D   ,
        LSFT,Z   ,X   ,C   ,V   ,B   ,CAPS ,
        FN2 ,FN3 ,LGUI,LALT,FN1 ,
                                      FN2 ,FN4 ,
                                           NO  ,
                                 BSPC,CAPS,FN5 ,
        // right hand
             6   ,7   ,8   ,9   ,0   ,MINS,EQL ,
             END ,J   ,L   ,U   ,Y   ,SCLN,BSLS,
                  H   ,N   ,E   ,I   ,O   ,RCTL,
             QUOT,K   ,M   ,COMM,DOT ,SLSH,RSFT,
                       FN1 ,RALT,LBRC,RBRC,FN2 ,
        FN3 ,FN2 ,
        INS ,
        DEL ,ENT ,SPC
    ),

    KEYMAP(  // layout: layer 1: F-keys + cursor
        // left hand
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,TRNS,
        TRNS,NO  ,PGUP,UP  ,PGDN,PGUP,TRNS,
        TRNS,HOME,LEFT,DOWN,RGHT,END ,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F6  ,F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,
             VOLU,NO  ,PGUP,UP  ,PGDN,NO  ,TRNS,
                  HOME,LEFT,DOWN,RGHT,END ,TRNS,
             VOLD,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 2: mouse + numpad
        // left hand
        TRNS,NO  ,NO  ,NO  ,NO  ,PAUS,PSCR,
        TRNS,NO  ,WH_U,MS_U,WH_D,BTN2,TRNS,
        TRNS,NO  ,MS_L,MS_D,MS_R,BTN1,
        TRNS,NO  ,WH_L,WH_D,WH_R,BTN3,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             SLCK,NLCK,PSLS,PAST,PAST,PMNS,BSPC,
             TRNS,NO  ,P7  ,P8  ,P9  ,PMNS,BSPC,
                  NO  ,P4  ,P5  ,P6  ,PPLS,PENT,
             TRNS,NO  ,P1  ,P2  ,P3  ,PPLS,PENT,
                       P0  ,PDOT,SLSH,PENT,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 3:
        // left hand
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,FN7 ,
        LSFT,F13 ,F14 ,F15 ,F16 ,NO  ,TRNS,
             RSFT,F17 ,F18 ,F19 ,F20 ,NO,
        TRNS,F21 ,F22 ,F23 ,F24 ,NO  ,FN0 ,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,FN7 ,
        // right hand
             FN7 ,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
             TRNS,NO  ,F1  ,F2  ,F3  ,F4  ,TRNS,
                  NO  ,F5  ,F6  ,F7  ,F8  ,TRNS,
             FN5 ,NO  ,F9  ,F10 ,F11 ,F12 ,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        FN7 ,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 4: F-keys + cursor
        // left hand
        TRNS,F1  ,F2  ,F3  ,F4  ,F5  ,F6,
        FN7 ,NO  ,PGUP,UP  ,PGDN,PGUP,TRNS,
        TRNS,NO  ,LEFT,DOWN,RGHT,PGDN,
        TRNS,NO  ,NO  ,END ,HOME,NO  ,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             F7  ,F8  ,F9  ,F10 ,F11 ,F12 ,TRNS,
             TRNS,PGUP,PGUP,UP  ,PGDN,NO  ,_VOLUP,
                  PGDN,LEFT,DOWN,RGHT,NO  ,_VOLDOWN,
             TRNS,NO  ,HOME,END ,NO  ,NO  ,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    KEYMAP(  // layout: layer 5: QWERTY
        // left hand
        GRV ,1   ,2   ,3   ,4   ,5   ,FN0 ,
        TAB ,Q   ,W   ,E   ,R   ,T   ,LBRC,
        CAPS,A   ,S   ,D   ,F   ,G,
        LSFT,Z   ,X   ,C   ,V   ,B   ,LGUI,
        LCTL,END ,LGUI,LALT,FN1 ,
                                      HOME,FN4 ,
                                           PGUP,
                                 BSPC,CAPS,PGDN,
        // right hand
             6   ,7   ,8   ,9   ,0   ,MINS,EQL ,
             RBRC,Y   ,U   ,I   ,O   ,P   ,BSLS,
                  H   ,J   ,K   ,L   ,SCLN,QUOT,
             FN0 ,N   ,M   ,COMM,DOT ,SLSH,RSFT,
                       RALT,LEFT,UP  ,DOWN,RGHT,
        FN3 ,END ,
        INS ,
        DEL ,ENT ,SPC
    ),

    KEYMAP(  // layout: layer 6:
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
/*
    KEYMAP(  // layout: layer N: transparent on edges ,all others are empty
        // left hand
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,NO,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO,
        TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
             TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
                  NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
             TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),

    KEYMAP(  // layout: layer N: fully transparent
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                  TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),
*/

};

/* id for user defined functions */
enum function_id {
    TEENSY_KEY,
};

/*
 * Fn action definition
 */
static const uint16_t PROGMEM fn_actions[] = {
    ACTION_DEFAULT_LAYER_SET(0),                    // FN0 - switch to Layer0
    ACTION_LAYER_MOMENTARY(1),                      // FN1 - push Layer1
    ACTION_LAYER_MOMENTARY(2),                      // FN2 - push Layer2
    ACTION_LAYER_MOMENTARY(3),                      // FN3 - push Layer3
    ACTION_LAYER_MOMENTARY(4),                      // FN4 - push Layer4
    ACTION_DEFAULT_LAYER_SET(5),                    // FN5 - switch to Layer5
    ACTION_LAYER_MOMENTARY(2),                      // FN6 - push Layer2
    ACTION_FUNCTION(TEENSY_KEY),                    // FN7 - Teensy key
    ACTION_MODS_KEY(MOD_LALT, KC_TAB),              // FN8 - Alt-Tab
};

void action_function(keyrecord_t *event, uint8_t id, uint8_t opt)
{
    print("action_function called\n");
    print("id  = "); phex(id); print("\n");
    print("opt = "); phex(opt); print("\n");
    if (id == TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(250);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

