#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresAnimInterface.h"
#include "TresComNpcAttachMesh.h"
#include "TresComNpcSkeletalMeshActor.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresComNpcSkeletalMeshActor : public AActor, public ITresAnimInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresComNpcAttachMesh> m_AttachMeshs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fNearCameraRange;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
public:
    ATresComNpcSkeletalMeshActor(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

