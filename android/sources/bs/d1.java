package bs;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class d1 implements KSerializer {
    public final KSerializer a;

    /* renamed from: b, reason: collision with root package name */
    public final q1 f3176b;

    public d1(KSerializer serializer) {
        Intrinsics.checkNotNullParameter(serializer, "serializer");
        this.a = serializer;
        this.f3176b = new q1(serializer.getDescriptor());
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        return decoder.decodeNotNullMark() ? decoder.decodeSerializableValue(this.a) : decoder.decodeNull();
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        return obj != null && d1.class == obj.getClass() && Intrinsics.areEqual(this.a, ((d1) obj).a);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return this.f3176b;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        if (obj == null) {
            encoder.a();
        } else {
            encoder.w();
            encoder.M(this.a, obj);
        }
    }
}
