#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

struct City {
    std::string name;
    long population;
    double cost;
};

struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

int main()
{
  Tours tours
    { "Tour Ticket Prices from Miami",
      {
        {
          "Colombia", { 
            { "Bogota", 8778000, 400.98 },
            { "Cali", 2401000, 424.12 },
            { "Medellin", 2464000, 350.98 },
            { "Cartagena", 972000, 345.34 } 
          },
        },
        {
          "Brazil", { 
            { "Rio De Janiero", 13500000, 567.45 },
            { "Sao Paulo", 11310000, 975.45 },
            { "Salvador", 18234000, 855.99 }
          },
        },
        {
          "Chile", { 
            { "Valdivia", 260000, 569.12 }, 
            { "Santiago", 7040000, 520.00 }
          },
        },
          { "Argentina", { 
            { "Buenos Aires", 3010000, 723.77 } 
          } 
        },
      }
    };

    
  std::cout << std::setw(30-size(tours.title)/2) << "" << tours.title << std::endl << std::endl;

  std::cout << std::left << std::setw(15) << "Country" << std::setw(25) << "City" << std::right << std::setw(10) << "Population" << std::setw(10) << "Price" << std::endl;
  std::cout << std::setw(60) << std::setfill('-') << "" << std::endl;

  for(auto country : tours.countries) {   
    std::cout << std::setfill(' ');
    std::cout << std::left << std::setw(15) << country.name;
    short unsigned int i {0};
      for(auto city : country.cities) {       
        if(i!=0) {
           std::cout << std::left << std::setw(15) << "";   
        }
        std::cout << std::left << std::setw(25) << city.name << std::right
                  << std::setw(10) << city.population 
                  << std::setw(10) << std::setprecision(2) << std::fixed << std::showpoint << city.cost 
                  << std::endl;
        i++;
      }
      std::cout << std::endl;
    }

  std::cout << std::endl << std::endl;
  return 0;
}