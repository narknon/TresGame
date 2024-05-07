#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex005.generated.h"

class ATresAccompanyPawnBase;

UCLASS(Blueprintable)
class ATresNpcPawn_n_ex005 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRPromiseWingsBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppendCure;
    
public:
    ATresNpcPawn_n_ex005(const FObjectInitializer& ObjectInitializer);
};

