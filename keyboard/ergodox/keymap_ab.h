// Layers:
// 0. English Workman
// 1. English QWERTY
// 2. Russian Диктор (with switched А-Ы)
// 3. Russian ЙЦУКЕН
// 4. Symbols and 0,1 digits (available from English layouts)
// 5. Symbols and 0,1 digits (available from Russian layouts, due to limited capacity of function's array
//                            some symbols aren't implemented)
//
// 6. Cursor keys and Copy/Paste/Cut
// 7. Numpad
// 8. F-keys and Teensy key

//  TODO
//  . Ukrainian letters І, Ї, Є?
//  . Macroses for 1C?

static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*****************************************************************************************************
     * Default Layer0: English layout Workman
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * | Esc    |      |      |      |      |      | Ins  |           | Nmlck|      |      |      |      | PrScr| Pause  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   D  |   R  |   W  |   B  | Home |           | PgUp |   J  |   F  |  U   |   P  |  ' " |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | Caps   |   A  |   S  |   H  | T ~L6|   G  |------|           |------|   Y  |   N  |  E   |   O  |   I  |        |
     * |--------+------+------+------+------+------| End  |           | PgDn |------+------+------+------+------+--------|
     * | +L2    |   Z  |   X  |   M  |   C  |   V  |      |           |      |   K  |   L  |  ,<  | . >  |  ; : |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  L1  |      |      | ~L7  | LAlt |                                       | RAlt | ~L8  |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Ins | LGui |       | RGui |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |      |       |      |      |      |
     *                                 | LSft |  ~L4 | LCtl |       | RCtl | ~L4  | RSft |
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
        PGUP, J,   F,   U,   P,   NO,    NO,
              Y,   N,   E,   O,   I,     NO,
        PGDN, K,   L,   COMM,DOT, NO,    NO,
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
     * |  +L3   |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  | , <  | . >  |  / ? |  ] }   |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |  L0  |      |      | ~L7  | LAlt |                                       | RAlt | ~L8  |      |      |      |
     *   |      |      |      |      |      |                                       |      |      |      |      |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  Ins | LGui |       | RGui |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 | BkSp |  Del |------|       |------| Enter| Space|
     *                                 |      |      |      |       |      |      |      |
     *                                 | LSft |  ~L4 | LCtl |       | RCtl | ~L4  | RSft |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // Layer1
        // left hand
        ESC,  NO, NO, NO, NO, NO,   INS,
        TAB,  Q,  W,  E,  R,   T,   HOME,
        CAPS, A,  S,  D,  F,   G,
        FN24, Z,  X,  C,  V,   B,   END,
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
     * Layer2: Russian layout Диктор (with switched А-Ы)
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |      |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   Ц  |  ЬЪ  |   Я  |  ,   |   .  |      |           |      |   З  |   В  |   К  |   Д  |   Ч  |   Ш    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   У  |   И  |   Е  | О ~L6|   Ы  |------|           |------|   Л  |   Н  |   Т  |   С  |   Р  |   Й    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  -L2   |   Ф  |   Э  |   Х  |  А   |   Ю  |      |           |      |   Б  |   М  |   П  |   Г  |   Ж  |   Щ    |
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
     *                                 |      |  ~L5 |      |       |      | ~L5  |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // Layer2
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,W,   M,    Z,   SLSH,FN10,TRNS,
        TRNS,E,   B,    T,   FN11,S,
        FN23,A,   QUOT, LBRC,F,   DOT, TRNS,
        NO  ,TRNS,TRNS, TRNS,TRNS,
                                      TRNS,TRNS,
                                           TRNS,
                                 TRNS,FN8, TRNS,
        // right hand
             TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,TRNS,
             TRNS,P,    D,   R,   L,   X,   I,
                  K,    Y,   N,   C,   H,   Q,
             TRNS,COMMA,V,   G,   U,   SCLN,O,
                        TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,FN9, TRNS
    ),

    /****************************************************************************************************
     * Layer3: Russian layout ЙЦУКЕН
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |      |      |      |      |      |      |           |      |      |      |      |  \ / |      |        |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   Й  |   Ц  |   У  |  К   |   Е  |      |           |      |   Н  |   Г  |   Ш  |   Щ  |   З  |   Х    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   Ф  |   Ы  |   В  |  А   |   П  |------|           |------|   Р  |   О  |   Л  |   Д  |   Ж  |   Э    |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |  -L3   |   Я  |   Ч  |   С  |  М   |   И  |      |           |      |   Т  |   Ь  |   Б  |   Ю  |   ., |   Ъ    |
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
     *                                 |      |  ~L5 |      |       |      | ~L5  |      |
     *                                 `--------------------'       `--------------------'
     */

    KEYMAP(  // Layer3
        // left hand
        TRNS,TRNS,TRNS, TRNS,TRNS,TRNS,TRNS,
        TRNS,Q,   W,    E,   R,   T,   TRNS,
        TRNS,A,   S,    D,   F,   G,
        FN24,Z,   X,    C,   V,   B, TRNS,
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
     * Layer4: Symbols and 0,1 digits (available from English layout)
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

    KEYMAP(  // Layer4
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
     * Layer5: Symbols and 0,1 digits (available from Russian layout, due to limited capacity of function's array
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

    KEYMAP(  // Layer5
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
     * Layer6: Cursor keys and Copy/Paste/Cut
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

    KEYMAP(  // Layer6
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
             TRNS,  NO,FN25,FN26,FN27,FN28,TRNS,
                       TRNS,TRNS,TRNS,TRNS,TRNS,
        TRNS,TRNS,
        TRNS,
        TRNS,TRNS,TRNS
    ),

    /****************************************************************************************************
     *
     * Layer7: Numpad
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

    KEYMAP(  // Layer7
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
     * Layer8: F-keys, Teensy key
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

    KEYMAP(  // Layer8
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
    [2] = ACTION_LAYER_TAP_KEY(4, KC_DEL),                // FN2  = momentary Layer4 (symbols) with tap Delete
    [3] = ACTION_LAYER_TAP_KEY(4, KC_ENT),                // FN3  = momentary Layer4 (symbols) with tap Enter
    [4] = ACTION_MODS_TAP_KEY(MOD_RSFT, KC_SPC),          // FN4  = RShift with tap Space

    [5] = ACTION_LAYER_MOMENTARY(7),                      // FN5  = momentary Layer7 (numpad)
    [6] = ACTION_LAYER_MOMENTARY(8),                      // FN6  = momentary Layer8 (F-keys and Teensy)

    [7] = ACTION_LAYER_TAP_KEY(6, KC_T),                  // FN7  = momentary Layer6 (cursors and copy/paste/cut) with tap T

    [8] = ACTION_LAYER_TAP_KEY(5, KC_DEL),                // FN8  = momentary Layer5 (symbols) with tap Delete
    [9] = ACTION_LAYER_TAP_KEY(5, KC_ENT),                // FN9  = momentary Layer5 (symbols) with tap Enter

    [10]= ACTION_MODS_KEY(MOD_LSFT, KC_SLSH),             // FN10 = Shifted Slash, comma in Russian

    [11]= ACTION_LAYER_TAP_KEY(6, KC_J),                  // FN11 = momentary Layer6 (cursors and copy/paste/cut) with tap J, О in Russian

    [12]= ACTION_MODS_KEY(MOD_LSFT, KC_LBRC),             // FN12 = Shifted [
    [13]= ACTION_MODS_KEY(MOD_LSFT, KC_RBRC),             // FN13 = Shifted ]

    [14]= ACTION_MODS_KEY(MOD_RALT, KC_9),                // FN14 = Alted 9, [ in Russian
    [15]= ACTION_MODS_KEY(MOD_RALT, KC_COMM),             // FN15 = Alted Comma, < in Russian
    [16]= ACTION_MODS_KEY(MOD_RALT, KC_DOT),              // FN16 = Alted Dot, > in Russian
    [17]= ACTION_MODS_KEY(MOD_RALT, KC_0),                // FN17 = Alted 0, ] in Russian
    [18]= ACTION_MODS_KEY(MOD_RALT, KC_7),                // FN18 = Alted 7, & in Russian
    [19]= ACTION_MODS_KEY(MOD_RALT, KC_8),                // FN19 = Alted 8, ’ in Russian
    [20]= ACTION_MODS_KEY(MOD_RALT, KC_BSLS),             // FN20 = Alted Backslash, | in Russian

    [21]= ACTION_LAYER_SET(0, ON_BOTH),                   // FN21 - set Layer0 (Workman)
    [22]= ACTION_LAYER_SET(1, ON_BOTH),                   // FN22 - set Layer1 (QWERTY)
    [23]= ACTION_LAYER_TOGGLE(2),                         // FN23 - toggle Layer2 (Диктор), available from Layer0
    [24]= ACTION_LAYER_TOGGLE(3),                         // FN24 - toggle Layer3 (ЙЦУКЕН), available from Layer1

    [25]= ACTION_MODS_KEY(MOD_LCTL, KC_C),                // FN25 = COPY
    [26]= ACTION_MODS_KEY(MOD_LCTL, KC_V),                // FN26 = PASTE
    [27]= ACTION_MODS_KEY(MOD_LCTL, KC_X),                // FN27 = CUT
    [28]= ACTION_MODS_KEY(MOD_LCTL, KC_Z),                // FN28 = UNDO
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

