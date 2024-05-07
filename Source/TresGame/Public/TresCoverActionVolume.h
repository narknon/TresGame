#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "ETresCoverIdlingDirID.h"
#include "TresCoverActionVolume.generated.h"

class UTresDebugArrowComponent;

UCLASS(Blueprintable)
class TRESGAME_API ATresCoverActionVolume : public ATresVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresDebugArrowComponent* MyDirArrow;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCoverIdlingDirID m_IdlingDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableCoverDir: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_CoverCameraID;
    
public:
    ATresCoverActionVolume(const FObjectInitializer& ObjectInitializer);
};

