def convert_length(value, input_unit, output_unit):
    # Define conversion factors
    conversion_factors = {
        "m": 1,
        "cm": 0.01,
        "mm": 0.001,
        "ft": 3.28084,
        "km": 0.001,
        "mi": 0.000621371,
    }

    if input_unit not in conversion_factors or output_unit not in conversion_factors:
        return "Invalid input or output unit."

    try:
        value = float(value)
    except ValueError:
        return "Invalid input value."

    # Perform the conversion
    result = value * (conversion_factors[input_unit] / conversion_factors[output_unit])
    return result

if __name__ == "__main__":
    input_unit = input("Enter the input unit (m/cm/mm/ft/km/mi): ").strip().lower()
    output_unit = input("Enter the output unit (m/cm/mm/ft/km/mi): ").strip().lower()
    value = input("Enter the value to convert: ")

    converted_value = convert_length(value, input_unit, output_unit)

    if isinstance(converted_value, float):
        print(f"{value} {input_unit} is equal to {converted_value} {output_unit}")
    else:
        print(converted_value)
