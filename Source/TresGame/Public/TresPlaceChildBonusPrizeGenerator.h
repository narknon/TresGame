#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresPlaceChildBonusPrizeBase.h"
#include "TresSnapData.h"
#include "UObject/NoExportTypes.h"
#include "TresPlaceChildBonusPrizeGenerator.generated.h"

class ATresPlacePrizeBase;
class AActor;

UCLASS(Blueprintable)
class ATresPlaceChildBonusPrizeGenerator : public ATresPlaceChildBonusPrizeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RandomGenerateNum_;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerateRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerateOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> GeneratorChildClass;
    
    ATresPlaceChildBonusPrizeGenerator(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    AActor* SpawnActorRandSnapPos(const FTresSnapData& Data, ATresPlacePrizeBase* bonusPlz);
    
    UFUNCTION(BlueprintCallable)
    bool GetRandSnapPos(const FTresSnapData& Data, FVector& outPos);
    
};

