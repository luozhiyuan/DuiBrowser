/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSWebKitTransitionEvent.h"

#include <wtf/GetPtr.h>

#include "KURL.h"
#include "WebKitTransitionEvent.h"

#include <kjs/Error.h>
#include <kjs/JSNumberCell.h>
#include <kjs/JSString.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSWebKitTransitionEvent)

/* Hash table */

static const HashTableValue JSWebKitTransitionEventTableValues[3] =
{
    { "propertyName", (intptr_t)JSWebKitTransitionEvent::PropertyNameAttrNum, DontDelete|ReadOnly, 0 },
    { "elapsedTime", (intptr_t)JSWebKitTransitionEvent::ElapsedTimeAttrNum, DontDelete|ReadOnly, 0 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitTransitionEventTable = { 1, JSWebKitTransitionEventTableValues, 0 };

/* Hash table for prototype */

static const HashTableValue JSWebKitTransitionEventPrototypeTableValues[2] =
{
    { "initWebKitTransitionEvent", (intptr_t)jsWebKitTransitionEventPrototypeFunctionInitWebKitTransitionEvent, DontDelete|Function, 5 },
    { 0, 0, 0, 0 }
};

static const HashTable JSWebKitTransitionEventPrototypeTable = { 0, JSWebKitTransitionEventPrototypeTableValues, 0 };

const ClassInfo JSWebKitTransitionEventPrototype::s_info = { "WebKitTransitionEventPrototype", 0, &JSWebKitTransitionEventPrototypeTable, 0 };

JSObject* JSWebKitTransitionEventPrototype::self(ExecState* exec)
{
    static const Identifier* prototypeIdentifier = new Identifier(exec, "[[JSWebKitTransitionEvent.prototype]]");
    return JSC::cacheGlobalObject<JSWebKitTransitionEventPrototype>(exec, *prototypeIdentifier);
}

bool JSWebKitTransitionEventPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSWebKitTransitionEventPrototypeTable, this, propertyName, slot);
}

const ClassInfo JSWebKitTransitionEvent::s_info = { "WebKitTransitionEvent", &JSEvent::s_info, &JSWebKitTransitionEventTable , 0 };

JSWebKitTransitionEvent::JSWebKitTransitionEvent(JSObject* prototype, WebKitTransitionEvent* impl)
    : JSEvent(prototype, impl)
{
}

bool JSWebKitTransitionEvent::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSWebKitTransitionEvent, Base>(exec, &JSWebKitTransitionEventTable, this, propertyName, slot);
}

JSValue* JSWebKitTransitionEvent::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case PropertyNameAttrNum: {
        WebKitTransitionEvent* imp = static_cast<WebKitTransitionEvent*>(impl());
        return jsString(exec, imp->propertyName());
    }
    case ElapsedTimeAttrNum: {
        WebKitTransitionEvent* imp = static_cast<WebKitTransitionEvent*>(impl());
        return jsNumber(exec, imp->elapsedTime());
    }
    }
    return 0;
}

JSValue* jsWebKitTransitionEventPrototypeFunctionInitWebKitTransitionEvent(ExecState* exec, JSObject*, JSValue* thisValue, const ArgList& args)
{
    if (!thisValue->isObject(&JSWebKitTransitionEvent::s_info))
        return throwError(exec, TypeError);
    JSWebKitTransitionEvent* castedThisObj = static_cast<JSWebKitTransitionEvent*>(thisValue);
    WebKitTransitionEvent* imp = static_cast<WebKitTransitionEvent*>(castedThisObj->impl());
    const UString& typeArg = args.at(exec, 0)->toString(exec);
    bool canBubbleArg = args.at(exec, 1)->toBoolean(exec);
    bool cancelableArg = args.at(exec, 2)->toBoolean(exec);
    const UString& propertyNameArg = args.at(exec, 3)->toString(exec);
    double elapsedTimeArg = args.at(exec, 4)->toNumber(exec);

    imp->initWebKitTransitionEvent(typeArg, canBubbleArg, cancelableArg, propertyNameArg, elapsedTimeArg);
    return jsUndefined();
}


}
