#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresDamageAttribute.h"
#include "ETresAIAttrResistKind.h"
#include "TresNpcBTDecorator_IsTargetAttrResistKind.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsTargetAttrResistKind : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresDamageAttribute m_Attribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresAIAttrResistKind> m_AttrResistKinds;
    
    UTresNpcBTDecorator_IsTargetAttrResistKind();
};

