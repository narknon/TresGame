#pragma once
#include "CoreMinimal.h"
#include "TresAreaVolumeSimpleEventDelegate.h"
#include "TresGimmickActor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresPhotoHologramEditEffectDef.h"
#include "TresAreaVolumeThreeParamEventDelegate.h"
#include "Engine/LatentActionManager.h"
#include "TresGimmick_HologramVolumn.generated.h"

class UDataTable;
class UParticleSystem;
class USQEX_ParticleAttachDataAsset;
class ATresCharPawnBase;
class UObject;

UCLASS(Blueprintable)
class ATresGimmick_HologramVolumn : public ATresGimmickActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HologramDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HologramWeaponTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* HologramMapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MapSetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* CameraEffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CameraEffectNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* SpawnMarkerEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkerEffectShapeParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnMarkerWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SpawnMarkerChangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableMarkerChangeColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* CameraEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystem*> EditMarkerEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresPhotoHologramEditEffectDef> EditMarkerEffectDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PoseEditTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FacialEditTimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeaponEditTimeScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceCheck_PlayerHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpaceCheck_CollisionZAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PlayerLocationResetDistance;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepReactorHeightToMesh;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SpawnHologramHeightAdjust;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool KeepFocusCameraInWeaponEdit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableInputPoseOffsetSupport;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaVolumeSimpleEvent OnWarningStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaVolumeSimpleEvent OnWarningEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaVolumeSimpleEvent OnPlayerLocationReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaVolumeThreeParamEvent OnHologramLocationReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaVolumeSimpleEvent OnLoadProject;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAreaVolumeSimpleEvent OnHologramModeEnd;
    
    ATresGimmick_HologramVolumn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StartHologramModeUI();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWarningStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveWarningEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceivePlayerLocationReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveLoadProject();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHologramModeEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHologramLocationReset(ATresCharPawnBase* pTargetActor, FVector TargetLocation, bool IsPlayer);
    
    UFUNCTION(BlueprintCallable)
    void OnLocationResetEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadHologramProjectEnd();
    
    UFUNCTION(BlueprintCallable)
    void ApplyLoadProject(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void ApplyHologramLocationReset();
    
};

