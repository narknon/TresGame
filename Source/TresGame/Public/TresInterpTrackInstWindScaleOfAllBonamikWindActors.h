#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstWindScaleOfAllBonamikWindActors.generated.h"

class USQEX_BonamikWind_Component;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstWindScaleOfAllBonamikWindActors : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USQEX_BonamikWind_Component*> m_WindComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_OriginalValues;
    
    UTresInterpTrackInstWindScaleOfAllBonamikWindActors();
};

