#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Cursor.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_Cursor : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AnchorCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_LightCursor;
    
public:
    UTresUIP_Cursor();
};

