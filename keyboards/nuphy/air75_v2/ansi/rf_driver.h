/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "host_driver.h"

extern host_driver_t rf_host_driver;

void uart_send_report_keyboard(report_keyboard_t *report);
void uart_send_report_nkro(report_nkro_t *report);
void uart_send_mouse_report(report_mouse_t *report);
void uart_send_consumer_report(report_extra_t *report);
void uart_send_system_report(report_extra_t *report);
