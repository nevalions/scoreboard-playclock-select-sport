#include "../include/sport_selector.h"

const sport_config_t sport_configs[SPORT_COUNT] = {
    {SPORT_PLAYCLOCK_NULL, 255, "Play Clock", "Null/Empty", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_BASKETBALL_24_SEC, 24, "Basketball", "24 seconds", PLAYCLOCK_BEHAVIOR_MIXED},
    {SPORT_BASKETBALL_30_SEC, 30, "Basketball", "30 seconds", PLAYCLOCK_BEHAVIOR_MIXED},
    {SPORT_FOOTBALL_40_SEC, 40, "Football", "40 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_FOOTBALL_25_SEC, 25, "Football", "25 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_BASEBALL_15_SEC, 15, "Baseball", "15 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_BASEBALL_20_SEC, 20, "Baseball", "20 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_BASEBALL_14_SEC, 14, "Baseball", "14 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_BASEBALL_19_SEC, 19, "Baseball", "19 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_VOLLEYBALL_8_SEC, 8, "Volleyball", "8 seconds", PLAYCLOCK_BEHAVIOR_RESET},
    {SPORT_LACROSSE_30_SEC, 30, "Lacrosse", "30 seconds", PLAYCLOCK_BEHAVIOR_RESET}
};