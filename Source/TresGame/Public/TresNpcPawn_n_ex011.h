#pragma once
#include "CoreMinimal.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex011.generated.h"

UCLASS(Blueprintable)
class ATresNpcPawn_n_ex011 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AppendCure;
    
public:
    ATresNpcPawn_n_ex011(const FObjectInitializer& ObjectInitializer);
};

