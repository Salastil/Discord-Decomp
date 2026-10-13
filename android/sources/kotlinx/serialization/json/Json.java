package kotlinx.serialization.json;

import a5.a0;
import androidx.appcompat.widget.v;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import cs.b;
import cs.i;
import cs.l;
import ds.b0;
import ds.e0;
import ds.g;
import ds.g0;
import ds.s;
import ds.u;
import ds.w;
import fo.n;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.modules.SerializersModule;
import u4.c;

/* loaded from: classes3.dex */
public abstract class Json {

    /* renamed from: d, reason: collision with root package name */
    public static final b f13606d = new b(new v(false, true, "    ", "type", true, cs.a.f7324e), es.b.a);
    public final v a;

    /* renamed from: b, reason: collision with root package name */
    public final SerializersModule f13607b;

    /* renamed from: c, reason: collision with root package name */
    public final c f13608c = new c(9);

    public Json(v vVar, SerializersModule serializersModule) {
        this.a = vVar;
        this.f13607b = serializersModule;
    }

    public final Object a(DeserializationStrategy deserializer, JsonElement element) {
        Decoder uVar;
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        Intrinsics.checkNotNullParameter(element, "element");
        Intrinsics.checkNotNullParameter(this, "json");
        Intrinsics.checkNotNullParameter(element, "element");
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        String str = null;
        if (element instanceof JsonObject) {
            uVar = new ds.v(this, (JsonObject) element, str, 12);
        } else if (element instanceof a) {
            uVar = new w(this, (a) element);
        } else {
            if (!(element instanceof l) && !Intrinsics.areEqual(element, JsonNull.INSTANCE)) {
                throw new n();
            }
            uVar = new u(this, (JsonPrimitive) element, null);
        }
        return uVar.decodeSerializableValue(deserializer);
    }

    public final Object b(DeserializationStrategy deserializer, String string) {
        Intrinsics.checkNotNullParameter(deserializer, "deserializer");
        Intrinsics.checkNotNullParameter(string, "string");
        e0 f2 = s.f(this, string);
        Object decodeSerializableValue = new b0(this, g0.f7723i, f2, deserializer.getDescriptor(), null).decodeSerializableValue(deserializer);
        f2.o();
        return decodeSerializableValue;
    }

    public final String c(KSerializer serializer, Object obj) {
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        a0 a0Var = new a0(3, (short) 0);
        g gVar = g.f7722c;
        a0Var.f125i = gVar.b(IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
        try {
            s.k(this, a0Var, serializer, obj);
            String a0Var2 = a0Var.toString();
            char[] array = (char[]) a0Var.f125i;
            gVar.getClass();
            Intrinsics.checkNotNullParameter(array, "array");
            gVar.a(array);
            return a0Var2;
        } catch (Throwable th2) {
            g gVar2 = g.f7722c;
            char[] array2 = (char[]) a0Var.f125i;
            gVar2.getClass();
            Intrinsics.checkNotNullParameter(array2, "array");
            gVar2.a(array2);
            throw th2;
        }
    }

    public final JsonElement d(String string) {
        Intrinsics.checkNotNullParameter(string, "string");
        return (JsonElement) b(i.a, string);
    }
}
