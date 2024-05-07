#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresInterpTrackSceneCapture2DKey.h"
#include "TresInterpTrackSceneCapture2D.generated.h"

class ATresSceneCapture2D;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackSceneCapture2D : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseTresSceneManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresSceneCapture2D* m_SceneCapture2D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackSceneCapture2DKey> m_Keys;
    
    UTresInterpTrackSceneCapture2D();
};

