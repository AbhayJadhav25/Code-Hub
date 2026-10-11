def average_temp_per_city(climate_data):
    avg_temp = {}
    for key , value in climate_data.items():
        for k , v in value.items():
            avg_temp[k] = avg_temp.get(k , 0)+v

    for key , value in avg_temp.items():
        avg_temp[key] = round(value /len(climate_data),2)

    print(avg_temp)

    return avg_temp
def overall_hottest(climate_data):
    overall_hottest_reading = []
    maximum = float('-inf')

    city_max = {}
    for day , cities in climate_data.items():
        for city , temp in cities.items():
            if temp >maximum:
                overall_hottest_reading = ([[city , day , temp]])
                maximum = temp
            elif temp == maximum:
                overall_hottest_reading.append([city , day , temp])

            if city not in city_max or temp > city_max[city][1]:
                city_max[city] = [day , temp]
            elif temp == city_max[city][1]:
                city_max[city].append(day)
    print("******Overall Hottest Readings******")
    for city ,day ,temp in overall_hottest_reading:
        print(
            f"City : {city} , Day : {day} , Temperature : {temp:.2f}"
        )

    print("*********Hottest Day Per City************")
    for city , details in city_max.items():
        print(
            f"City : {city} , Day : {details[0]} , Temperature : {details[1]}"
        )

def highest_average_temperature(climate_data):
    average_per_city = average_temp_per_city(climate_data)
    city = max(average_per_city , key = lambda x : average_per_city[x])
    print(f"{city} : {average_per_city[city]}")


def temperature_excced_threshold(climate_data , threshold = 35):
    print("Temperature Exceeded By 35 degree Celicus")
    for day , cities in climate_data.items():
        for city , temp in cities.items():
            if temp > threshold:
                print(
                    f"Day : {day}  ||  City : {city}  ||  Temperature : {temp}"
                )
def main():
    climate_data = {
        "day1":{
            'Mumbai':32 , "delhi":36 , "Pune" : 30 , "Jaipur":38 , "Bengaluru":29
        },
        "day2":{
            'Mumbai':34 , "delhi":35 , "Pune" : 31 , "Jaipur":40 , "Bengaluru":30
        },
        "day3":{
            'Mumbai':33 , "delhi":37 , "Pune" : 32 , "Jaipur":39 , "Bengaluru":31
        },
        "day4":{
            'Mumbai':35 , "delhi":34 , "Pune" : 33  , "Jaipur":41 , "Bengaluru":28
        },
        "day5":{
            'Mumbai':31 , "delhi":38 , "Pune" : 29 , "Jaipur":37 , "Bengaluru":32
        },
        "day6":{
            'Mumbai':36 , "delhi":39 , "Pune" : 34 , "Jaipur":42 , "Bengaluru":30
        },
        "day7":{
            'Mumbai':34 , "delhi":36 , "Pune" : 42 , "Jaipur":38 , "Bengaluru":31
        }
    }

    border = "=="*40
    border2 = "="*26
    #Average Temperature per city
    print(border2,"Average Temperature Per City",border2)
    average_temp_per_city(climate_data)
    print(border)

    #Overall Hottest Day && Hottest Day per city
    # 
    overall_hottest(climate_data)
    print(border)


    highest_average_temperature(climate_data)
    print(border)

    temperature_excced_threshold(climate_data)
    print(border)

if __name__ == "__main__":
    main()