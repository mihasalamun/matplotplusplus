//
// Created by Alan Freitas on 20/07/20.
//

#include <string>
#include <algorithm>
#include <matplot/util/geodata.h>
#include <matplot/util/common.h>

namespace matplot {
    // https://public.opendatasoft.com/explore/dataset/1000-largest-us-cities-by-population-with-geographic-coordinates/export/?sort=population
    std::tuple<std::vector<double>, std::vector<double>, std::vector<std::string>>
    prepare_world_cities() {
        std::vector<double> y = {
                9.55,
                -54.283333,
                -49.35,
                31.766666666666666,
                60.116667,
                -0.5477,
                18.0731,
                -9.166667,
                27.153611,
                34.516666666666666,
                41.31666666666667,
                36.75,
                -14.266666666666667,
                42.5,
                -8.833333333333334,
                18.216666666666665,
                17.116666666666667,
                -34.583333333333336,
                40.166666666666664,
                12.516666666666667,
                -35.266666666666666,
                48.2,
                40.38333333333333,
                25.083333333333332,
                26.233333333333334,
                23.716666666666665,
                13.1,
                53.9,
                50.833333333333336,
                17.25,
                6.483333333333333,
                32.28333333333333,
                27.466666666666665,
                -16.5,
                43.86666666666667,
                -24.633333333333333,
                -15.783333333333333,
                18.416666666666668,
                4.883333333333333,
                42.68333333333333,
                12.366666666666667,
                16.8,
                -3.3666666666666667,
                11.55,
                3.8666666666666667,
                45.416666666666664,
                14.916666666666666,
                19.3,
                4.366666666666666,
                12.1,
                -33.45,
                39.916666666666664,
                -10.416666666666666,
                -12.166666666666666,
                4.6,
                -11.7,
                -4.316666666666666,
                -4.25,
                -21.2,
                9.933333333333334,
                6.816666666666666,
                45.8,
                23.116666666666667,
                12.1,
                35.166666666666664,
                50.083333333333336,
                55.666666666666664,
                11.583333333333334,
                15.3,
                18.466666666666665,
                -0.21666666666666667,
                30.05,
                13.7,
                3.75,
                15.333333333333334,
                59.43333333333333,
                9.033333333333333,
                -51.7,
                62,
                -18.133333333333333,
                60.166666666666664,
                48.86666666666667,
                -17.533333333333335,
                0.38333333333333336,
                13.45,
                41.68333333333333,
                52.516666666666666,
                5.55,
                36.13333333333333,
                37.983333333333334,
                64.18333333333334,
                12.05,
                13.466666666666667,
                14.616666666666667,
                49.45,
                9.5,
                11.85,
                6.8,
                18.533333333333335,
                41.9,
                14.1,
                47.5,
                64.15,
                28.6,
                -6.166666666666667,
                35.7,
                33.333333333333336,
                53.31666666666667,
                54.15,
                31.766666666666666,
                41.9,
                18,
                35.68333333333333,
                49.18333333333333,
                31.95,
                51.166666666666664,
                -1.2833333333333332,
                -0.8833333333333333,
                39.016666666666666,
                37.55,
                42.666666666666664,
                29.366666666666667,
                42.86666666666667,
                17.966666666666665,
                56.95,
                33.86666666666667,
                -29.316666666666666,
                6.3,
                32.88333333333333,
                47.13333333333333,
                54.68333333333333,
                49.6,
                42,
                -18.916666666666668,
                -13.966666666666667,
                3.1666666666666665,
                4.166666666666667,
                12.65,
                35.88333333333333,
                7.1,
                18.066666666666666,
                -20.15,
                19.433333333333334,
                6.916666666666667,
                47,
                43.733333333333334,
                47.916666666666664,
                42.43333333333333,
                16.7,
                34.016666666666666,
                -25.95,
                -22.566666666666666,
                27.716666666666665,
                52.35,
                -22.266666666666666,
                -41.3,
                12.133333333333333,
                13.516666666666667,
                9.083333333333334,
                -19.016666666666666,
                -29.05,
                15.2,
                59.916666666666664,
                23.616666666666667,
                33.68333333333333,
                7.483333333333333,
                8.966666666666667,
                -9.45,
                -25.266666666666666,
                -12.05,
                14.6,
                -25.066666666666666,
                52.25,
                38.71666666666667,
                18.466666666666665,
                25.283333333333335,
                44.43333333333333,
                55.75,
                -1.95,
                17.883333333333333,
                -15.933333333333334,
                17.3,
                14,
                46.766666666666666,
                13.133333333333333,
                -13.816666666666666,
                43.93333333333333,
                0.3333333333333333,
                24.65,
                14.733333333333333,
                44.833333333333336,
                -4.616666666666667,
                8.483333333333333,
                1.2833333333333332,
                18.016666666666666,
                48.15,
                46.05,
                -9.433333333333334,
                2.066666666666667,
                -25.7,
                4.85,
                40.4,
                6.916666666666667,
                15.6,
                5.833333333333333,
                78.21666666666667,
                -26.316666666666666,
                59.333333333333336,
                46.916666666666664,
                33.5,
                25.033333333333335,
                38.55,
                -6.8,
                13.75,
                -8.583333333333334,
                6.116666666666666,
                -21.133333333333333,
                10.65,
                36.8,
                39.93333333333333,
                37.95,
                21.466666666666665,
                -8.516666666666667,
                0.31666666666666665,
                50.43333333333333,
                24.466666666666665,
                51.5,
                38.88333333,
                -34.85,
                41.31666666666667,
                -17.733333333333334,
                10.483333333333333,
                21.033333333333335,
                18.35,
                -13.95,
                15.35,
                -15.416666666666666,
                -17.816666666666666,
                38.883333,
                0,
                35.183333,
                0,
                0,
                -7.3,
                0,
        };

        std::vector<double> x = {
                44.050000,
                -36.500000,
                70.216667,
                35.233333,
                19.900000,
                166.920867,
                -63.082200,
                -171.833333,
                -13.203333,
                69.183333,
                19.816667,
                3.050000,
                -170.700000,
                1.516667,
                13.216667,
                -63.050000,
                -61.850000,
                -58.666667,
                44.500000,
                -70.033333,
                149.133333,
                16.366667,
                49.866667,
                -77.350000,
                50.566667,
                90.400000,
                -59.616667,
                27.566667,
                4.333333,
                -88.766667,
                2.616667,
                -64.783333,
                89.633333,
                -68.150000,
                18.416667,
                25.900000,
                -47.916667,
                -64.616667,
                114.933333,
                23.316667,
                -1.516667,
                96.150000,
                29.350000,
                104.916667,
                11.516667,
                -75.700000,
                -23.516667,
                -81.383333,
                18.583333,
                15.033333,
                -70.666667,
                116.383333,
                105.716667,
                96.833333,
                -74.083333,
                43.233333,
                15.300000,
                15.283333,
                -159.766667,
                -84.083333,
                -5.266667,
                16.000000,
                -82.350000,
                -68.916667,
                33.366667,
                14.466667,
                12.583333,
                43.150000,
                -61.400000,
                -69.900000,
                -78.500000,
                31.250000,
                -89.200000,
                8.783333,
                38.933333,
                24.716667,
                38.700000,
                -57.850000,
                -6.766667,
                178.416667,
                24.933333,
                2.333333,
                -149.566667,
                9.450000,
                -16.566667,
                44.833333,
                13.400000,
                -0.216667,
                -5.350000,
                23.733333,
                -51.750000,
                -61.750000,
                144.733333,
                -90.516667,
                -2.533333,
                -13.700000,
                -15.583333,
                -58.150000,
                -72.333333,
                12.450000,
                -87.216667,
                19.083333,
                -21.950000,
                77.200000,
                106.816667,
                51.416667,
                44.400000,
                -6.233333,
                -4.483333,
                35.233333,
                12.483333,
                -76.800000,
                139.750000,
                -2.100000,
                35.933333,
                71.416667,
                36.816667,
                169.533333,
                125.750000,
                126.983333,
                21.166667,
                47.966667,
                74.600000,
                102.600000,
                24.100000,
                35.500000,
                27.483333,
                -10.800000,
                13.166667,
                9.516667,
                25.316667,
                6.116667,
                21.433333,
                47.516667,
                33.783333,
                101.700000,
                73.500000,
                -8.000000,
                14.500000,
                171.383333,
                -15.966667,
                57.483333,
                -99.133333,
                158.150000,
                28.850000,
                7.416667,
                106.916667,
                19.266667,
                -62.216667,
                -6.816667,
                32.583333,
                17.083333,
                85.316667,
                4.916667,
                166.450000,
                174.783333,
                -86.250000,
                2.116667,
                7.533333,
                -169.916667,
                167.966667,
                145.750000,
                10.750000,
                58.583333,
                73.050000,
                134.633333,
                -79.533333,
                147.183333,
                -57.666667,
                -77.050000,
                120.966667,
                -130.083333,
                21.000000,
                -9.133333,
                -66.116667,
                51.533333,
                26.100000,
                37.600000,
                30.050000,
                -62.850000,
                -5.716667,
                -62.716667,
                -61.000000,
                -56.183333,
                -61.216667,
                -171.766667,
                12.416667,
                6.733333,
                46.700000,
                -17.633333,
                20.500000,
                55.450000,
                -13.233333,
                103.850000,
                -63.033333,
                17.116667,
                14.516667,
                159.950000,
                45.333333,
                28.216667,
                31.616667,
                -3.683333,
                79.833333,
                32.533333,
                -55.166667,
                15.633333,
                31.133333,
                18.050000,
                7.466667,
                36.300000,
                121.516667,
                68.766667,
                39.283333,
                100.516667,
                125.600000,
                1.216667,
                -175.200000,
                -61.516667,
                10.183333,
                32.866667,
                58.383333,
                -71.133333,
                179.216667,
                32.550000,
                30.516667,
                54.366667,
                -0.083333,
                -77.0000,
                -56.166667,
                69.250000,
                168.316667,
                -66.866667,
                105.850000,
                -64.933333,
                -171.933333,
                44.200000,
                28.283333,
                31.033333,
                -77.0000,
                0.000000,
                33.366667,
                0.000000,
                0.000000,
                72.400000,
                0.000000
        };

        std::vector<std::string> z = {
                "Hargeisa",
                "King Edward Point",
                "Port-aux-Français",
                "Jerusalem",
                "Mariehamn",
                "Yaren",
                "Marigot",
                "Atafu",
                "El-Aaiún",
                "Kabul",
                "Tirana",
                "Algiers",
                "Pago Pago",
                "Andorra la Vella",
                "Luanda",
                "The Valley",
                "Saint John's",
                "Buenos Aires",
                "Yerevan",
                "Oranjestad",
                "Canberra",
                "Vienna",
                "Baku",
                "Nassau",
                "Manama",
                "Dhaka",
                "Bridgetown",
                "Minsk",
                "Brussels",
                "Belmopan",
                "Porto-Novo",
                "Hamilton",
                "Thimphu",
                "La Paz",
                "Sarajevo",
                "Gaborone",
                "Brasilia",
                "Road Town",
                "Bandar Seri Begawan",
                "Sofia",
                "Ouagadougou",
                "Rangoon",
                "Bujumbura",
                "Phnom Penh",
                "Yaounde",
                "Ottawa",
                "Praia",
                "George Town",
                "Bangui",
                "N'Djamena",
                "Santiago",
                "Beijing",
                "The Settlement",
                "West Island",
                "Bogota",
                "Moroni",
                "Kinshasa",
                "Brazzaville",
                "Avarua",
                "San Jose",
                "Yamoussoukro",
                "Zagreb",
                "Havana",
                "Willemstad",
                "Nicosia",
                "Prague",
                "Copenhagen",
                "Djibouti",
                "Roseau",
                "Santo Domingo",
                "Quito",
                "Cairo",
                "San Salvador",
                "Malabo",
                "Asmara",
                "Tallinn",
                "Addis Ababa",
                "Stanley",
                "Torshavn",
                "Suva",
                "Helsinki",
                "Paris",
                "Papeete",
                "Libreville",
                "Banjul",
                "Tbilisi",
                "Berlin",
                "Accra",
                "Gibraltar",
                "Athens",
                "Nuuk",
                "Saint George's",
                "Hagatna",
                "Guatemala City",
                "Saint Peter Port",
                "Conakry",
                "Bissau",
                "Georgetown",
                "Port-au-Prince",
                "Vatican City",
                "Tegucigalpa",
                "Budapest",
                "Reykjavik",
                "New Delhi",
                "Jakarta",
                "Tehran",
                "Baghdad",
                "Dublin",
                "Douglas",
                "Jerusalem",
                "Rome",
                "Kingston",
                "Tokyo",
                "Saint Helier",
                "Amman",
                "Astana",
                "Nairobi",
                "Tarawa",
                "Pyongyang",
                "Seoul",
                "Pristina",
                "Kuwait City",
                "Bishkek",
                "Vientiane",
                "Riga",
                "Beirut",
                "Maseru",
                "Monrovia",
                "Tripoli",
                "Vaduz",
                "Vilnius",
                "Luxembourg",
                "Skopje",
                "Antananarivo",
                "Lilongwe",
                "Kuala Lumpur",
                "Male",
                "Bamako",
                "Valletta",
                "Majuro",
                "Nouakchott",
                "Port Louis",
                "Mexico City",
                "Palikir",
                "Chisinau",
                "Monaco",
                "Ulaanbaatar",
                "Podgorica",
                "Plymouth",
                "Rabat",
                "Maputo",
                "Windhoek",
                "Kathmandu",
                "Amsterdam",
                "Noumea",
                "Wellington",
                "Managua",
                "Niamey",
                "Abuja",
                "Alofi",
                "Kingston",
                "Saipan",
                "Oslo",
                "Muscat",
                "Islamabad",
                "Melekeok",
                "Panama City",
                "Port Moresby",
                "Asuncion",
                "Lima",
                "Manila",
                "Adamstown",
                "Warsaw",
                "Lisbon",
                "San Juan",
                "Doha",
                "Bucharest",
                "Moscow",
                "Kigali",
                "Gustavia",
                "Jamestown",
                "Basseterre",
                "Castries",
                "Saint-Pierre",
                "Kingstown",
                "Apia",
                "San Marino",
                "Sao Tome",
                "Riyadh",
                "Dakar",
                "Belgrade",
                "Victoria",
                "Freetown",
                "Singapore",
                "Philipsburg",
                "Bratislava",
                "Ljubljana",
                "Honiara",
                "Mogadishu",
                "Pretoria",
                "Juba",
                "Madrid",
                "Colombo",
                "Khartoum",
                "Paramaribo",
                "Longyearbyen",
                "Mbabane",
                "Stockholm",
                "Bern",
                "Damascus",
                "Taipei",
                "Dushanbe",
                "Dar es Salaam",
                "Bangkok",
                "Dili",
                "Lome",
                "Nuku'alofa",
                "Port of Spain",
                "Tunis",
                "Ankara",
                "Ashgabat",
                "Grand Turk",
                "Funafuti",
                "Kampala",
                "Kyiv",
                "Abu Dhabi",
                "London",
                "Washington",
                "Montevideo",
                "Tashkent",
                "Port-Vila",
                "Caracas",
                "Hanoi",
                "Charlotte Amalie",
                "Mata-Utu",
                "Sanaa",
                "Lusaka",
                "Harare",
                "Washington",
                "Antarctica",
                "North Nicosia",
                "Hong Kong",
                "Heard Island",
                "Diego Garcia",
                "Macau"
        };
        return std::make_tuple(x,y,z);
	}

