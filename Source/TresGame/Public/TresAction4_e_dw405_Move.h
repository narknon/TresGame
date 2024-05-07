#pragma once
#include "CoreMinimal.h"
#include "TresAction2_e_dw405_PlayMotion.h"
#include "TresAction4_e_dw405_Move.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_dw405_Move : public UTresAction2_e_dw405_PlayMotion {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_MoveAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeed;
    
public:
    UTresAction4_e_dw405_Move();
};

