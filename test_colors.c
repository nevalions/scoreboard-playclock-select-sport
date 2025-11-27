#include <stdio.h>
#include "include/sport_selector.h"
#include "include/colors.h"

int main() {
    // Test basketball color (should always be red)
    color_t basketball_color = get_sport_color(COLOR_SCHEME_BASKETBALL, 30);
    printf("Basketball color (30s): R=%d, G=%d, B=%d\n", basketball_color.r, basketball_color.g, basketball_color.b);
    
    // Test football color (should change based on time)
    color_t football_color_10 = get_sport_color(COLOR_SCHEME_FOOTBALL, 10);
    printf("Football color (10s): R=%d, G=%d, B=%d\n", football_color_10.r, football_color_10.g, football_color_10.b);
    
    color_t football_color_3 = get_sport_color(COLOR_SCHEME_FOOTBALL, 3);
    printf("Football color (3s): R=%d, G=%d, B=%d\n", football_color_3.r, football_color_3.g, football_color_3.b);
    
    // Test baseball color (should always be orange)
    color_t baseball_color = get_sport_color(COLOR_SCHEME_BASEBALL, 20);
    printf("Baseball color (20s): R=%d, G=%d, B=%d\n", baseball_color.r, baseball_color.g, baseball_color.b);
    
    // Test sport config
    sport_config_t basketball_config = get_sport_config(SPORT_BASKETBALL_24_SEC);
    printf("Basketball config color scheme: %d\n", basketball_config.color_scheme);
    
    return 0;
}