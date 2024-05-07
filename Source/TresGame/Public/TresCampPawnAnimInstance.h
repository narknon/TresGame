#pragma once
#include "CoreMinimal.h"
#include "ETresCampPawnAnimTypeID.h"
#include "TresCharAnimInstance.h"
#include "TresCampPawnAnimInstance.generated.h"

class ATresCampPawnBase;

UCLASS(Blueprintable, NonTransient)
class UTresCampPawnAnimInstance : public UTresCharAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<ETresCampPawnAnimTypeID> m_AnimType;
    
public:
    UTresCampPawnAnimInstance();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresCampPawnBase* TryGetTresCampPawnOwner();
    
};

