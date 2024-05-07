#pragma once
#include "CoreMinimal.h"
#include "TresStateBase.h"
#include "TresCharState_RailSlide.generated.h"

class ASQEX_SplineActor;
class USQEX_SplineComponent;
class UStaticMeshComponent;
class UTresLockonTargetComponent;
class AActor;

UCLASS(Blueprintable)
class UTresCharState_RailSlide : public UTresStateBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* m_SplineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* m_pDoorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pTargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* m_pTargetActor;
    
    UTresCharState_RailSlide();
};

