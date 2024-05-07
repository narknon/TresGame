#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntitySequenceAction.h"
#include "TresLevelEntitySequenceAction_Load.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TRESGAME_API UTresLevelEntitySequenceAction_Load : public UTresLevelEntitySequenceAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_AsyncLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_LoadAndSpawn;
    
    UTresLevelEntitySequenceAction_Load();
};

