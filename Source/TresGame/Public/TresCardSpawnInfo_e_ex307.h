#pragma once
#include "CoreMinimal.h"
#include "TresCardAction_e_ex307.h"
#include "ETresEnemy_e_ex307_DummyCardSpawn.h"
#include "TresCardSpawnInfo_e_ex307.generated.h"

USTRUCT(BlueprintType)
struct FTresCardSpawnInfo_e_ex307 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HitPointRate;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    int32 Num[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemy_e_ex307_DummyCardSpawn::Type> DummyCardsSpawnType;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresCardAction_e_ex307 CardAction[3];
    
    TRESGAME_API FTresCardSpawnInfo_e_ex307();
};

