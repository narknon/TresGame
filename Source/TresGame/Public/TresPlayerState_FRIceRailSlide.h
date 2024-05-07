#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRIceRailSlide.h"
#include "TresPlayerState_FRIceRailSlide.generated.h"

class ASQEX_SplineActor;
class USQEX_SplineComponent;

UCLASS(Blueprintable)
class UTresPlayerState_FRIceRailSlide : public UTresCharState_FRIceRailSlide {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_SplineActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* m_SplineComponent;
    
public:
    UTresPlayerState_FRIceRailSlide();
};

