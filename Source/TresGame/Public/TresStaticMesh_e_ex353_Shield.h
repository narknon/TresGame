#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresActorInterface.h"
#include "TresNotifyInterface.h"
#include "TresStaticMesh_e_ex353_Shield.generated.h"

class UTresRootComponent;
class UTresStaticMeshComponent;
class UParticleSystemComponent;
class ATresCharPawnBase;

UCLASS(Abstract, Blueprintable)
class ATresStaticMesh_e_ex353_Shield : public AActor, public ITresActorInterface, public ITresNotifyInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresCharPawnBase> m_LockOnActorClass;
    
public:
    ATresStaticMesh_e_ex353_Shield(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

