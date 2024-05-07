#pragma once
#include "CoreMinimal.h"
#include "TresMapEffectActor.h"
#include "TresRaButterflyActor.generated.h"

class UTresDebugEditorRaButterflyActorComponent;

UCLASS(Blueprintable)
class ATresRaButterflyActor : public ATresMapEffectActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugEditorRaButterflyActorComponent* EditorInfoComp;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscapeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BattleModeCheckDistance;
    
    ATresRaButterflyActor(const FObjectInitializer& ObjectInitializer);
};

