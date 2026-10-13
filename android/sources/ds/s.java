package ds;

import a5.h0;
import java.lang.annotation.Annotation;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KClass;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.json.JsonObject;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public abstract class s {
    public static final t a = new t();

    public static final n a(Number value, String key, String output) {
        Intrinsics.checkNotNullParameter(value, "value");
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(output, "output");
        return e(-1, "Unexpected special floating-point value " + value + " with key " + key + ". By default, non-finite floating point values are prohibited because they do not conform JSON specification. It is possible to deserialize them using 'JsonBuilder.allowSpecialFloatingPointValues = true'\nCurrent output: " + ((Object) o(-1, output)));
    }

    public static final q b(Number value, String output) {
        Intrinsics.checkNotNullParameter(value, "value");
        Intrinsics.checkNotNullParameter(output, "output");
        return new q("Unexpected special floating-point value " + value + ". By default, non-finite floating point values are prohibited because they do not conform JSON specification. It is possible to deserialize them using 'JsonBuilder.allowSpecialFloatingPointValues = true'\nCurrent output: " + ((Object) o(-1, output)));
    }

    public static final q c(SerialDescriptor keyDescriptor) {
        Intrinsics.checkNotNullParameter(keyDescriptor, "keyDescriptor");
        return new q("Value of type '" + keyDescriptor.a() + "' can't be used in JSON as a key in the map. It should have either primitive or enum kind, but its kind is '" + keyDescriptor.b() + "'.\nUse 'allowStructuredMapKeys = true' in 'Json {}' builder to convert such maps to [key1, value1, key2, value2,...] arrays.");
    }

    public static final n d(int i5, CharSequence input, String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        Intrinsics.checkNotNullParameter(input, "input");
        return e(i5, message + "\nJSON input: " + ((Object) o(i5, input)));
    }

    public static final n e(int i5, String message) {
        Intrinsics.checkNotNullParameter(message, "message");
        if (i5 >= 0) {
            message = "Unexpected JSON token at offset " + i5 + ": " + message;
        }
        Intrinsics.checkNotNullParameter(message, "message");
        return new n(message);
    }

    public static final e0 f(Json json, String source) {
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(source, "source");
        androidx.appcompat.widget.v vVar = json.a;
        return new e0(source);
    }

    public static final SerialDescriptor g(SerialDescriptor descriptor, SerializersModule module) {
        Intrinsics.checkNotNullParameter(descriptor, "<this>");
        Intrinsics.checkNotNullParameter(module, "module");
        if (!Intrinsics.areEqual(descriptor.b(), zr.h.f21431t)) {
            return descriptor.isInline() ? g(descriptor.i(0), module) : descriptor;
        }
        Intrinsics.checkNotNullParameter(module, "<this>");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        KClass p3 = com.facebook.imagepipeline.nativecode.b.p(descriptor);
        if (p3 == null) {
            return descriptor;
        }
        SerializersModule.c(module, p3);
        return descriptor;
    }

    public static final byte h(char c6) {
        if (c6 < '~') {
            return i.f7731b[c6];
        }
        return (byte) 0;
    }

    public static final String i(SerialDescriptor serialDescriptor, Json json) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        Intrinsics.checkNotNullParameter(json, "json");
        for (Annotation annotation : serialDescriptor.getAnnotations()) {
            if (annotation instanceof cs.e) {
                return ((cs.e) annotation).discriminator();
            }
        }
        return (String) json.a.f1126b;
    }

    public static final Object j(Json json, DeserializationStrategy deserializer, ve.i reader) {
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        Intrinsics.checkNotNullParameter(reader, "reader");
        char[] buffer = h.f7730c.b(16384);
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(reader, "reader");
        Intrinsics.checkNotNullParameter(buffer, "buffer");
        a0 a0Var = new a0(reader, buffer);
        try {
            Object decodeSerializableValue = new b0(json, g0.f7723i, a0Var, deserializer.getDescriptor(), null).decodeSerializableValue(deserializer);
            a0Var.o();
            return decodeSerializableValue;
        } finally {
            a0Var.I();
        }
    }

    public static final void k(Json json, a5.a0 sb2, KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(sb2, "writer");
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        g0 mode = g0.f7723i;
        c0[] modeReuseCache = new c0[g0.E.a()];
        Intrinsics.checkNotNullParameter(sb2, "output");
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(mode, "mode");
        Intrinsics.checkNotNullParameter(modeReuseCache, "modeReuseCache");
        Intrinsics.checkNotNullParameter(sb2, "sb");
        Intrinsics.checkNotNullParameter(json, "json");
        new c0(new h0(sb2), json, mode, modeReuseCache).M(serializer, obj);
    }

    public static final int l(SerialDescriptor descriptor, Json json, String name) {
        Intrinsics.checkNotNullParameter(descriptor, "<this>");
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(name, "name");
        androidx.appcompat.widget.v vVar = json.a;
        p(descriptor, json);
        int e9 = descriptor.e(name);
        if (e9 != -3 || !json.a.f1130f) {
            return e9;
        }
        Intrinsics.checkNotNullParameter(json, "<this>");
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        Intrinsics.checkNotNullParameter(json, "<this>");
        u4.c cVar = json.f13608c;
        bs.c0 defaultValue = new bs.c0(25, descriptor, json);
        cVar.getClass();
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        t key = a;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(defaultValue, "defaultValue");
        Object value = cVar.C(descriptor, key);
        if (value == null) {
            value = defaultValue.invoke();
            Intrinsics.checkNotNullParameter(descriptor, "descriptor");
            Intrinsics.checkNotNullParameter(key, "key");
            Intrinsics.checkNotNullParameter(value, "value");
            ConcurrentHashMap concurrentHashMap = (ConcurrentHashMap) cVar.f18811d;
            Object obj = concurrentHashMap.get(descriptor);
            if (obj == null) {
                obj = new ConcurrentHashMap(2);
                concurrentHashMap.put(descriptor, obj);
            }
            ((Map) obj).put(key, value);
        }
        Integer num = (Integer) ((Map) value).get(name);
        if (num != null) {
            return num.intValue();
        }
        return -3;
    }

    public static final int m(SerialDescriptor serialDescriptor, Json json, String name, String suffix) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        Intrinsics.checkNotNullParameter(json, "json");
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(suffix, "suffix");
        int l6 = l(serialDescriptor, json, name);
        if (l6 != -3) {
            return l6;
        }
        throw new xr.f(serialDescriptor.a() + " does not contain element with name '" + name + '\'' + suffix);
    }

    public static final void n(a aVar, String entity) {
        Intrinsics.checkNotNullParameter(aVar, "<this>");
        Intrinsics.checkNotNullParameter(entity, "entity");
        aVar.p(aVar.f7691b - 1, "Trailing comma before the end of JSON ".concat(entity), "Trailing commas are non-complaint JSON and not allowed by default. Use 'allowTrailingCommas = true' in 'Json {}' builder to support them.");
        throw null;
    }

    public static final CharSequence o(int i5, CharSequence charSequence) {
        Intrinsics.checkNotNullParameter(charSequence, "<this>");
        if (charSequence.length() >= 200) {
            if (i5 != -1) {
                int i6 = i5 - 30;
                int i10 = i5 + 30;
                String str = i6 <= 0 ? "" : ".....";
                String str2 = i10 >= charSequence.length() ? "" : ".....";
                StringBuilder o6 = k0.d.o(str);
                if (i6 < 0) {
                    i6 = 0;
                }
                int length = charSequence.length();
                if (i10 > length) {
                    i10 = length;
                }
                o6.append(charSequence.subSequence(i6, i10).toString());
                o6.append(str2);
                return o6.toString();
            }
            int length2 = charSequence.length() - 60;
            if (length2 > 0) {
                return "....." + charSequence.subSequence(length2, charSequence.length()).toString();
            }
        }
        return charSequence;
    }

    public static final void p(SerialDescriptor serialDescriptor, Json json) {
        Intrinsics.checkNotNullParameter(serialDescriptor, "<this>");
        Intrinsics.checkNotNullParameter(json, "json");
        if (Intrinsics.areEqual(serialDescriptor.b(), zr.j.f21433t)) {
            androidx.appcompat.widget.v vVar = json.a;
        }
    }

    public static final Object q(Json json, String discriminator, JsonObject element, DeserializationStrategy deserializer) {
        Intrinsics.checkNotNullParameter(json, "<this>");
        Intrinsics.checkNotNullParameter(discriminator, "discriminator");
        Intrinsics.checkNotNullParameter(element, "element");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        return new v(json, element, discriminator, deserializer.getDescriptor()).decodeSerializableValue(deserializer);
    }

    public static final g0 r(SerialDescriptor desc, Json json) {
        Intrinsics.checkNotNullParameter(json, "<this>");
        Intrinsics.checkNotNullParameter(desc, "desc");
        d9.a b10 = desc.b();
        if (b10 instanceof zr.d) {
            return g0.f7726x;
        }
        if (Intrinsics.areEqual(b10, zr.j.f21434u)) {
            return g0.f7724v;
        }
        if (!Intrinsics.areEqual(b10, zr.j.f21435v)) {
            return g0.f7723i;
        }
        SerialDescriptor g6 = g(desc.i(0), json.f13607b);
        d9.a b11 = g6.b();
        if ((b11 instanceof zr.f) || Intrinsics.areEqual(b11, zr.i.f21432t)) {
            return g0.f7725w;
        }
        throw c(g6);
    }

    public static final void s(a aVar, Number result) {
        Intrinsics.checkNotNullParameter(aVar, "<this>");
        Intrinsics.checkNotNullParameter(result, "result");
        a.q(aVar, "Unexpected special floating-point value " + result + ". By default, non-finite floating point values are prohibited because they do not conform JSON specification", 0, "It is possible to deserialize them using 'JsonBuilder.allowSpecialFloatingPointValues = true'", 2);
        throw null;
    }

    public static final String t(byte b10) {
        return b10 == 1 ? "quotation mark '\"'" : b10 == 2 ? "string escape sequence '\\'" : b10 == 4 ? "comma ','" : b10 == 5 ? "colon ':'" : b10 == 6 ? "start of the object '{'" : b10 == 7 ? "end of the object '}'" : b10 == 8 ? "start of the array '['" : b10 == 9 ? "end of the array ']'" : b10 == 10 ? "end of the input" : b10 == Byte.MAX_VALUE ? "invalid token" : "valid token";
    }
}
