#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresEffectAttachTrackKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_StructParticleAttachData -FallbackName=SQEX_StructParticleAttachData
#include "SQEX_AttachEffectTrackDataToDataAsset.h"
#include "SQEX_StructParticleAttachData.h"
#include "TresInterpTrackEffectAttach.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackEffectAttach : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresEffectAttachTrackKey> m_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_StructParticleAttachData> MetaAttachData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSQEX_AttachEffectTrackDataToDataAsset> AttachDataList;
    
    UTresInterpTrackEffectAttach();
};

