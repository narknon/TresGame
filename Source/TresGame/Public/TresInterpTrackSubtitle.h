#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrack.h"
#include "TresSubtitleTrackKey.h"
#include "ETresSubtitleTrack_OptionVoice.h"
#include "TresInterpTrackSubtitle.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackSubtitle : public UInterpTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresSubtitleTrack_OptionVoice> m_OptionVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_TextNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Culture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<FTresSubtitleTrackKey> m_Keys;
    
    UTresInterpTrackSubtitle();
};

