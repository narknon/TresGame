#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackInstVisibility.h"
#include "TresInterpTrackInstVisibility.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class TRESGAME_API UTresInterpTrackInstVisibility : public UInterpTrackInstVisibility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_FirstTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_BackupActorHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USceneComponent*> m_Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_BackupComponentVisible;
    
    UTresInterpTrackInstVisibility();
};