    std::tuple<std::vector<double>, std::vector<double>, std::vector<std::string>>&
    world_cities() {
        static std::tuple<std::vector<double>, std::vector<double>, std::vector<std::string>> world_map_cities_ = prepare_world_cities();
        return world_map_cities_;
    }

    std::tuple<std::vector<double>, std::vector<double>, std::vector<std::string>> world_cities(double min_x_distance_per_char, double min_y_distance) {
        auto [x,y,names] = world_cities();
        return clear_overlapping_labels(x,y,names,min_x_distance_per_char,min_y_distance);
    }

    std::tuple<std::vector<double>, std::vector<double>, std::vector<size_t>> greedy_tsp_with_idx(const std::vector<double>& x, const std::vector<double>& y, size_t starting_city) {
        std::vector<size_t> route_idx = {starting_city};
        while (route_idx.size() < x.size()) {
            double x1 = x[route_idx.back()];
            double y1 = y[route_idx.back()];
            bool min_is_set = false;
            double min_distance = 0;
            size_t min_distance_idx = 0;
            for (size_t i = 0; i < x.size(); ++i) {
                bool not_there_yet = std::none_of(route_idx.begin(), route_idx.end(), [i](int idx){ return idx == i; });
                if (not_there_yet) {
                    double x2 = x[route_idx.back()];
                    double y2 = y[route_idx.back()];
                    double d = distance(x1,y1,x2,y2);
                    if (!min_is_set || d < min_distance) {
                        min_distance = distance(x1,y1,x2,y2);
                        min_distance_idx = i;
                    }
                }
            }
            route_idx.emplace_back(min_distance_idx);
        }
        std::vector<double> xstar;
        std::vector<double> ystar;
        for (const auto &idx : route_idx) {
            xstar.emplace_back(x[idx]);
            ystar.emplace_back(y[idx]);
        }
        return std::make_tuple(xstar, ystar, route_idx);
    }

