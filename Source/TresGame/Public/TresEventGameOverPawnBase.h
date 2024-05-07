#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEventPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEventGameOverPawnBase.generated.h"

class UParticleSystemComponent;
class ATresCameraAnim;
class UCameraAnim;
class UParticleSystem;
class ATresKHShaderController;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresEventGameOverPawnBase : public ATresEventPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAnim* m_CameraAnimAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LightEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_LightLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresKHShaderController> m_GameOverKHS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraAnim* m_Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_pEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresKHShaderController* m_pKHS;
    
public:
    ATresEventGameOverPawnBase(const FObjectInitializer& ObjectInitializer);
};

