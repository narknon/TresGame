#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickCA_TickControlManager.generated.h"

UCLASS(Blueprintable)
class ATresGimmickCA_TickControlManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_UpdateNumPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ActiveNumPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ReserveSize;
    
public:
    ATresGimmickCA_TickControlManager(const FObjectInitializer& ObjectInitializer);
};

