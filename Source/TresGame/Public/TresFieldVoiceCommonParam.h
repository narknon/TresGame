#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceCommonParam.generated.h"

UCLASS(Blueprintable)
class UTresFieldVoiceCommonParam : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ExecuteNum;
    
    UTresFieldVoiceCommonParam();
};

