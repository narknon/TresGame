#pragma once
#include "CoreMinimal.h"
#include "TresNote.h"
#include "TresNoteMovable.generated.h"

UCLASS(Blueprintable)
class ATresNoteMovable : public ATresNote {
    GENERATED_BODY()
public:
    ATresNoteMovable(const FObjectInitializer& ObjectInitializer);
};

