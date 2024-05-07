#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuObject.h"
#include "TresDebugMenuImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable, NonTransient)
class UTresDebugMenuImage : public UTresDebugMenuObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* m_Texture;
    
    UTresDebugMenuImage();
};

