package cs;

import bs.h1;
import bs.k0;
import bs.v1;
import ds.e0;
import ds.f0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.text.x;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonNull;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;

/* loaded from: classes3.dex */
public abstract class h {
    public static final k0 a;

    static {
        nf.e.A(StringCompanionObject.INSTANCE);
        a = h1.a("kotlinx.serialization.json.JsonUnquotedLiteral", v1.a);
    }

    public static final JsonPrimitive a(Boolean bool) {
        return new l(bool, false);
    }

    public static final JsonPrimitive b(Number number) {
        return new l(number, false);
    }

    public static final JsonPrimitive c(String str) {
        return str == null ? JsonNull.INSTANCE : new l(str, true);
    }

    public static final void d(String str, JsonElement jsonElement) {
        throw new IllegalArgumentException("Element " + Reflection.getOrCreateKotlinClass(jsonElement.getClass()) + " is not a " + str);
    }

    public static final boolean e(JsonPrimitive jsonPrimitive) {
        Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
        String a10 = jsonPrimitive.a();
        String[] strArr = f0.a;
        Intrinsics.checkNotNullParameter(a10, "<this>");
        Boolean bool = x.i(a10, "true", true) ? Boolean.TRUE : x.i(a10, "false", true) ? Boolean.FALSE : null;
        if (bool != null) {
            return bool.booleanValue();
        }
        throw new IllegalStateException(jsonPrimitive + " does not represent a Boolean");
    }

    public static final String f(JsonPrimitive jsonPrimitive) {
        Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
        if (jsonPrimitive instanceof JsonNull) {
            return null;
        }
        return jsonPrimitive.a();
    }

    public static final int g(JsonPrimitive jsonPrimitive) {
        Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
        try {
            long i5 = new e0(jsonPrimitive.a()).i();
            if (-2147483648L <= i5 && i5 <= 2147483647L) {
                return (int) i5;
            }
            throw new NumberFormatException(jsonPrimitive.a() + " is not an Int");
        } catch (ds.n e9) {
            throw new NumberFormatException(e9.getMessage());
        }
    }

    public static final Integer h(JsonPrimitive jsonPrimitive) {
        Long l6;
        Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
        try {
            l6 = Long.valueOf(new e0(jsonPrimitive.a()).i());
        } catch (ds.n unused) {
            l6 = null;
        }
        if (l6 != null) {
            long longValue = l6.longValue();
            if (-2147483648L <= longValue && longValue <= 2147483647L) {
                return Integer.valueOf((int) longValue);
            }
        }
        return null;
    }

    public static final kotlinx.serialization.json.a i(JsonElement jsonElement) {
        Intrinsics.checkNotNullParameter(jsonElement, "<this>");
        kotlinx.serialization.json.a aVar = jsonElement instanceof kotlinx.serialization.json.a ? (kotlinx.serialization.json.a) jsonElement : null;
        if (aVar != null) {
            return aVar;
        }
        d("JsonArray", jsonElement);
        throw null;
    }

    public static final JsonObject j(JsonElement jsonElement) {
        Intrinsics.checkNotNullParameter(jsonElement, "<this>");
        JsonObject jsonObject = jsonElement instanceof JsonObject ? (JsonObject) jsonElement : null;
        if (jsonObject != null) {
            return jsonObject;
        }
        d("JsonObject", jsonElement);
        throw null;
    }

    public static final JsonPrimitive k(JsonElement jsonElement) {
        Intrinsics.checkNotNullParameter(jsonElement, "<this>");
        JsonPrimitive jsonPrimitive = jsonElement instanceof JsonPrimitive ? (JsonPrimitive) jsonElement : null;
        if (jsonPrimitive != null) {
            return jsonPrimitive;
        }
        d("JsonPrimitive", jsonElement);
        throw null;
    }

    public static final long l(JsonPrimitive jsonPrimitive) {
        Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
        try {
            return new e0(jsonPrimitive.a()).i();
        } catch (ds.n e9) {
            throw new NumberFormatException(e9.getMessage());
        }
    }

    public static final Long m(JsonPrimitive jsonPrimitive) {
        Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
        try {
            return Long.valueOf(new e0(jsonPrimitive.a()).i());
        } catch (ds.n unused) {
            return null;
        }
    }
}
