#pragma once
#include "CoreMinimal.h"
#include "TresGimmickGeneratorBase.h"
#include "ETresMI_04_DoorGeneratorMoveType.h"
#include "TresGimmickGeneratorMI_04_Base.generated.h"

class UTresInstancedStaticMeshComponent;
class ASQEX_SplineActor;

UCLASS(Abstract, Blueprintable)
class ATresGimmickGeneratorMI_04_Base : public ATresGimmickGeneratorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_pSplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresInstancedStaticMeshComponent* InstancedStaticMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresMI_04_DoorGeneratorMoveType MoveType;
    
public:
    ATresGimmickGeneratorMI_04_Base(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetSplineActor(ASQEX_SplineActor* splineActor);
    
};

