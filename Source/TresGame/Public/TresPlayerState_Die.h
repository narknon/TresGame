#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Die.h"
#include "TresPlayerState_Die.generated.h"

class AActor;
class ATresCameraAnim;

UCLASS(Blueprintable)
class UTresPlayerState_Die : public UTresCharState_Die {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pDefeatActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraAnim* m_Camera;
    
public:
    UTresPlayerState_Die();
};

