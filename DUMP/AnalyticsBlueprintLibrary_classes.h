// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAnalyticsBlueprintLibrary : UBlueprintFunctionLibrary {

	bool StartSessionWithAttributes(struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSessionWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad4180
	bool StartSession(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.StartSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad415c
	void SetUserId(struct FString UserId); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetUserId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad400c
	void SetSessionId(struct FString SessionId); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetSessionId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad3ebc
	void SetLocation(struct FString Location); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetLocation // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad3d6c
	void SetGender(struct FString Gender); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetGender // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad3c1c
	void SetBuildInfo(struct FString BuildInfo); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetBuildInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad3acc
	void SetAge(int32_t Age); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.SetAge // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad3a60
	void RecordSimpleItemPurchaseWithAttributes(struct FString ItemId, int32_t ItemQuantity, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchaseWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad3874
	void RecordSimpleItemPurchase(struct FString ItemId, int32_t ItemQuantity); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleItemPurchase // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad36e0
	void RecordSimpleCurrencyPurchaseWithAttributes(struct FString GameCurrencyType, int32_t GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchaseWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad34f4
	void RecordSimpleCurrencyPurchase(struct FString GameCurrencyType, int32_t GameCurrencyAmount); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordSimpleCurrencyPurchase // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad3360
	void RecordProgressWithFullHierarchyAndAttributes(struct FString ProgressType, struct TArray<struct FString>& ProgressNames, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithFullHierarchyAndAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad3158
	void RecordProgressWithAttributes(struct FString ProgressType, struct FString ProgressName, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgressWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad2e98
	void RecordProgress(struct FString ProgressType, struct FString ProgressName); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordProgress // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad2c34
	void RecordItemPurchase(struct FString ItemId, struct FString Currency, int32_t PerItemCost, int32_t ItemQuantity); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordItemPurchase // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad295c
	void RecordEventWithAttributes(struct FString EventName, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad27b0
	void RecordEventWithAttribute(struct FString EventName, struct FString AttributeName, struct FString AttributeValue); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEventWithAttribute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad2448
	void RecordEvent(struct FString EventName); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordEvent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad22f8
	void RecordErrorWithAttributes(struct FString Error, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordErrorWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad214c
	void RecordError(struct FString Error); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordError // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad1ffc
	void RecordCurrencyPurchase(struct FString GameCurrencyType, int32_t GameCurrencyAmount, struct FString RealCurrencyType, float RealMoneyCost, struct FString PaymentProvider); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyPurchase // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad1c18
	void RecordCurrencyGivenWithAttributes(struct FString GameCurrencyType, int32_t GameCurrencyAmount, struct TArray<struct FAnalyticsEventAttr>& Attributes); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGivenWithAttributes // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x9ad1a2c
	void RecordCurrencyGiven(struct FString GameCurrencyType, int32_t GameCurrencyAmount); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.RecordCurrencyGiven // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad185c
	struct FAnalyticsEventAttr MakeEventAttribute(struct FString AttributeName, struct FString AttributeValue); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.MakeEventAttribute // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x9ad15c8
	struct FString GetUserId(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetUserId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad1554
	struct FString GetSessionId(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.GetSessionId // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad14e0
	void FlushEvents(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.FlushEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad1458
	void EndSession(); // Function AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary.EndSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x9ad13d0
};

