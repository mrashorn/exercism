#include "space_age.h"


namespace space_age {
	space_age::space_age(float age_in_seconds)
	{
		space_age::_seconds = age_in_seconds;
	}

	float space_age::seconds() const
	{
		return _seconds;
	}

	float space_age::on_earth() const
	{
		return _seconds / 60.0 / 60 / 24 / 365.25;
	}

	float space_age::on_mercury() const
	{
		return on_earth() / 0.2408467;
	}

	float space_age::on_venus() const
	{
		return on_earth() / 0.61519726;
	}

	float space_age::on_mars() const
	{
		return on_earth() / 1.8808158;
	}

	float space_age::on_jupiter() const
	{
		return on_earth() / 11.862615;
	}

	float space_age::on_saturn() const
	{
		return on_earth() / 29.447498;
	}

	float space_age::on_uranus() const
	{
		return on_earth() / 84.016846;
	}

	float space_age::on_neptune() const
	{
		return on_earth() / 164.79132;
	}
}  // namespace space_age
