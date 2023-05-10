#include "RCC.h"

/**
  * @brief PLL clock ready flag.
  * @details Set by hardware to indicate that the PLL is locked.
  * @retval 0: PLL unlocked, 1: PLL locked.
  */
inline int32_t getRccCrPllrdyState(void) {
  return (READ_BIT(RCC->CR, RCC_CR_PLLRDY) ? 1 : 0);
}

/**
  * @brief PLL enable.
  * @details Set and cleared by software to enable PLL.
  *   Cleared by hardware when entering Stop or Standby mode. This bit can not be reset if the
  *   PLL clock is used as system clock or is selected to become the system clock.
  * @retval 0: PLL off, 1: PLL on.
  */
inline int32_t getRccCrPllState(void) {
  return (READ_BIT(RCC->CR, RCC_CR_PLLON) ? 1 : 0);
}

/**
  * @brief PLL enable.
  * @details Set and cleared by software to enable PLL.
  *   Cleared by hardware when entering Stop or Standby mode. This bit can not be reset if the
  *   PLL clock is used as system clock or is selected to become the system clock.
  * @param state 0: PLL off, 1: PLL on.
  */
inline void setRccCrPllState(_Bool state) {
  if (state) {
    SET_BIT(RCC->CR, RCC_CR_PLLON);
  } else {
    CLEAR_BIT(RCC->CR, RCC_CR_PLLON);
  }
}

/**
  * @brief Clock security system enable.
  * @details Set and cleared by software to enable the clock security system. When CSSON is set, the
  *   clock detector is enabled by hardware when the HSE oscillator is ready, and disabled by
  *   hardware if a HSE clock failure is detected.
  * @retval 0: Clock detector OFF  1: Clock detector ON (Clock detector ON if the HSE oscillator is ready , OFF if not).
  */
inline int32_t getRccCrCssState(void) {
  return (READ_BIT(RCC->CR, RCC_CR_CSSON) ? 1 : 0);
}

/**
  * @brief Clock security system enable.
  * @details Set and cleared by software to enable the clock security system. When CSSON is set, the
  *   clock detector is enabled by hardware when the HSE oscillator is ready, and disabled by
  *   hardware if a HSE clock failure is detected.
  * @param 0: Clock detector OFF  1: Clock detector ON.
  */
inline void setRccCrCssState(_Bool state) {
  if (state) {
    SET_BIT(RCC->CR, RCC_CR_CSSON);
  } else {
    CLEAR_BIT(RCC->CR, RCC_CR_CSSON);
  }
}

/**
  * @brief PLL enable.
  * @details Set and cleared by software to enable PLL.
  *   Cleared by hardware when entering Stop or Standby mode. This bit can not be reset if the
  *   PLL clock is used as system clock or is selected to become the system clock.
  * @retval 0: PLL off, 1: PLL on.
  */
inline int32_t getRccCrHsebypState(void) {
  return (READ_BIT(RCC->CR, RCC_CR_HSEBYP) ? 1 : 0);
}

/**
  * @brief PLL enable.
  * @details Set and cleared by software to enable PLL.
  *   Cleared by hardware when entering Stop or Standby mode. This bit can not be reset if the
  *   PLL clock is used as system clock or is selected to become the system clock.
  * @param state 0: PLL off, 1: PLL on.
  */
inline void setRccCrHsebypState(_Bool state) {
  if (state) {
    SET_BIT(RCC->CR, RCC_CR_HSEBYP);
  } else {
    CLEAR_BIT(RCC->CR, RCC_CR_HSEBYP);
  }
}

inline int32_t getRccCrHserdyState(void) {
  return (READ_BIT(RCC->CR, RCC_CR_HSERDY) ? 1 : 0);
}


