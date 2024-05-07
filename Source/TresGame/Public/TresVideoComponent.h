#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TresVideoPlayFinishSignatureDelegate.h"
#include "TresVideoPrepareFinishSignatureDelegate.h"
#include "TresVideoComponent.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresVideoComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresVideoPlayFinishSignature OnVideoPlayFinish;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresVideoPrepareFinishSignature OnVideoPrepareFinish;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* m_TextureRenderTarget2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_MovieFilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Prepare;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_Loop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ForUI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsPrepared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_RetryWhenPlayTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 m_RetryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsPrepareCancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsReserveStopVideo;
    
public:
    UTresVideoComponent();
    UFUNCTION(BlueprintCallable)
    void StopVideo();
    
    UFUNCTION(BlueprintCallable)
    void ResumeVideo();
    
    UFUNCTION(BlueprintCallable)
    void ReserveStopVideo();
    
    UFUNCTION(BlueprintCallable)
    void PrepareVideo();
    
    UFUNCTION(BlueprintCallable)
    void PlayVideo();
    
    UFUNCTION(BlueprintCallable)
    void PauseVideo();
    
    UFUNCTION(BlueprintCallable)
    bool IsPreparing();
    
    UFUNCTION(BlueprintCallable)
    bool IsPrepared();
    
    UFUNCTION(BlueprintCallable)
    bool IsPreparable();
    
    UFUNCTION(BlueprintCallable)
    void CancelPrepareVideo();
    
};

