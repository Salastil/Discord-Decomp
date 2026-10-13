package ds;

import bs.a1;
import bs.k0;
import java.util.ArrayList;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonElement;
import kotlinx.serialization.json.JsonNull;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.json.JsonPrimitive;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public abstract class b extends a1 implements cs.g {

    /* renamed from: d, reason: collision with root package name */
    public final Json f7699d;

    /* renamed from: e, reason: collision with root package name */
    public final String f7700e;

    /* renamed from: f, reason: collision with root package name */
    public final androidx.appcompat.widget.v f7701f;

    public b(Json json, String str) {
        this.f7699d = json;
        this.f7700e = str;
        this.f7701f = json.a;
    }

    public final String A(String currentTag) {
        Intrinsics.checkNotNullParameter(currentTag, "currentTag");
        return w() + '.' + currentTag;
    }

    public final void B(JsonPrimitive jsonPrimitive, String str, String str2) {
        throw s.d(-1, y().toString(), "Failed to parse literal '" + jsonPrimitive + "' as " + (kotlin.text.x.o(str, "i", false) ? "an " : "a ").concat(str) + " value at element: " + A(str2));
    }

    @Override // cs.g
    public final JsonElement a() {
        return y();
    }

    @Override // cs.g
    public final Json b() {
        return this.f7699d;
    }

    @Override // kotlinx.serialization.encoding.Decoder
    public CompositeDecoder beginStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        JsonElement y5 = y();
        d9.a b10 = descriptor.b();
        boolean areEqual = Intrinsics.areEqual(b10, zr.j.f21434u);
        Json json = this.f7699d;
        if (areEqual || (b10 instanceof zr.d)) {
            String a = descriptor.a();
            if (y5 instanceof kotlinx.serialization.json.a) {
                return new w(json, (kotlinx.serialization.json.a) y5);
            }
            throw s.d(-1, y5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(kotlinx.serialization.json.a.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(y5.getClass()).getSimpleName() + " as the serialized body of " + a + " at element: " + w());
        }
        if (!Intrinsics.areEqual(b10, zr.j.f21435v)) {
            String a10 = descriptor.a();
            if (y5 instanceof JsonObject) {
                return new v(json, (JsonObject) y5, this.f7700e, 8);
            }
            throw s.d(-1, y5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonObject.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(y5.getClass()).getSimpleName() + " as the serialized body of " + a10 + " at element: " + w());
        }
        SerialDescriptor g6 = s.g(descriptor.i(0), json.f13607b);
        d9.a b11 = g6.b();
        if (!(b11 instanceof zr.f) && !Intrinsics.areEqual(b11, zr.i.f21432t)) {
            throw s.c(g6);
        }
        String a11 = descriptor.a();
        if (y5 instanceof JsonObject) {
            return new x(json, (JsonObject) y5);
        }
        throw s.d(-1, y5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonObject.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(y5.getClass()).getSimpleName() + " as the serialized body of " + a11 + " at element: " + w());
    }

    @Override // bs.a1
    public final String d(String parentName, String childName) {
        Intrinsics.checkNotNullParameter(parentName, "parentName");
        Intrinsics.checkNotNullParameter(childName, "childName");
        return childName;
    }

    @Override // bs.a1, kotlinx.serialization.encoding.Decoder
    public final Decoder decodeInline(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        if (CollectionsKt.S((ArrayList) this.f3160c) != null) {
            return super.decodeInline(descriptor);
        }
        return new u(this.f7699d, z(), this.f7700e).decodeInline(descriptor);
    }

    @Override // bs.a1, kotlinx.serialization.encoding.Decoder
    public boolean decodeNotNullMark() {
        return !(y() instanceof JsonNull);
    }

    @Override // bs.a1, kotlinx.serialization.encoding.Decoder
    public final Object decodeSerializableValue(DeserializationStrategy deserializer) {
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        if (!(deserializer instanceof bs.b)) {
            return deserializer.deserialize(this);
        }
        Json json = this.f7699d;
        androidx.appcompat.widget.v vVar = json.a;
        bs.b bVar = (bs.b) deserializer;
        String i5 = s.i(bVar.getDescriptor(), json);
        JsonElement y5 = y();
        String a = bVar.getDescriptor().a();
        if (y5 instanceof JsonObject) {
            JsonObject jsonObject = (JsonObject) y5;
            JsonElement jsonElement = (JsonElement) jsonObject.get(i5);
            try {
                DeserializationStrategy k = ys.l.k((bs.b) deserializer, this, jsonElement != null ? cs.h.f(cs.h.k(jsonElement)) : null);
                Intrinsics.checkNotNull(k, "null cannot be cast to non-null type kotlinx.serialization.DeserializationStrategy<T of kotlinx.serialization.json.internal.PolymorphicKt.decodeSerializableValuePolymorphic>");
                return s.q(json, i5, jsonObject, k);
            } catch (xr.f e9) {
                String message = e9.getMessage();
                Intrinsics.checkNotNull(message);
                throw s.d(-1, jsonObject.toString(), message);
            }
        }
        throw s.d(-1, y5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonObject.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(y5.getClass()).getSimpleName() + " as the serialized body of " + a + " at element: " + w());
    }

    @Override // bs.a1
    public final boolean e(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (!(x5 instanceof JsonPrimitive)) {
            throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of boolean at element: " + A(tag));
        }
        JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
        try {
            k0 k0Var = cs.h.a;
            Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
            String a = jsonPrimitive.a();
            String[] strArr = f0.a;
            Intrinsics.checkNotNullParameter(a, "<this>");
            Boolean bool = kotlin.text.x.i(a, "true", true) ? Boolean.TRUE : kotlin.text.x.i(a, "false", true) ? Boolean.FALSE : null;
            if (bool != null) {
                return bool.booleanValue();
            }
            B(jsonPrimitive, "boolean", tag);
            throw null;
        } catch (IllegalArgumentException unused) {
            B(jsonPrimitive, "boolean", tag);
            throw null;
        }
    }

    @Override // bs.a1, kotlinx.serialization.encoding.CompositeDecoder
    public void endStructure(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
    }

    @Override // bs.a1
    public final byte f(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (!(x5 instanceof JsonPrimitive)) {
            throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of byte at element: " + A(tag));
        }
        JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
        try {
            int g6 = cs.h.g(jsonPrimitive);
            Byte valueOf = (-128 > g6 || g6 > 127) ? null : Byte.valueOf((byte) g6);
            if (valueOf != null) {
                return valueOf.byteValue();
            }
            B(jsonPrimitive, "byte", tag);
            throw null;
        } catch (IllegalArgumentException unused) {
            B(jsonPrimitive, "byte", tag);
            throw null;
        }
    }

    @Override // bs.a1
    public final char g(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (x5 instanceof JsonPrimitive) {
            JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
            try {
                return kotlin.text.b0.A(jsonPrimitive.a());
            } catch (IllegalArgumentException unused) {
                B(jsonPrimitive, "char", tag);
                throw null;
            }
        }
        throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of char at element: " + A(tag));
    }

    @Override // kotlinx.serialization.encoding.Decoder, kotlinx.serialization.encoding.CompositeDecoder
    public final SerializersModule getSerializersModule() {
        return this.f7699d.f13607b;
    }

    @Override // bs.a1
    public final double h(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (!(x5 instanceof JsonPrimitive)) {
            throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of double at element: " + A(tag));
        }
        JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
        try {
            k0 k0Var = cs.h.a;
            Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
            double parseDouble = Double.parseDouble(jsonPrimitive.a());
            androidx.appcompat.widget.v vVar = this.f7699d.a;
            if (Double.isInfinite(parseDouble) || Double.isNaN(parseDouble)) {
                throw s.a(Double.valueOf(parseDouble), tag, y().toString());
            }
            return parseDouble;
        } catch (IllegalArgumentException unused) {
            B(jsonPrimitive, "double", tag);
            throw null;
        }
    }

    @Override // bs.a1
    public final int i(Object obj, SerialDescriptor enumDescriptor) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(enumDescriptor, "enumDescriptor");
        JsonElement x5 = x(tag);
        String a = enumDescriptor.a();
        if (x5 instanceof JsonPrimitive) {
            return s.m(enumDescriptor, this.f7699d, ((JsonPrimitive) x5).a(), "");
        }
        throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of " + a + " at element: " + A(tag));
    }

    @Override // bs.a1
    public final float j(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (!(x5 instanceof JsonPrimitive)) {
            throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of float at element: " + A(tag));
        }
        JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
        try {
            k0 k0Var = cs.h.a;
            Intrinsics.checkNotNullParameter(jsonPrimitive, "<this>");
            float parseFloat = Float.parseFloat(jsonPrimitive.a());
            androidx.appcompat.widget.v vVar = this.f7699d.a;
            if (Float.isInfinite(parseFloat) || Float.isNaN(parseFloat)) {
                throw s.a(Float.valueOf(parseFloat), tag, y().toString());
            }
            return parseFloat;
        } catch (IllegalArgumentException unused) {
            B(jsonPrimitive, "float", tag);
            throw null;
        }
    }

    @Override // bs.a1
    public final Decoder k(Object obj, SerialDescriptor inlineDescriptor) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        Intrinsics.checkNotNullParameter(inlineDescriptor, "inlineDescriptor");
        if (!d0.a(inlineDescriptor)) {
            Intrinsics.checkNotNullParameter(inlineDescriptor, "inlineDescriptor");
            ((ArrayList) this.f3160c).add(tag);
            return this;
        }
        JsonElement x5 = x(tag);
        String a = inlineDescriptor.a();
        if (x5 instanceof JsonPrimitive) {
            String a10 = ((JsonPrimitive) x5).a();
            Json json = this.f7699d;
            return new m(s.f(json, a10), json);
        }
        throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of " + a + " at element: " + A(tag));
    }

    @Override // bs.a1
    public final int l(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (x5 instanceof JsonPrimitive) {
            JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
            try {
                return cs.h.g(jsonPrimitive);
            } catch (IllegalArgumentException unused) {
                B(jsonPrimitive, "int", tag);
                throw null;
            }
        }
        throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of int at element: " + A(tag));
    }

    @Override // bs.a1
    public final long m(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (x5 instanceof JsonPrimitive) {
            JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
            try {
                return cs.h.l(jsonPrimitive);
            } catch (IllegalArgumentException unused) {
                B(jsonPrimitive, "long", tag);
                throw null;
            }
        }
        throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of long at element: " + A(tag));
    }

    @Override // bs.a1
    public final boolean n(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        return x(tag) != JsonNull.INSTANCE;
    }

    @Override // bs.a1
    public final short o(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (!(x5 instanceof JsonPrimitive)) {
            throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of short at element: " + A(tag));
        }
        JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
        try {
            int g6 = cs.h.g(jsonPrimitive);
            Short valueOf = (-32768 > g6 || g6 > 32767) ? null : Short.valueOf((short) g6);
            if (valueOf != null) {
                return valueOf.shortValue();
            }
            B(jsonPrimitive, "short", tag);
            throw null;
        } catch (IllegalArgumentException unused) {
            B(jsonPrimitive, "short", tag);
            throw null;
        }
    }

    @Override // bs.a1
    public final String p(Object obj) {
        String tag = (String) obj;
        Intrinsics.checkNotNullParameter(tag, "tag");
        JsonElement x5 = x(tag);
        if (!(x5 instanceof JsonPrimitive)) {
            throw s.d(-1, x5.toString(), "Expected " + Reflection.getOrCreateKotlinClass(JsonPrimitive.class).getSimpleName() + ", but had " + Reflection.getOrCreateKotlinClass(x5.getClass()).getSimpleName() + " as the serialized body of string at element: " + A(tag));
        }
        JsonPrimitive jsonPrimitive = (JsonPrimitive) x5;
        if (!(jsonPrimitive instanceof cs.l)) {
            StringBuilder m5 = com.discord.chat.bridge.botuikit.a.m("Expected string value for a non-null key '", tag, "', got null literal instead at element: ");
            m5.append(A(tag));
            throw s.d(-1, y().toString(), m5.toString());
        }
        cs.l lVar = (cs.l) jsonPrimitive;
        if (lVar.f7330d) {
            return lVar.f7331e;
        }
        androidx.appcompat.widget.v vVar = this.f7699d.a;
        StringBuilder m6 = com.discord.chat.bridge.botuikit.a.m("String literal for key '", tag, "' should be quoted at element: ");
        m6.append(A(tag));
        m6.append(".\nUse 'isLenient = true' in 'Json {}' builder to accept non-compliant JSON.");
        throw s.d(-1, y().toString(), m6.toString());
    }

    public abstract JsonElement x(String str);

    public final JsonElement y() {
        JsonElement x5;
        String str = (String) CollectionsKt.S((ArrayList) this.f3160c);
        return (str == null || (x5 = x(str)) == null) ? z() : x5;
    }

    public abstract JsonElement z();
}
