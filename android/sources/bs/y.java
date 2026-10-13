package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.time.Duration;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class y implements KSerializer {
    public static final y a = new y();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3257b = new n1("kotlin.time.Duration", zr.e.B);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        lr.a aVar = Duration.f13595e;
        String value = decoder.decodeString();
        aVar.getClass();
        Intrinsics.checkNotNullParameter(value, "value");
        try {
            return new Duration(lr.c.a(value));
        } catch (IllegalArgumentException e9) {
            throw new IllegalArgumentException(s4.h.f("Invalid ISO duration string format: '", value, "'."), e9);
        }
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3257b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        long j = ((Duration) obj).f13598d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        lr.a aVar = Duration.f13595e;
        StringBuilder sb2 = new StringBuilder();
        if (j < 0) {
            sb2.append('-');
        }
        sb2.append("PT");
        long m5 = j < 0 ? Duration.m(j) : j;
        long k = Duration.k(m5, lr.d.f14214x);
        int e9 = Duration.e(m5);
        int g6 = Duration.g(m5);
        int f2 = Duration.f(m5);
        if (Duration.h(j)) {
            k = 9999999999999L;
        }
        boolean z5 = false;
        boolean z6 = k != 0;
        boolean z7 = (g6 == 0 && f2 == 0) ? false : true;
        if (e9 != 0 || (z7 && z6)) {
            z5 = true;
        }
        if (z6) {
            sb2.append(k);
            sb2.append('H');
        }
        if (z5) {
            sb2.append(e9);
            sb2.append('M');
        }
        if (z7 || (!z6 && !z5)) {
            Duration.b(sb2, g6, f2, 9, "S", true);
        }
        encoder.Q(sb2.toString());
    }
}
