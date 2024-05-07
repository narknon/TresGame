#pragma once
#include "CoreMinimal.h"
#include "TresCharState_HoldCamera.h"
#include "TresPlayerState_HoldCamera.generated.h"

class ATresCameraHoldCamera;
class ATresGimmickRA_PuddingManager;
class UTresHiddenMickeyComponent;
class UTresPhotoMissionComponent;
class UTresNpcSmartphoneCameraComponent;

UCLASS(Blueprintable)
class UTresPlayerState_HoldCamera : public UTresCharState_HoldCamera {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCameraHoldCamera* m_pCamera;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresHiddenMickeyComponent> m_pCurrentLuckyMarker;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresHiddenMickeyComponent> m_pTargetLuckyMarker;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UTresPhotoMissionComponent>> m_pTargetPhotoMissionMarkerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresGimmickRA_PuddingManager> m_pPudManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ShotTargetList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_MissedTargetList;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresNpcSmartphoneCameraComponent> m_pNpcReactionMarker;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresNpcSmartphoneCameraComponent> m_pNpcTargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_SelfieActionIdxList;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UTresHiddenMickeyComponent>> m_pDetectedLuckyMarkerList;
    
public:
    UTresPlayerState_HoldCamera();
};

