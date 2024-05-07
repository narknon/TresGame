#pragma once
#include "CoreMinimal.h"
#include "Engine/Note.h"
#include "TresNote.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresNote : public ANote {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Id;
    
    ATresNote(const FObjectInitializer& ObjectInitializer);
};

