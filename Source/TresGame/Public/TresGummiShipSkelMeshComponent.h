#pragma once
#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TresGummiShipSkelMeshComponent.generated.h"

class UTresGummiShipAnimInstance;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGummiShipSkelMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    UTresGummiShipAnimInstance* MyAnimInstance;
    
public:
    UTresGummiShipSkelMeshComponent();
};

