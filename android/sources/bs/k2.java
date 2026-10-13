package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class k2 implements KSerializer {
    public static final k2 a = new k2();

    /* renamed from: b, reason: collision with root package name */
    public static final n1 f3213b = new n1("kotlin.uuid.Uuid", zr.e.B);

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        String sb2;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        String hexString = decoder.decodeString();
        Intrinsics.checkNotNullParameter(hexString, "uuidString");
        int length = hexString.length();
        if (length == 32) {
            Intrinsics.checkNotNullParameter(hexString, "hexString");
            Intrinsics.checkNotNullParameter(hexString, "hexString");
            long b10 = kotlin.text.d.b(0, 16, hexString);
            long b11 = kotlin.text.d.b(16, 32, hexString);
            if (b10 != 0 || b11 != 0) {
                return new mr.a(b10, b11);
            }
        } else {
            if (length != 36) {
                StringBuilder sb3 = new StringBuilder("Expected either a 36-char string in the standard hex-and-dash UUID format or a 32-char hexadecimal string, but was \"");
                if (hexString.length() <= 64) {
                    sb2 = hexString;
                } else {
                    StringBuilder sb4 = new StringBuilder();
                    Intrinsics.checkNotNull(hexString, "null cannot be cast to non-null type java.lang.String");
                    String substring = hexString.substring(0, 64);
                    Intrinsics.checkNotNullExpressionValue(substring, "substring(...)");
                    sb4.append(substring);
                    sb4.append("...");
                    sb2 = sb4.toString();
                }
                sb3.append(sb2);
                sb3.append("\" of length ");
                sb3.append(hexString.length());
                throw new IllegalArgumentException(sb3.toString());
            }
            Intrinsics.checkNotNullParameter(hexString, "hexDashString");
            Intrinsics.checkNotNullParameter(hexString, "hexDashString");
            long b12 = kotlin.text.d.b(0, 8, hexString);
            ks.n.c(8, hexString);
            long b13 = kotlin.text.d.b(9, 13, hexString);
            ks.n.c(13, hexString);
            long b14 = kotlin.text.d.b(14, 18, hexString);
            ks.n.c(18, hexString);
            long b15 = kotlin.text.d.b(19, 23, hexString);
            ks.n.c(23, hexString);
            long j = (b13 << 16) | (b12 << 32) | b14;
            long b16 = kotlin.text.d.b(24, 36, hexString) | (b15 << 48);
            if (j != 0 || b16 != 0) {
                return new mr.a(j, b16);
            }
        }
        return mr.a.f14585v;
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3213b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        mr.a value = (mr.a) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        encoder.Q(value.toString());
    }
}
