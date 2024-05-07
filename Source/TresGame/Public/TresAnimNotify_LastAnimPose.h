#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "ETresLastAnimPose.h"
#include "TresAnimNotify_LastAnimPose.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_LastAnimPose : public UAnimNotify {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresLastAnimPose> m_LastAnimPose;
    
public:
    UTresAnimNotify_LastAnimPose();
};

