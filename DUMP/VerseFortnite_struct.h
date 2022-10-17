// Enum VerseFortnite.EPlayerSettingStateInternal
enum class EPlayerSettingStateInternal : uint8 {
	PlayerUseDefault = 0,
	PlayerIsAllowed = 1,
	PlayerIsDisallowed = 2,
	EPlayerSettingStateInternal_MAX = 3
};

// ScriptStruct VerseFortnite.DynamicHUDPulseEvent
// Size: 0x08 (Inherited: 0x00)
struct FDynamicHUDPulseEvent {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct VerseFortnite.PlayerScore
// Size: 0x40 (Inherited: 0x00)
struct FPlayerScore {
	struct FUniqueNetIdRepl Player; // 0x00(0x30)
	uint32_t Eliminations; // 0x30(0x04)
	uint32_t Wins; // 0x34(0x04)
	uint32_t Points; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

