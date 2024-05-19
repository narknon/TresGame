#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefCampItem.generated.h"

UENUM(BlueprintType)
enum class ETresItemDefCampItem : uint8 {
    NOTHING,
    TENT UMETA(DisplayName = "Tent"),
    POWERUP UMETA(DisplayName = "Power Up"),
    MAGICUP UMETA(DisplayName = "Magic Up"),
    GUARDUP UMETA(DisplayName = "Guard Up"),
    APUP UMETA(DisplayName = "AP Up"),
    _MAX = 0x8,
};

