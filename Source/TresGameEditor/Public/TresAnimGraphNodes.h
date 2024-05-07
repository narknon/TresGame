#pragma once
#include "CoreMinimal.h"
#include "TresAnimNode_AnimSetEvaluator.h"
#include "TresAnimNode_AnimSetPlayer.h"
#include "TresAnimNode_ExDropWaist.h"
#include "TresAnimNode_ModifyBoneCurve.h"
#include "TresAnimNode_SaveCachedPose.h"
#include "TresAnimNode_SplineAnchor.h"
#include "TresAnimNode_UseCachedPose.h"
#include "Editor/AnimGraph/Classes/AnimGraphNode_Base.h"

#include "TresAnimGraphNodes.generated.h"




UCLASS(Abstract)
class UTresAnimGraphNode_UseCachedPose : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_UseCachedPose Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};



UCLASS(Abstract)
class UTresAnimGraphNode_SplineAnchor : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_SplineAnchor Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};



UCLASS(Abstract)
class UTresAnimGraphNode_SaveCachedPose : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_SaveCachedPose Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};



UCLASS(Abstract)
class UTresAnimGraphNode_ModifyBoneCurve : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_ModifyBoneCurve Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};


UCLASS(Abstract)
class UTresAnimGraphNode_ExDropWaist : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_ExDropWaist Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};



UCLASS(Abstract)
class UTresAnimGraphNode_AnimSetPlayer : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_AnimSetPlayer Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};



UCLASS(Abstract)
class UTresAnimGraphNode_AnimSetEvaluator : public UAnimGraphNode_Base
{
    GENERATED_UCLASS_BODY()

    UPROPERTY(EditAnywhere, Category=Settings)
    FTresAnimNode_AnimSetEvaluator Node;

    // UEdGraphNode interface
    virtual FString GetNodeCategory() const override;
    virtual FLinearColor GetNodeTitleColor() const override;
    // End of UEdGraphNode interface
};

