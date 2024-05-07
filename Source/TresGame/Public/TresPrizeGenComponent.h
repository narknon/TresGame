#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeVelocityData.h"
#include "TresGimmickComponentBase.h"
#include "TresDamageInfo.h"
#include "TresGimmickDropPrizeTable.h"
#include "TresPrizeGenComponent.generated.h"

class UTresGimmickDropPrizeSet;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresPrizeGenComponent : public UTresGimmickComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGimmickDropPrizeSet* m_PrizeDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGimmickDropPrizeTable> m_PrizeDatas;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickPrizeVelocityData m_PrizeVelocityData;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PrizeLivingTime;
    
public:
    UTresPrizeGenComponent();
    UFUNCTION(BlueprintCallable)
    void BP_SpawnPrize(int32 InIndex, bool InForMagicDraw);
    
    UFUNCTION(BlueprintCallable)
    void BP_SpawnFoodstuffPrize(FName InKeyName, bool InForMagicDraw);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetPrizeDataNum() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_CheckMagicAttack(const FTresDamageInfo& InDamageInfo) const;
    
};

