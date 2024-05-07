#pragma once
#include "CoreMinimal.h"
#include "TresVoice_e_ex352.generated.h"

class USoundBase;

USTRUCT(BlueprintType)
struct FTresVoice_e_ex352 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Param;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_Voice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSound3D;
    
    TRESGAME_API FTresVoice_e_ex352();
};

