package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class f2 implements KSerializer {
    public static final f2 a = new f2();

    /* renamed from: b, reason: collision with root package name */
    public static final k0 f3185b;

    static {
        Intrinsics.checkNotNullParameter(LongCompanionObject.INSTANCE, "<this>");
        f3185b = h1.a("kotlin.ULong", t0.a);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return new fo.f0(decoder.decodeInline(f3185b).decodeLong());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f3185b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        long j = ((fo.f0) obj).f8815d;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        encoder.L(f3185b).O(j);
    }
}
