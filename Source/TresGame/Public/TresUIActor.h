#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresUIActorMaterialParamSettingScalar.h"
#include "TresUIActorMaterialParamSettingCoefficient.h"
#include "TresUIActor.generated.h"

class UTresEffectAttachComponent;
class UTresSkeletalMeshComponent;
class USceneCaptureComponent2D;

UCLASS(Blueprintable)
class ATresUIActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_BonamikPreRollNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUIActorMaterialParamSettingScalar> m_MaterialParamSettingsScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresUIActorMaterialParamSettingCoefficient> m_MaterialParamSettingsCoefficient;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* SceneCaptureComponent2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 effectGroupID;
    
    ATresUIActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetLinkMeshComponent(UTresSkeletalMeshComponent* LinkMeshComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEventBP(const FName& EventName);
    
    UFUNCTION(BlueprintCallable)
    void NotifyEventBP(const FName& EventName);
    
};

