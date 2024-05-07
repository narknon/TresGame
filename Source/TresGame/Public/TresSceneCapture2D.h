#pragma once
#include "CoreMinimal.h"
#include "Engine/SceneCapture2D.h"
#include "UObject/NoExportTypes.h"
#include "TresSceneCapture2D.generated.h"

class UTresInterpTrackInstSceneCapture2D;

UCLASS(Blueprintable)
class TRESGAME_API ATresSceneCapture2D : public ASceneCapture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresInterpTrackInstSceneCapture2D* m_SceneCapture2DTrackInst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_Dirty;
    
    ATresSceneCapture2D(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SetupMirror(FVector V);
    
};

