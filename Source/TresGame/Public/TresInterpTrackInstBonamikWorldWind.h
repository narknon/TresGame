#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInst.h"
#include "TresInterpTrackInstBonamikWorldWind.generated.h"

class USQEX_KBD_Component;
class USQEX_BonamikWind;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstBonamikWorldWind : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_KBD_Component* m_KBDComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_BonamikWind* m_pBonamikWind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LastKeyIndex;
    
    UTresInterpTrackInstBonamikWorldWind();
};

