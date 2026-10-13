package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.ShortCompanionObject;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class i2 implements KSerializer {
    public static final i2 a = new i2();

    /* renamed from: b, reason: collision with root package name */
    public static final k0 f3198b;

    static {
        Intrinsics.checkNotNullParameter(ShortCompanionObject.INSTANCE, "<this>");
        f3198b = h1.a("kotlin.UShort", u1.a);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return new fo.j0(decoder.decodeInline(f3198b).decodeShort());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3198b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        short s2 = ((fo.j0) obj).f8818d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.L(f3198b).f(s2);
    }
}
