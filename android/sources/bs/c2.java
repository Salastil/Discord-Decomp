package bs;

import kotlin.jvm.internal.IntCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class c2 implements KSerializer {
    public static final c2 a = new c2();

    /* renamed from: b, reason: collision with root package name */
    public static final k0 f3170b;

    static {
        Intrinsics.checkNotNullParameter(IntCompanionObject.INSTANCE, "<this>");
        f3170b = h1.a("kotlin.UInt", o0.a);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return new fo.c0(decoder.decodeInline(f3170b).decodeInt());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3170b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        int i5 = ((fo.c0) obj).f8810d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.L(f3170b).K(i5);
    }
}
