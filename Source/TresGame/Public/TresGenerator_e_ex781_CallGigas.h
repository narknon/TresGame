#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresE_EX781_CallGigasPatternParam.h"
#include "TresGenerator_e_ex781_CallGigas.generated.h"

class UTresStateBase;
class ATresEnemyPawnBase;

UCLASS(Blueprintable)
class ATresGenerator_e_ex781_CallGigas : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresE_EX781_CallGigasPatternParam> m_GigasPatternParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresStateBase>> m_GigasActionList;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_MyTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawnBase* m_EndGigas;
    
public:
    ATresGenerator_e_ex781_CallGigas(const FObjectInitializer& ObjectInitializer);
};

