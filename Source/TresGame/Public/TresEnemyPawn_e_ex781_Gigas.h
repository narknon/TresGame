#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "ColorTypes_e_ex781Gigas.h"
#include "TresEnemyPawn_e_ex781_Gigas.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex781_Gigas : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ColorTypes_e_ex781Gigas> m_ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_UniqueEffectDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DestroyDist;
    
    ATresEnemyPawn_e_ex781_Gigas(const FObjectInitializer& ObjectInitializer);
};

