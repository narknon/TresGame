#pragma once
#include "CoreMinimal.h"
#include "Components/TextRenderComponent.h"
#include "TresDebugTextRenderComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugTextRenderComponent : public UTextRenderComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SphereMoveSize;
    
    UTresDebugTextRenderComponent();
};

