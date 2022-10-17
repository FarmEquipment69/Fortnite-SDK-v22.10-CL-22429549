// Class DistortedWeaponsUI.ChromeWeaponInfoWidget
// Size: 0x340 (Inherited: 0x320)
struct UChromeWeaponInfoWidget : UFortHUDElementWidget {
	struct UFortHUDContext* HUDContext; // 0x320(0x08)
	struct UFortWorldMultiItemXPComponent* CurrentXpComponent; // 0x328(0x08)
	struct UAthenaItemTierWidget* ItemTierWidget; // 0x330(0x08)
	struct UFortKeybindWidget* KeybindWidget; // 0x338(0x08)

	void OnWeaponUpgraded(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponUpgraded // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnWeaponStartUpgrading(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponStartUpgrading // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnWeaponRemoved(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponRemoved // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnWeaponEquipped(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnWeaponEquipped // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnReadyToUpgradeWeapon(enum class EFortRarity NextRarity); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnReadyToUpgradeWeapon // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void OnGainedXp(float CurrentXPPercentage); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.OnGainedXp // (Event|Protected|BlueprintEvent) // @ game+0xda071c
	void HandleXpChanged(float XPDelta, float CurrentXPPercentage); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleXpChanged // (Final|Native|Protected) // @ game+0x68ee320
	void HandleWeaponUpgraded(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUpgraded // (Final|Native|Protected) // @ game+0x68ee30c
	void HandleWeaponUnEquipped(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponUnEquipped // (Final|Native|Protected) // @ game+0x68ee2f8
	void HandleWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleWeaponEquipped // (Final|Native|Protected) // @ game+0x68ee048
	void HandleUpgradeTriggered(float ReloadTime, enum class EFortWeaponReloadType ReloadType); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandleUpgradeTriggered // (Final|Native|Protected) // @ game+0x68edf80
	void HandlePowerUpPending(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.HandlePowerUpPending // (Final|Native|Protected) // @ game+0x68edf6c
	enum class EFortRarity GetCurrentWeaponRarity(); // Function DistortedWeaponsUI.ChromeWeaponInfoWidget.GetCurrentWeaponRarity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x68edf48
};

