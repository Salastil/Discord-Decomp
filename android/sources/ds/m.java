package ds;

import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.AbstractDecoder;
import kotlinx.serialization.json.Json;
import kotlinx.serialization.modules.SerializersModule;

/* loaded from: classes3.dex */
public final class m extends AbstractDecoder {
    public final a a;

    /* renamed from: b, reason: collision with root package name */
    public final SerializersModule f7738b;

    public m(a lexer, Json json) {
        Intrinsics.checkNotNullParameter(lexer, "lexer");
        Intrinsics.checkNotNullParameter(json, "json");
        this.a = lexer;
        this.f7738b = json.f13607b;
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final byte decodeByte() {
        a aVar = this.a;
        String l6 = aVar.l();
        try {
            return kotlin.text.c0.b(l6);
        } catch (IllegalArgumentException unused) {
            a.q(aVar, k0.d.h('\'', "Failed to parse type 'UByte' for input '", l6), 0, null, 6);
            throw null;
        }
    }

    @Override // kotlinx.serialization.encoding.CompositeDecoder
    public final int decodeElementIndex(SerialDescriptor descriptor) {
        Intrinsics.checkNotNullParameter(descriptor, "descriptor");
        throw new IllegalStateException("unsupported");
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final int decodeInt() {
        a aVar = this.a;
        String l6 = aVar.l();
        try {
            return kotlin.text.c0.c(l6);
        } catch (IllegalArgumentException unused) {
            a.q(aVar, k0.d.h('\'', "Failed to parse type 'UInt' for input '", l6), 0, null, 6);
            throw null;
        }
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final long decodeLong() {
        a aVar = this.a;
        String l6 = aVar.l();
        try {
            return kotlin.text.c0.e(l6);
        } catch (IllegalArgumentException unused) {
            a.q(aVar, k0.d.h('\'', "Failed to parse type 'ULong' for input '", l6), 0, null, 6);
            throw null;
        }
    }

    @Override // kotlinx.serialization.encoding.AbstractDecoder, kotlinx.serialization.encoding.Decoder
    public final short decodeShort() {
        a aVar = this.a;
        String l6 = aVar.l();
        try {
            return kotlin.text.c0.g(l6);
        } catch (IllegalArgumentException unused) {
            a.q(aVar, k0.d.h('\'', "Failed to parse type 'UShort' for input '", l6), 0, null, 6);
            throw null;
        }
    }

    @Override // kotlinx.serialization.encoding.Decoder, kotlinx.serialization.encoding.CompositeDecoder
    public final SerializersModule getSerializersModule() {
        return this.f7738b;
    }
}
