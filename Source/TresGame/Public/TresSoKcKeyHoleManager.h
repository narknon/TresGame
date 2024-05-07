#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/LatentActionManager.h"
#include "TresSoKcKeyHoleManager.generated.h"

class UObject;
class ATresSoKcKeyHoleManager;

UCLASS(Blueprintable)
class ATresSoKcKeyHoleManager : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKeyHoleFirstConnectedSignature);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FBgmChangeThresholdOverSignature, uint8, EventDispatchCount);
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKeyHoleFirstConnectedSignature _OnKeyHoleFirstConnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBgmChangeThresholdOverSignature _OnBgmChangeThresholdOver;
    
public:
    ATresSoKcKeyHoleManager(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATresSoKcKeyHoleManager* Get(const UObject* WorldContext);
    
private:
    UFUNCTION(BlueprintCallable)
    static void _WaitAllKeyHoleGimmickRegister(const UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static bool _SetConnectNormaKeyHoleCount(const UObject* WorldContextObject, int32 NormaKeyHoleCount);
    
    UFUNCTION(BlueprintCallable)
    static bool _SetAllKeyHoleGimmicksVisibility(const UObject* WorldContextObject, bool bVisibility);
    
};

