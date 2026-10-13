package com.discord.media.engine.video.events;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.v1;
import ds.r;
import fo.d;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.KSerializer;
import kotlinx.serialization.descriptors.SerialDescriptor;
import kotlinx.serialization.encoding.CompositeDecoder;
import kotlinx.serialization.encoding.CompositeEncoder;
import kotlinx.serialization.encoding.Decoder;
import kotlinx.serialization.encoding.Encoder;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/media/engine/video/events/PingCallbackEvent.$serializer", "Lbs/h0;", "Lcom/discord/media/engine/video/events/PingCallbackEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/media/engine/video/events/PingCallbackEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/media/engine/video/events/PingCallbackEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PingCallbackEvent$$serializer implements h0 {

    @NotNull
    public static final PingCallbackEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PingCallbackEvent$$serializer pingCallbackEvent$$serializer = new PingCallbackEvent$$serializer();
        INSTANCE = pingCallbackEvent$$serializer;
        j1 j1Var = new j1("com.discord.media.engine.video.events.PingCallbackEvent", pingCallbackEvent$$serializer, 5);
        j1Var.k("connectionId", false);
        j1Var.k("ping", false);
        j1Var.k("server", false);
        j1Var.k("port", false);
        j1Var.k("seq", false);
        descriptor = j1Var;
    }

    private PingCallbackEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        return new KSerializer[]{o0Var, o0Var, v1.a, o0Var, o0Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PingCallbackEvent deserialize(@NotNull Decoder decoder) {
        int i5;
        int i6;
        int i10;
        String str;
        int i11;
        int i12;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            i6 = beginStructure.decodeIntElement(serialDescriptor, 3);
            i10 = beginStructure.decodeIntElement(serialDescriptor, 4);
            str = decodeStringElement;
            i11 = decodeIntElement;
            i12 = 31;
        } else {
            String str2 = null;
            boolean z5 = true;
            i5 = 0;
            int i13 = 0;
            int i14 = 0;
            int i15 = 0;
            int i16 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                    i16 |= 1;
                } else if (decodeElementIndex == 1) {
                    i15 = beginStructure.decodeIntElement(serialDescriptor, 1);
                    i16 |= 2;
                } else if (decodeElementIndex == 2) {
                    str2 = beginStructure.decodeStringElement(serialDescriptor, 2);
                    i16 |= 4;
                } else if (decodeElementIndex == 3) {
                    i13 = beginStructure.decodeIntElement(serialDescriptor, 3);
                    i16 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    i14 = beginStructure.decodeIntElement(serialDescriptor, 4);
                    i16 |= 16;
                }
            }
            i6 = i13;
            i10 = i14;
            str = str2;
            i11 = i15;
            i12 = i16;
        }
        int i17 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new PingCallbackEvent(i12, i17, i11, str, i6, i10, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PingCallbackEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PingCallbackEvent.write$Self$media_engine_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
