#pragma once
#include "CoreMinimal.h"
#include "TresEnemyXIIILPawnBase.h"
#include "TresEnemyPawn_e_ex781_Avatar.generated.h"

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex781_Avatar : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeOutSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeMaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VisibleAfterImageTime;
    
    ATresEnemyPawn_e_ex781_Avatar(const FObjectInitializer& ObjectInitializer);
};

