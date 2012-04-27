//! Hazard types
enum HazardType { NONE=0, BAT=1, PIT=2, WUMPUS=4 };

HazardType check_for_hazards(uint8_t room_idx);
