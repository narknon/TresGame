#pragma once
#include "CoreMinimal.h"
#include "ETresCmnCureEffectGrpID.generated.h"

UENUM(BlueprintType)
enum class ETresCmnCureEffectGrpID : uint8 {
    TRES_CURE_GRP_NONE,
    TRES_CURE_GRP_SAVEPOINT,
    TRES_CURE_GRP_PRIZE,
    TRES_CURE_GRP_POTION,
    TRES_CURE_GRP_HIGHPOTION,
    TRES_CURE_GRP_ETHER,
    TRES_CURE_GRP_ELIXIR,
    TRES_CURE_GRP_CURE,
    TRES_CURE_GRP_CURA,
    TRES_CURE_GRP_CURAGA,
    TRES_CURE_GRP_BONUS_CURE,
    TRES_CURE_GRP_BONUS_CURA,
    TRES_CURE_GRP_BONUS_CURAGA,
    TRES_CURE_GRP_DRAIN,
    D_CURE,
    BONUS_D_CURE,
    CURE_SPRAY,
    BONUS_CURE_SPRAY,
    TRES_CURE_GRP_HIGHETHER,
    TRES_CURE_GRP_FOCUSSUPPLY,
    TRES_CURE_GRP_HIGHFOCUSSUPPLY,
    TRES_CURE_GRP_ALLCURE,
    TRES_CURE_GRP_FOCUSASPIR,
    TRES_CURE_GRP_MAX UMETA(Hidden),
};

