package com.discord.media.engine.video.events;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.t0;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/media/engine/video/events/OnVideoCallbackEvent.$serializer", "Lbs/h0;", "Lcom/discord/media/engine/video/events/OnVideoCallbackEvent;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/media/engine/video/events/OnVideoCallbackEvent;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/media/engine/video/events/OnVideoCallbackEvent;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "media_engine_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class OnVideoCallbackEvent$$serializer implements h0 {

    @NotNull
    public static final OnVideoCallbackEvent$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        OnVideoCallbackEvent$$serializer onVideoCallbackEvent$$serializer = new OnVideoCallbackEvent$$serializer();
        INSTANCE = onVideoCallbackEvent$$serializer;
        j1 j1Var = new j1("com.discord.media.engine.video.events.OnVideoCallbackEvent", onVideoCallbackEvent$$serializer, 5);
        j1Var.k("connectionId", false);
        j1Var.k("userId", false);
        j1Var.k("ssrc", false);
        j1Var.k("streamId", false);
        j1Var.k("videoStreamParametersJSON", false);
        descriptor = j1Var;
    }

    private OnVideoCallbackEvent$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{o0.a, v1Var, t0.a, v1Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final OnVideoCallbackEvent deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        int i6;
        String str3;
        long j;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 1);
            long decodeLongElement = beginStructure.decodeLongElement(serialDescriptor, 2);
            str = beginStructure.decodeStringElement(serialDescriptor, 3);
            str2 = beginStructure.decodeStringElement(serialDescriptor, 4);
            i6 = 31;
            str3 = decodeStringElement;
            j = decodeLongElement;
        } else {
            String str4 = null;
            boolean z5 = true;
            int i10 = 0;
            long j5 = 0;
            String str5 = null;
            String str6 = null;
            i5 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    i5 = beginStructure.decodeIntElement(serialDescriptor, 0);
                    i10 |= 1;
                } else if (decodeElementIndex == 1) {
                    str4 = beginStructure.decodeStringElement(serialDescriptor, 1);
                    i10 |= 2;
                } else if (decodeElementIndex == 2) {
                    j5 = beginStructure.decodeLongElement(serialDescriptor, 2);
                    i10 |= 4;
                } else if (decodeElementIndex == 3) {
                    str5 = beginStructure.decodeStringElement(serialDescriptor, 3);
                    i10 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    str6 = beginStructure.decodeStringElement(serialDescriptor, 4);
                    i10 |= 16;
                }
            }
            str = str5;
            str2 = str6;
            i6 = i10;
            str3 = str4;
            j = j5;
        }
        int i11 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new OnVideoCallbackEvent(i6, i11, str3, j, str, str2, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull OnVideoCallbackEvent value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        OnVideoCallbackEvent.write$Self$media_engine_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
