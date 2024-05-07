#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackFloatBase.h"
#include "TresInterpTrackBonamikWindControlKey.h"
#include "TresInterpTrackBonamikWindControl.generated.h"

class ASQEX_BonamikWind_Actor;

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackBonamikWindControl : public UInterpTrackFloatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresInterpTrackBonamikWindControlKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_BonamikWind_Actor* m_BonamikWindActor;
    
    UTresInterpTrackBonamikWindControl();
};

