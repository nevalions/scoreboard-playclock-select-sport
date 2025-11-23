# ESP-IDF Sport Selector Module

## Code Style Guidelines
- ESP-IDF C conventions with include guards
- Enums: `SPORT_ENUM_NAME` (UPPER_SNAKE_CASE)
- Structs: `sport_config_t` (lower_snake_case with _t suffix)
- Functions: `sport_function_name` (lower_snake_case)
- Use `uint8_t` for timing values, `bool` for flags
- Initialize structs with `{0}` then assign fields
- Static const arrays for lookup tables
- Return default config for invalid inputs
- No inline comments unless explaining complex logic