#pragma once
#include "CoreMinimal.h"
#include "TresRailSlideMoveInfo.generated.h"

class ASQEX_SplineActor;
class USQEX_SplineComponent;

USTRUCT(BlueprintType)
struct FTresRailSlideMoveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_StartActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_EndActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* m_Component;
    
    TRESGAME_API FTresRailSlideMoveInfo();
};

