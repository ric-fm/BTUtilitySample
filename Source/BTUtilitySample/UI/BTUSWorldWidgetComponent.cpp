
#include "BTUSWorldWidgetComponent.h"

#include "BTUSWorldUserWidget.h"


void UBTUSWorldWidgetComponent::InitWidget()
{
	Super::InitWidget();
	
	if (UUserWidget* WidgetObject = GetUserWidgetObject())
	{
		if (UBTUSWorldUserWidget* WorldWidget = Cast<UBTUSWorldUserWidget>(WidgetObject))
		{
			WorldWidget->SetWorldWidgetComponent(this);
		}
	}
}
