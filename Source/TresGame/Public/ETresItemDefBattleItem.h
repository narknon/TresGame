#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefBattleItem.generated.h"

UENUM(BlueprintType)
enum class ETresItemDefBattleItem : uint8 {
    NOTHING,
    BI_POTION UMETA(DisplayName = "Potion"),
    BI_HIGHPOTION UMETA(DisplayName = "Hi-Potion"),
    BI_MEGAPOTION UMETA(DisplayName = "Mega-Potion"),
    BI_ETHER UMETA(DisplayName = "Ether"),
    BI_MEGAETHER UMETA(DisplayName = "Mega-Ether"),
    BI_ELIXIR UMETA(DisplayName = "Elixir"),
    BI_LASTELIXIR UMETA(DisplayName = "Megalixir"),
    BI_FOCUSSUPPLY UMETA(DisplayName = "Refocuser"),
    BI_HIGHFOCUSSUPPLY UMETA(DisplayName = "Hi-Refocuser"),
    BI_ALLCURE UMETA(DisplayName = "Panacea"),
    BI_HIGHETHER UMETA(DisplayName = "Hi-Ether"),
    _MAX = 0x10,
};

