// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "ArenaBattle.h"
#include "GameFramework/PlayerController.h"
#include "ABPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class ARENABATTLE_API AABPlayerController : public APlayerController
{
	GENERATED_BODY()
<<<<<<< HEAD
	
public:
	AABPlayerController();
	
=======
public:
	AABPlayerController();

>>>>>>> c3e0fac3c41fef62cdb0536010944aac78b63022
	virtual void PostInitializeComponents() override;
	virtual void OnPossess(APawn* aPawn) override;

	class UABHUDWidget* GetHUDWidget() const;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = UI)
	TSubclassOf<class UABHUDWidget> HUDWidgetClass;
	
private:
	UPROPERTY()
	class UABHUDWidget* HUDWidget;
<<<<<<< HEAD
};
=======
}; 
>>>>>>> c3e0fac3c41fef62cdb0536010944aac78b63022
