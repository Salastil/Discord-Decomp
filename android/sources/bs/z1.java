package bs;

import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class z1 implements KSerializer {
    public static final z1 a = new z1();

    /* renamed from: b, reason: collision with root package name */
    public static final k0 f3263b;

    static {
        Intrinsics.checkNotNullParameter(ByteCompanionObject.INSTANCE, "<this>");
        f3263b = h1.a("kotlin.UByte", j.a);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return new fo.y(decoder.decodeInline(f3263b).decodeByte());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3263b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        byte b10 = ((fo.y) obj).f8844d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.L(f3263b).j(b10);
    }
}
