#pragma once
#include "CoreMinimal.h"
#include "TresRailSlideWork.generated.h"

class AActor;
class ASQEX_SplineActor;
class USQEX_SplineComponent;

USTRUCT(BlueprintType)
struct FTresRailSlideWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_LeadActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_RailSlideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* m_RailSlideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_LastRailSlideActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* m_LastRailSlideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ASQEX_SplineActor* m_PauseCheckActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USQEX_SplineComponent* m_PauseCheckComponent;
    
    TRESGAME_API FTresRailSlideWork();
};

