package cs;

import java.util.List;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;

/* loaded from: classes3.dex */
public final class d implements KSerializer {
    public static final d a = new d();

    /* renamed from: b, reason: collision with root package name */
    public static final c f7328b = c.f7326b;

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        com.facebook.imagepipeline.nativecode.c.c(decoder);
        return new kotlinx.serialization.json.a((List) nf.e.a(i.a).deserialize(decoder));
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f7328b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        kotlinx.serialization.json.a value = (kotlinx.serialization.json.a) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        com.facebook.imagepipeline.nativecode.c.b(encoder);
        nf.e.a(i.a).serialize(encoder, value);
    }
}
