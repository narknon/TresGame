#pragma once
#include "CoreMinimal.h"
#include "TresAnimNotify_GenericTiming.h"
#include "TresPoppingHolyBulletShootParameter.h"
#include "TresAnimNotify_PoppingHolyShootTiming.generated.h"

UCLASS(Blueprintable, CollapseCategories, MinimalAPI)
class UTresAnimNotify_PoppingHolyShootTiming : public UTresAnimNotify_GenericTiming {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresPoppingHolyBulletShootParameter m_HolyBulletShootParameter;
    
public:
    UTresAnimNotify_PoppingHolyShootTiming();
};

