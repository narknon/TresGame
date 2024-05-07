#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProj_MagicBase.h"
#include "TresProj_MagicBlizzard.generated.h"

class ATresDecalMeshSplineActor;
class ATresRailSlideActor;

UCLASS(Abstract, Blueprintable)
class ATresProj_MagicBlizzard : public ATresProj_MagicBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GenerateRailHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GenerateRailLife;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresDecalMeshSplineActor> m_SplineMeshActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoFadeInOutOnShutdown: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresDecalMeshSplineActor* m_SplineMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresRailSlideActor* m_PrevPutRailSlideActor;
    
public:
    ATresProj_MagicBlizzard(const FObjectInitializer& ObjectInitializer);
};

