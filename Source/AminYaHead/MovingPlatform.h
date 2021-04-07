// ©2021 OUT4ARIP Studios

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "MovingPlatform.generated.h"


UCLASS()
class AMINYAHEAD_API AMovingPlatform : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	AMovingPlatform();

	virtual void BeginPlay() override;

protected:
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere)
	float MoveSpeed = 50;

	UPROPERTY(EditAnywhere, Meta = (MakeEditWidget = true))
	FVector TargetLocation;
};
