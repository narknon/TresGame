#pragma once
#include "CoreMinimal.h"
#include "TresParamDispatcherPostInterpChangeDelegate.h"
#include "TresParamDispatcherUpdateDelegate.h"
#include "GameFramework/Actor.h"
#include "TresParamDispatcher.generated.h"

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresParamDispatcher : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DispatcherTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresParamDispatcherPostInterpChangeDelegate OnPostInterpChangeDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresParamDispatcherUpdateDelegate OnUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_Dirty;
    
    ATresParamDispatcher(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
};

