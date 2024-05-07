#pragma once
#include "CoreMinimal.h"
#include "TresAccompanyPawnDoFinishSignatureDelegate.h"
#include "TresCharPawnBase.h"
#include "TresAccompanyPawnAppearSignatureDelegate.h"
#include "TresAccompanyPawnDisappearSignatureDelegate.h"
#include "ETresChrUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "TresAccompanyPawnBase.generated.h"

class UTresUIDataAsset;
class UTresSkeletalMeshComponent;
class UParticleSystemComponent;
class UTresVoiceGroupSet;
class ATresPlayerControllerBase;
class UTresAnimSet;
class USoundBase;

UCLASS(Abstract, Blueprintable)
class ATresAccompanyPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAccompany;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyPenetrationEffectMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MyPenetrationParticleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresVoiceGroupSet* m_VoiceData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerControllerBase* m_PlayerController;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDispDebugInfo: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAccompanyPawnAppearSignature OnAccompanyPawnAppear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAccompanyPawnDisappearSignature OnAccompanyPawnDisappear;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAccompanyPawnDoFinishSignature OnAccompanyPawnDoFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ETresChrUniqueID, UTresAnimSet*> m_AppendAnimSetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_BGMAsset;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_MaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_MoveTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_JumpRotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_FallCheckHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_Param_bZMoveLand: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_Param_bLargeSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_LandSpawnHeight;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresCharPawnBase*> m_SlavePawnList;
    
public:
    ATresAccompanyPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAccompanyPawnDoFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAccompanyPawnDisappear();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveAccompanyPawnAppear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetSafetyPos() const;
    
};

