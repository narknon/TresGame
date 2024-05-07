#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresNpcPawn_n_ts202.generated.h"

class ATresAccompanyPawnBase;

UCLASS(Blueprintable)
class ATresNpcPawn_n_ts202 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRWoodyBuzzRocketBP;
    
    ATresNpcPawn_n_ts202(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetAimOffset() const;
    
};

