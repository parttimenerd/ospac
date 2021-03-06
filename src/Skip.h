/**
 * @file		Skip.h
 * @author  	Sebastian Ritterbusch <ospac@ritterbusch.de>
 * @version 	1.0
 * @date		18.2.2016
 * @copyright	MIT License (see LICENSE file)
 * @brief		Skip silence
 *
 */

#ifndef SKIP_H_
#define SKIP_H_

#include "Channel.h"

/**
 * @brief  Skip silence
 * @image html skip-result.png
 * @image latex skip-result.png "Result of standard skip filter" width=10cm
 */
class Skip
{
public:
	/**
	 * Skip silence in channels if absolute sum of voltages are below
	 * silence level fraction compared to maximum level for longer than
	 * minsec seconds. Shorten the period by the time to the reduction order.
	 * The transition period is in the middle of silence for a maximum time
	 * of maxtransition seconds.
	 * @param channels Channels where silence is to be skipped
	 * @param silenceLevel fraction compared to maximum what is considered silence
	 * @param minsec minimum time of silence before skipping is considered
	 * @param mintransition minimum time of transition
	 * @param reductionOrder reduction by time to the reduction order
	 * @return total seconds that were skipped
	 */
	static float silence(Channels &channels,float silenceLevel=0.01,float minsec=0.5,float mintransition=0.05,float reductionOrder=0.75);

	/**
	 * Skip silence in channels to decrease length to the fraction given,
	 * if absolute sum of voltages are below
	 * silence level fraction compared to maximum level for longer than
	 * minsec seconds. Shorten the period by the time to the reduction order.
	 * The transition period is in the middle of silence for a maximum time
	 * of maxtransition seconds.
	 * @param channels Channels where silence is to be skipped
	 * @param targetFraction target length fraction
	 * @param silenceLevel start fraction compared to maximum what is considered silence
	 * @param minsec start minimum time of silence before skipping is considered
	 * @param mintransition start minimum time of transition
	 * @param reductionOrder reduction by time to the reduction order
	 * @return total seconds that were skipped
	 */
	static float silenceTarget(Channels &channels,float targetFraction,float silenceLevel=0.01,float minsec=0.5,float mintransition=0.05,float reductionOrder=0.75);

	/**
	 * Trim silence in channels if absolute sum of voltages are below
	 * silence level fraction compared to maximum level only at the beginning
	 * or the end.
	 * @param channels Channels where silence is to be skipped
	 * @param silenceLevel fraction compared to maximum what is considered silence
	 * @return total seconds that were skipped
	 */
	static float trim(Channels &channels,float silenceLevel=0.01);

    /**
	 * Skip noise in channels if absolute sum of voltages are higher than
	 * silence level fraction compared to maximum level.
	 * @param channels Channels where silence is to be skipped
	 * @param silenceLevel fraction compared to maximum what is considered silence
	 * @param minsec minimum time of silence before skipping is considered
	 * @param transition time in seconds
	 * @return total seconds signal that was skipped
	 */
	static float noise(Channels &channels,float silenceLevel=0.01,float minsec=0.1,float transition=0.05);
};

#endif /* SKIP_H_ */
