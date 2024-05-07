#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikCharaWind.generated.h"

class USQEX_KBD_Component;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstBonamikCharaWind : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_KBD_Component* m_KBDComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstBonamikCharaWind();
};

