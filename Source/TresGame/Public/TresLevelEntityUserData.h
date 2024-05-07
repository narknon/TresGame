#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntityUserData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct TRESGAME_API FTresLevelEntityUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* m_UserObject;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_UserParams[4];
    
    FTresLevelEntityUserData();
};