    std::tuple<std::vector<double>, std::vector<double>> greedy_tsp(const std::vector<double>& x, const std::vector<double>& y, size_t starting_city) {
        std::vector<size_t> route_idx = {starting_city};
        while (route_idx.size() < x.size()) {
            double x1 = x[route_idx.back()];
            double y1 = y[route_idx.back()];
            bool min_is_set = false;
            double min_distance = 0;
            size_t min_distance_idx = 0;
            for (size_t i = 0; i < x.size(); ++i) {
                bool not_there_yet = std::none_of(route_idx.begin(), route_idx.end(), [i](int idx){ return idx == i; });
                if (not_there_yet) {
                    double x2 = x[route_idx.back()];
                    double y2 = y[route_idx.back()];
                    double d = distance(x1,y1,x2,y2);
                    if (!min_is_set || d < min_distance) {
                        min_distance = distance(x1,y1,x2,y2);
                        min_distance_idx = i;
                    }
                }
            }
            route_idx.emplace_back(min_distance_idx);
        }
        std::vector<double> xstar;
        std::vector<double> ystar;
        for (const auto &idx : route_idx) {
            xstar.emplace_back(x[idx]);
            ystar.emplace_back(y[idx]);
        }
        return std::make_pair(xstar, ystar);
    }

    std::tuple<std::vector<double>, std::vector<double>, std::vector<std::string>> clear_overlapping_labels(const std::vector<double>& x, const std::vector<double>& y, const std::vector<std::string>& names, double min_x_distance_per_char, double min_y_distance) {
        std::vector<size_t> pos_to_remove;
        for (size_t i = 1; i < x.size(); ++i) {
            double i_width = min_x_distance_per_char * names[i].size();
            for (size_t j = 0; j < i; ++j) {
                double j_width = min_x_distance_per_char * names[j].size();
                bool x_overlap = x[i] < x[j] ? x[i] + i_width > x[j] : x[j] + j_width > x[i];
                bool y_overlap = y[i] < y[j] ? y[i] + min_y_distance > y[j] : y[j] + min_y_distance > y[i];
                if (x_overlap && y_overlap) {
                    pos_to_remove.emplace_back(i);
                    break;
                }
            }
        }
        auto x_line = x;
        auto y_line = y;
        auto names_line = names;
        for (int i = pos_to_remove.size() - 1; i >= 0; --i) {
            x_line.erase(x_line.begin() + pos_to_remove[i]);
            y_line.erase(y_line.begin() + pos_to_remove[i]);
            names_line.erase(names_line.begin() + pos_to_remove[i]);
        }
        return std::make_tuple(x_line,y_line,names_line);
    }
}
