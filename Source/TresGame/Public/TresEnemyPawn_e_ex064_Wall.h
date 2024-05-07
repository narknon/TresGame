#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresNotifyInterface.h"
#include "e_ex064_WallParam.h"
#include "TresEnemyPawn_e_ex064_Wall.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresEnemyPawn_e_ex064_Wall : public AActor, public ITresNotifyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    Fe_ex064_WallParam m_Param;
    
public:
    ATresEnemyPawn_e_ex064_Wall(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

