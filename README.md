# Sport Selector Module

Configuration library for play clock timing in sports timing systems.

## Overview

Provides sport-specific play clock configurations including timing values and reset behaviors. This is a pure data module - no timing logic, just configuration lookup.

## Supported Sports

| Sport | Duration(s) | Behavior |
|-------|-------------|----------|
| **Basketball** | 24s, 30s | Mixed (reset + pause) |
| **Football** | 40s, 25s | Reset |
| **Baseball** | 14s, 15s, 19s, 20s | Reset |
| **Volleyball** | 8s | Reset |
| **Lacrosse** | 30s | Reset |
| **Custom** | Configurable | Reset/Pause/Mixed |

## API

```c
sport_config_t get_sport_config(sport_type_t sport);
sport_config_t get_custom_config(uint8_t count, playclock_behavior_t behavior);
sport_config_t get_basketball_config(uint8_t seconds);
sport_config_t get_football_config(uint8_t seconds);
sport_config_t get_baseball_config(uint8_t seconds);
```

## Integration

Controller module queries this library for sport configurations. No active timing logic contained here.