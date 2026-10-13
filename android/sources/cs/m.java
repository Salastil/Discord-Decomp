package cs;

import bs.f2;
import bs.n1;
import fo.f0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Reflection;
import kotlin.text.StringsKt;
import kotlin.text.c0;
import kotlin.text.w;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonElement;

/* loaded from: classes3.dex */
public final class m implements KSerializer {
    public static final m a = new m();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f7332b = com.facebook.imagepipeline.nativecode.c.a("kotlinx.serialization.json.JsonLiteral", zr.e.B);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        JsonElement a10 = com.facebook.imagepipeline.nativecode.c.c(decoder).a();
        if (a10 instanceof l) {
            return (l) a10;
        }
        throw ds.s.d(-1, a10.toString(), "Unexpected JSON element, expected JsonLiteral, had " + Reflection.getOrCreateKotlinClass(a10.getClass()));
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f7332b;
    }

    /* JADX WARN: Removed duplicated region for block: B:20:0x0056  */
    /* JADX WARN: Removed duplicated region for block: B:22:0x005e  */
    @Override // kotlinx.serialization.KSerializer
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final void serialize(Encoder encoder, Object obj) {
        Double d6;
        l value = (l) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        com.facebook.imagepipeline.nativecode.c.b(encoder);
        boolean z5 = value.f7330d;
        String str = value.f7331e;
        if (z5) {
            encoder.Q(str);
            return;
        }
        Long a0 = StringsKt.a0(str);
        if (a0 != null) {
            encoder.O(a0.longValue());
            return;
        }
        f0 f2 = c0.f(str);
        if (f2 != null) {
            long j = f2.f8815d;
            Intrinsics.checkNotNullParameter(f0.f8814e, "<this>");
            encoder.L(f2.f3185b).O(j);
            return;
        }
        Intrinsics.checkNotNullParameter(str, "<this>");
        Boolean bool = null;
        if (w.d(str)) {
            d6 = Double.valueOf(Double.parseDouble(str));
            if (d6 == null) {
                encoder.e(d6.doubleValue());
                return;
            }
            Intrinsics.checkNotNullParameter(str, "<this>");
            if (Intrinsics.areEqual(str, "true")) {
                bool = Boolean.TRUE;
            } else if (Intrinsics.areEqual(str, "false")) {
                bool = Boolean.FALSE;
            }
            if (bool != null) {
                encoder.k(bool.booleanValue());
                return;
            } else {
                encoder.Q(str);
                return;
            }
        }
        d6 = null;
        if (d6 == null) {
        }
    }
}
