#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActor.h"
#include "TresGimmickDitherFadeInterface.h"
#include "TresGimmickSimpleStaticBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable, Config=Game)
class ATresGimmickSimpleStaticBase : public ATresGimmickActor, public ITresGimmickDitherFadeInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GimmickClipDitherParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IsGimmickClipDitherParamInvert;
    
    ATresGimmickSimpleStaticBase(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

