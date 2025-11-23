# Sport Selector Module

Contains play clock configurations for sports that use play clocks (not game clocks).

## Supported Sports

- **Play Clock**: Null/Empty (255) - Reset behavior
- **Basketball**: 24 seconds, 30 seconds - Mixed behavior (reset + pause)
- **Football**: 40 seconds, 25 seconds - Reset behavior
- **Baseball**: 15 seconds, 20 seconds, 14 seconds, 19 seconds - Reset behavior
- **Volleyball**: 8 seconds - Reset behavior
- **Lacrosse**: 30 seconds - Reset behavior
- **Custom**: Configurable 1, Configurable 2 - Reset behavior (0 = configurable)

## Removed Sports

Sports with only game clocks have been excluded:
- Soccer, Hockey, Rugby, Tennis, Golf, Swimming, Track & Field, etc.

## Usage

Controller module will select from these configurations. No logic in this module.