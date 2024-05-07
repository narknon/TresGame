#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresGimmickRA_PuddingManager.generated.h"

class ATresGimmickRA_Pudding_ControlActor;

UCLASS(Blueprintable)
class ATresGimmickRA_PuddingManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PhotoCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldCameraWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GameEndWaitTime;
    
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresGimmickRA_Pudding_ControlActor>> m_ControlActorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<ATresGimmickRA_Pudding_ControlActor> m_pShotRaPuddingControlActor;
    
public:
    ATresGimmickRA_PuddingManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetGameStart();
    
    UFUNCTION(BlueprintCallable)
    void SetGameEnd();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRaPuddingPhotos();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTakePhotoSucceed(int32 Score, bool bBestShot);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveMissionCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDebugForceReload();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlbumFreeSpaceEnough() const;
    
};

