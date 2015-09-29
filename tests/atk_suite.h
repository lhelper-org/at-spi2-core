/*
 * AT-SPI - Assistive Technology Service Provider Interface
 * (Gnome Accessibility Project; https://wiki.gnome.org/Accessibility)
 *
 * Copyright (c) 2014 Samsung Electronics Co., Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef _ATK_SUITE_H
#define _ATK_SUITE_H

#include <atspi/atspi.h>

#define ATK_TEST_PATH_ACCESSIBLE (const char *)"/Accessible"
#define ATK_TEST_PATH_ACTION (const char *)"/Action"
#define ATK_TEST_PATH_COMP (const char *)"/Component"
#define ATK_TEST_PATH_COLLECTION (const char *)"/Collection"
#define ATK_TEST_PATH_EDIT_TEXT (const char *)"/Editable_Text"
#define ATK_TEST_PATH_IMAGE (const char *)"/Image"
#define ATK_TEST_PATH_TEXT (const char *)"/Text"
#define ATK_TEST_PATH_VALUE (const char *)"/Value"

void atk_test_accessible (void);
void atk_test_action (void);
void atk_test_component (void);
void atk_test_collection (void);
void atk_test_editable_text (void);
void atk_test_image (void);
void atk_test_text (void);
void atk_test_value (void);

#endif /* _ATK_SUITE_H */
