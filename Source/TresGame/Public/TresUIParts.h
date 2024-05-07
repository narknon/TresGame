#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUIPreloadInfo.h"
#include "TresUIParts.generated.h"

class UTresMoviePlayer;
class UTresASProxy;
class UTresASProxyTresCoreUIComponent;
class UTresUIManager;
class UTresASProxyTresControlsFloatTexture;
class USwfMovie;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIParts : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString m_strAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresMoviePlayer* m_pMoviePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresCoreUIComponent* m_ASProxyUIComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_pUIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresUIPreloadInfo m_PreloadInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresASProxyTresControlsFloatTexture*> m_FloatTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresASProxy*> m_ManagedASProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USwfMovie* m_SwfMovie;
    
public:
    UTresUIParts();
    UFUNCTION(BlueprintCallable)
    int32 OnLoadIcon(const FString& Path);
    
    UFUNCTION(BlueprintCallable)
    bool OnListRefreshData(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 ListIndex, int32 PrevListIndex);
    
    UFUNCTION(BlueprintCallable)
    bool OnListIndexChange(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 ListIndex, int32 PrevListIndex);
    
    UFUNCTION(BlueprintCallable)
    bool OnFocusOut(UGFxObject* UIComponent, bool MoveNext);
    
    UFUNCTION(BlueprintCallable)
    bool OnFocusIn(UGFxObject* UIComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnFloatTextureCallback(int32 ID, UGFxObject* FloatTextureMovieClip);
    
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    bool OnAnchorOut(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 Index, int32 Dir);
    
    UFUNCTION(BlueprintCallable)
    bool OnAnchorIn(UGFxObject* UIComponent, UGFxObject* AnchorComponent, int32 Index, int32 Dir);
    
};

