package cs;

import bs.v1;
import java.util.Map;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import kotlinx.serialization.json.JsonObject;

/* loaded from: classes3.dex */
public final class r implements KSerializer {
    public static final r a = new r();

    /* renamed from: b, reason: collision with root package name */
    public static final q f7337b = q.f7335b;

    @Override // kotlinx.serialization.DeserializationStrategy
    public final Object deserialize(Decoder decoder) {
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        com.facebook.imagepipeline.nativecode.c.c(decoder);
        nf.e.A(StringCompanionObject.INSTANCE);
        return new JsonObject((Map) nf.e.b(v1.a, i.a).deserialize(decoder));
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    public final SerialDescriptor getDescriptor() {
        return f7337b;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(Encoder encoder, Object obj) {
        JsonObject value = (JsonObject) obj;
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        com.facebook.imagepipeline.nativecode.c.b(encoder);
        nf.e.A(StringCompanionObject.INSTANCE);
        nf.e.b(v1.a, i.a).serialize(encoder, value);
    }
}
