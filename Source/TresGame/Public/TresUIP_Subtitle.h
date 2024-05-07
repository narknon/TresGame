#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Subtitle.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_Subtitle : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Jimaku;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SkipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Lyrics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_LyricsText;
    
public:
    UTresUIP_Subtitle();
};

