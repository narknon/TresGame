#pragma once
#include "CoreMinimal.h"
#include "FsCommandSignatureDelegate.h"
#include "UObject/Object.h"
#include "ExternalTexture.h"
#include "GFxHitTestType.h"
#include "EGFxScaleMode.h"
#include "EGFxRenderTextureMode.h"
#include "InputCoreTypes.h"
#include "OnTickCommandSignatureDelegate.h"
#include "GFxWidgetBinding.h"
#include "OnStartCommandSignatureDelegate.h"
#include "OnFocusCommandSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ASValue.h"
#include "EGFxTimingMode.h"
#include "ASPerspectiveTransform.h"
#include "ASDisplayInfo.h"
#include "ASColorTransform.h"
#include "EGFxAlign.h"
#include "GFxMoviePlayer.generated.h"

class UTextureRenderTarget2D;
class UGFxObject;
class UTexture;
class UGFxMoviePlayer;
class USwfMovie;

UCLASS(BlueprintType)
class SCALEFORMUI_API UGFxMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FString SwfAssetName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGFxObject* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bDisplayWithHudOff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bEnableGammaCorrection: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint32 bAllowInput: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint32 bAllowFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bCloseOnLevelChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bOnlyOwnerFocusable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bDiscardNonOwnerInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bCaptureKeyboardInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bCaptureMouseInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bCaptureGamepadInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bCaptureTouchInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bIsSplitscreenLayoutModified: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bShowDefaultMouseCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bBlurLesserMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bHideLesserMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bIsPriorityBlurred: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bIsPriorityHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bIgnoreVisibilityEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bIgnoreBlurEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bRefreshed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bAlphaComposite: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bPerformHitTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<GFxHitTestType::Type> HitTestType;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTexture;
    
    UPROPERTY(Transient)
    UObject* ExternalInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FKey> CaptureKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<FKey> FocusIgnoreKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FExternalTexture> ExternalTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EGFxRenderTextureMode::Type> RenderTextureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FGFxWidgetBinding> WidgetBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 SplitscreenLayoutYAdjust;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFsCommandSignature OnFsCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnStartCommandSignature OnStartCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnStartCommandSignature OnCloseCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnTickCommandSignature OnTickCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnFocusCommandSignature OnFocusGainedCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FOnFocusCommandSignature OnFocusLostCommand;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<UGFxObject*> CachedMovieClipsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 bSwitchingPlayInThread: 1;
    
public:
    UGFxMoviePlayer();
    UFUNCTION(BlueprintCallable)
    bool Start(bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const FString& MovieClipName, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode);
    
    UFUNCTION(BlueprintCallable)
    void SetViewport(int32 X, int32 Y, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetView3D(const FTransform& ViewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(const FString& MovieClipName, float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(const FString& MovieClipName, float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bPausePlayback);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieCanReceiveInput(bool bCanReceiveInput);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusIgnoreKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    bool SetExternalTexture(const FString& Resource, UTexture* Texture);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(TEnumAsByte<EGFxAlign::Type> Align);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveGFxCommand(const FString& Command, const FString& Arguments);
    
    UFUNCTION(BlueprintCallable)
    static UGFxMoviePlayer* OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused);
    
    UFUNCTION()
    void OnTick(float DeltaTime);
    
    UFUNCTION()
    void OnStart();
    
    UFUNCTION()
    void OnFocusLost(int32 LocalPlayerIndex);
    
    UFUNCTION()
    void OnFocusGained(int32 LocalPlayerIndex);
    
    UFUNCTION()
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    bool LoadAndStart(const FString& InSwfAssetName, bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    FASValue Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStopI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStop(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlayI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlay(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisibility(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetView3D();
    
    UFUNCTION(BlueprintCallable)
    TArray<FASValue> GetVariableValueArray(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    FASValue GetVariableValue(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    bool GetScale(const FString& MovieClipName, float& XScale, float& YScale);
    
    UFUNCTION(BlueprintCallable)
    bool GetPosition(const FString& MovieClipName, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    FASPerspectiveTransform GetPerspective3D();
    
    UFUNCTION(BlueprintCallable)
    UGFxObject* GetMovieClip(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetDisplayTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FASDisplayInfo GetDisplayInfo(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FASColorTransform GetColorTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    void Close(bool Unload);
    
};

