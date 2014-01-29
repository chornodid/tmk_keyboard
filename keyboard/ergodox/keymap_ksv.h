// Layers:
// 0. English Colemak
// 1. English QWERTY
// 2. Russian ЙЦУКЕН
// 3. Symbols and 0,1 digits (available from English layouts)
// 4. Symbols and 0,1 digits (available from Russian layouts, due to limited capacity of function's array
//                            some symbols aren't implemented)
//
// 5. Cursor keys and Copy/Paste/Cut
// 6. Numpad
// 7. F-keys and Teensy key

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*****************************************************************************************************
     * Default Layer0: English layout Colemak
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |      |      |      |      |      | Ins  |           | Nmlck|      |      |      |      | PrScr| Pause  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   F  |   P  |   G  | Home |           | PgUp |   J  |   L  |  U   |   Y  |  ' " |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Caps   |   A  |   R  |   S  | T ~L5|   D  |------|           |------|   H  |   N  |  E   |   I  |   O  |        |
     * |--------+------+------+------+------+------| End  |           | PgDn |------+------+------+------+------+--------|
     * | +L2    |   Z  |   X  |   C  |   V  |   B  |      |           |      |   K  |   M  |  ,<  | . >  |  ; : |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  L1  |      |      | ~L6  | LAlt |                                       | RAlt | ~L7  |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Ins | LGui |       | RGui |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |      |       |      |      |      |
     *                                 | LSft |  ~L3 | LCtl |       | RCtl | ~L3  | RSft |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // Layer0
        // left hand
        ESC,  NO,  NO,  NO,  NO,  NO,  INS,
        TAB,  Q,   D,   R,   W,   B,   HOME,
        CAPS, A,   S,   H,   FN7, G,
        FN23, Z,   X,   M,   C,   V,   END,
        FN22, NO,  NO,  FN5, LALT,
                                       INS, LGUI,
                                            NO,
                                  FN1, FN2, LCTL,
        // right hand
        NLCK,NO,  NO,  NO,  NO,  PSCR,  PAUS,
        PGUP, J,   F,   U,   P,  QUOT,   NO,
              Y,   N,   E,   O,   I,     NO,
        PGDN, K,   L,   COMM,DOT,SCLN,    NO,
                   RALT,FN6, NO,  NO,    NO,
        RGUI, NO,
        NO,
        RCTL,FN3, FN4
    ),

    /*****************************************************************************************************
     * Layer1: English layout QWERTY
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  Esc   |      |      |      |      |      | Ins  |           | NmLck|      |      |      | \ |  | PrScr| Pause  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |  Tab   |   Q  |   W  |   E  |   R  |   T  | Home |           | PgUp |   Y  |   U  |  I   |   O  |   P  |  [ {   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  Caps  |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |  K   |   L  |  : ; |  ' "   |
     * |--------+------+------+------+------+------| End  |           | PgDn |------+------+------+------+------+--------|
     * |  +L2   |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  | , <  | . >  |  / ? |  ] }   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  L0  |      |      | ~L6  | LAlt |                                       | RAlt | ~L7  |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Ins | LGui |       | RGui |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |      |       |      |      |      |
     *                                 | LSft |  ~L3 | LCtl |       | RCtl | ~L3  | RSft |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // Layer1
        // left hand
        ESC,  NO, NO, NO, NO, NO,   INS,
        TAB,  Q,  W,  E,  R,   T,   HOME,
        CAPS, A,  S,  D,  F,   G,
        FN23, Z,  X,  C,  V,   B,   END,
        FN21, NO, NO, FN5, LALT,
                                       INS, LGUI,
                                            NO,
                                  FN1, FN2, LCTL,
        // right hand
             NLCK, NO,  NO, NO,  BSLS,PSCR,PAUS,
             PGUP, Y,   U,  I,   O,   P,   LBRC,
                   H,   J,  K,   L,   SCLN,QUOT,
             PGDN, N,   M,  COMM,DOT, SLSH,RBRC,
                        RALT,FN6,NO,  NO,  NO,
        RGUI, NO,
        NO,
        RCTL,FN3, FN4
    ),

    /****************************************************************************************************
     * Layer2: Russian layout ЙЦУКЕН
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |  \ / |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   Й  |   Ц  |   У  |  К   |   Е  |      |           |      |   Н  |   Г  |   Ш  |   Щ  |   З  |   Х    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   Ф  |   Ы  |   В  | А ~L5|   П  |------|           |------|   Р  |   О  |   Л  |   Д  |   Ж  |   Э    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  -L2   |   Я  |   Ч  |   С  |  М   |   И  |      |           |      |   Т  |   Ь  |   Б  |   Ю  |   ., |   Ъ    |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |  Del |------|       |------| Enter|      |
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |  ~L4 |      |       |      | ~L4  |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // Layer2
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   W,    E,   R,   T,   TRNS,
        TRNS,A,   S,    D,   FN11,G,
        FN23,Z,   X,    C,   V,   B, TRNS,
        NO,  TRNS,TRNS, TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS, FN8,TRNS,
        // right hand
             TRNS,TRNS, TRNS,TRNS,BSLS,TRNS,TRNS,
             TRNS,Y,    U,   I,   O,   P,   LBRC,
                  H,    J,   K,   L,   SCLN,QUOT,
             TRNS,N,    M,   COMMA,DOT,SLSH,RBRC,
                        TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS, FN9,TRNS
    ),

     /****************************************************************************************************
     * Layer3: Symbols and 0,1 digits (available from English layout)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |  - _ |   *  |  \ | |      |      |           |      |      |   #  |   !  |  / ? |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   {  |   [  |   (  |  + = |      |------|           |------|      |  ' " |   )  |   ]  |   }  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   %  |   ^  |  ` ~ |  0   |      |      |           |      |      |   1  |   $  |   @  |   &  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     */

    KEYMAP(  // Layer3
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,  NO,MINS,    8,BSLS,  NO,TRNS,
        TRNS,FN12,LBRC,    9, EQL,  NO,
        TRNS,5,      6,  GRV,  P0,  NO,TRNS,
        TRNS,TRNS,TRNS, TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,  NO,   3,   1,SLSH,  NO,TRNS,
                    NO,QUOT,   0,RBRC,FN13,TRNS,
             TRNS,  NO,  P1,   4,   2,   7,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),


     /****************************************************************************************************
     *
     * Layer4: Symbols and 0,1 digits (available from Russian layout, due to limited capacity of function's array
     *                                 some symbols aren't implemented)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |  - _ |   *  |  |   |      |      |           |      |      |   &  |   :  |   ;  |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   <  |   [  |   (  |  + = |      |------|           |------|      |   "  |   )  |   ]  |   >  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   %  |   №  |  / \ |  0   |      |      |           |      |      |   1  |   ’  |   !  |   ?  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     */

    KEYMAP(  // Layer4
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,  NO,MINS,    8,FN20,  NO,TRNS,
        TRNS,FN15,FN14,    9, EQL,  NO,
        TRNS,   5,   3, BSLS,  P0,  NO,TRNS,
        TRNS,TRNS,TRNS, TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,  NO,FN18,   6,   4,  NO,TRNS,
                    NO,   2,   0,FN17,FN16,TRNS,
             TRNS,  NO,  P1,FN19,   1,   7,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /****************************************************************************************************
     *
     * Layer5: Cursor keys and Copy/Paste/Cut
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      | Home |  Up  | End  |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------| PgUp | Left | Down | Rght | PgDn |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |      | Copy | Pste | Cut  | Undo |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     */

    KEYMAP(  // Layer5
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,  NO,  NO,   NO,  NO,  NO,TRNS,
        TRNS,  NO,  NO,   NO,TRNS,  NO,
        TRNS,  NO,  NO,   NO,  NO,  NO,TRNS,
        TRNS,TRNS,TRNS, TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,  NO,HOME,  UP, END,  NO,TRNS,
                  PGUP,LEFT,DOWN,RGHT,PGDN,TRNS,
             TRNS,  NO,FN24,FN25,FN26,FN27,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /****************************************************************************************************
     *
     * Layer6: Numpad
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |   /  |   7  |   8  |   9  |  -   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |------|           |------|   *  |   4  |   5  |   6  |  +   |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |      |      |      |      |      |      |           |      |   0  |   1  |   2  |   3  |  .   |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     */

    KEYMAP(  // Layer6
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,  NO,  NO,   NO,  NO,  NO,TRNS,
        TRNS,  NO,  NO,   NO,  NO,  NO,
        TRNS,  NO,  NO,   NO,  NO,  NO,TRNS,
        TRNS,TRNS,TRNS, TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,PSLS,  P7,  P8,  P9,PMNS,TRNS,
                  PAST,  P4,  P5,  P6,PPLS,TRNS,
             TRNS,  P0,  P1,  P2,  P3,PDOT,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /****************************************************************************************************
     *
     * Layer7: F-keys, Teensy key
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Teensy |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |  F9  |  F10 |  F11 |  F12 |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |  F5  |  F6  |  F7  |  F8  |      |------|           |------|      |      |      |      |      |    `   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |  F1  |  F2  |  F3  |  F4  |      |      |           |      |      |      |      |      |      |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *
     */

    KEYMAP(  // Layer7
        // left hand
         FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,  F9, F10, F11, F12,  NO,TRNS,
        TRNS,  F5,  F6,  F7,  F8,  NO,
        TRNS,  F1,  F2,  F3,  F4,  NO,TRNS,
        TRNS,TRNS,TRNS,TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,TRNS,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,  NO,  NO,  NO,  NO,  NO,TRNS,
                    NO,  NO,  NO,  NO,  NO,TRNS,
             TRNS,  NO,  NO,  NO,  NO,  NO,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),


/*
    // templates to copy from

    KEYMAP(  // LayerN: transparent on edges + hard-defined thumb keys, all others are empty
        // left hand
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,NO,  NO,  NO,  NO,  NO,
        TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
        TRNS,TRNS,TRNS,LALT,LGUI,
                                      TRNS,TRNS,
                                           TRNS,
                                 LCTL,LSFT,TRNS,
        // right hand
             TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                  NO,  NO,  NO,  NO,  NO,  TRNS,
             TRNS,NO,  NO,  NO,  NO,  NO,  TRNS,
                       RGUI,RALT,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,RSFT,RCTL
    ),
    KEYMAP(  // LayerN: fully transparent
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
    [0] = ACTION_FUNCTION(TEENSY_KEY),                    // FN0  - Teensy key

    [1] = ACTION_MODS_TAP_KEY(MOD_LSFT, KC_BSPC),         // FN1  = LShift with tap BackSpace
    [2] = ACTION_LAYER_TAP_KEY(3, KC_DEL),                // FN2  = momentary Layer3 (symbols) with tap Delete
    [3] = ACTION_LAYER_TAP_KEY(3, KC_ENT),                // FN3  = momentary Layer3 (symbols) with tap Enter
    [4] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),          // FN4  = RShift with tap Space

    [5] = ACTION_LAYER_MOMENTARY(6),                      // FN5  = momentary Layer6 (numpad)
    [6] = ACTION_LAYER_MOMENTARY(7),                      // FN6  = momentary Layer7 (F-keys and Teensy)

    [7] = ACTION_LAYER_TAP_KEY(5, KC_T),                  // FN7  = momentary Layer5 (cursors and copy/paste/cut) with tap T

    [8] = ACTION_LAYER_TAP_KEY(4, KC_DEL),                // FN8  = momentary Layer4 (symbols) with tap Delete
    [9] = ACTION_LAYER_TAP_KEY(4, KC_ENT),                // FN9  = momentary Layer4 (symbols) with tap Enter

    [10]= ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),             // FN10 = Shifted Slash, comma in Russian

    [11]= ACTION_LAYER_TAP_KEY(5, KC_F),                  // FN11 = momentary Layer5 (cursors and copy/paste/cut) with tap F, А in Russian

    [12]= ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN12 = Shifted [
    [13]= ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN13 = Shifted ]

    [14]= ACTION_MODS_KEY(MOD_RALT, KC_9),                // FN14 = Alted 9, [ in Russian
    [15]= ACTION_MODS_KEY(MOD_RALT, KC_COMM),             // FN15 = Alted Comma, < in Russian
    [16]= ACTION_MODS_KEY(MOD_RALT, KC_DOT),              // FN16 = Alted Dot, > in Russian
    [17]= ACTION_MODS_KEY(MOD_RALT, KC_0),                // FN17 = Alted 0, ] in Russian
    [18]= ACTION_MODS_KEY(MOD_RALT, KC_7),                // FN18 = Alted 7, & in Russian
    [19]= ACTION_MODS_KEY(MOD_RALT, KC_8),                // FN19 = Alted 8, ’ in Russian
    [20]= ACTION_MODS_KEY(MOD_RALT, KC_BSLS),             // FN20 = Alted Backslash, | in Russian

    [21]= ACTION_LAYER_SET(0, ON_BOTH),                   // FN21 - set Layer0 (Colemak)
    [22]= ACTION_LAYER_SET(1, ON_BOTH),                   // FN22 - set Layer1 (QWERTY)
    [23]= ACTION_LAYER_TOGGLE(2),                         // FN23 - toggle Layer2 (ЙЦУКЕН), available from Layer0 and Layer1

    [24]= ACTION_MODS_KEY(MOD_LCTL, KC_C),                // FN24 = COPY
    [25]= ACTION_MODS_KEY(MOD_LCTL, KC_V),                // FN25 = PASTE
    [26]= ACTION_MODS_KEY(MOD_LCTL, KC_X),                // FN26 = CUT
    [27]= ACTION_MODS_KEY(MOD_LCTL, KC_Z),                // FN27 = UNDO
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

