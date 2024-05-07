#pragma once
#include "CoreMinimal.h"
#include "TresCharState_WallRun.h"
#include "TresPlayerState_WallRun.generated.h"

class ATresCameraWall;
class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class UTresPlayerState_WallRun : public UTresCharState_WallRun {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pHitActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* m_pHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraWall* m_Camera;
    
    UTresPlayerState_WallRun();
};

