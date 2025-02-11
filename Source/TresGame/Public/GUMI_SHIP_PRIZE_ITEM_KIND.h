#pragma once
#include "CoreMinimal.h"
#include "GUMI_SHIP_PRIZE_ITEM_KIND.generated.h"

UENUM(BlueprintType)
enum class GUMI_SHIP_PRIZE_ITEM_KIND : uint8 {
    GM_EX_PRIZE_MIN,
    GM_EX_PRIZE_MID,
    GM_EX_PRIZE_MAX UMETA(Hidden),
    GM_HP_PRIZE_MIN,
    GM_HP_PRIZE_MID,
    GM_HP_PRIZE_MAX UMETA(Hidden),
    GM_MUNNY_PRIZE_MIN,
    GM_MUNNY_PRIZE_MID,
    GM_MUNNY_PRIZE_MAX UMETA(Hidden),
    GM_NONE,
    GM_ITEM_DEFGUMI_PARTS,
    GM_ITEM_DEFGUMI_MATERIAL,
    GM_ITEM_DEFGUMI_PATTERN,
    GM_ITEM_DEFGUMI_STICKER,
    GM_ITEM_DEFGUMI_SHIPBP,
    GM_ITEM_DEFGUMI_ETC,
    GM_ITEM_TRES_MATERIAL,
    GM_MAX UMETA(Hidden),
};

