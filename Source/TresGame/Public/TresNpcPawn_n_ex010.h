#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresNpcPawnBase.h"
#include "TresNpcPawn_n_ex010.generated.h"

class ATresAccompanyPawnBase;

UCLASS(Blueprintable)
class ATresNpcPawn_n_ex010 : public ATresNpcPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresAccompanyPawnBase> m_FRThinkOfYouBP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_FriendPointAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_FriendPointMul;
    
    ATresNpcPawn_n_ex010(const FObjectInitializer& ObjectInitializer);
};

