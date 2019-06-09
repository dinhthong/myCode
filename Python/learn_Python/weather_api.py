from weather import Weather, Unit

weather = Weather(unit=Unit.CELSIUS)

location = weather.lookup_by_location('Ho Chi Minh City')
condition = location.condition
print("-------------------")
print(condition.text)
#for
forecasts = location.forecast
for forecast in forecasts:
    print(forecast.date)
    print(forecast.text)
    print(forecast.low)
    print(forecast.high)
print("-------------------")
print type(location)
print location
print dir(location)
