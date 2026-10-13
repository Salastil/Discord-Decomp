package com.discord.audio.react.events;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged.$serializer", "Lbs/h0;", "Lcom/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/audio/react/events/AudioRouteEmitterAudioRouteChanged;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "audio_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class AudioRouteEmitterAudioRouteChanged$$serializer implements h0 {

    @NotNull
    public static final AudioRouteEmitterAudioRouteChanged$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        AudioRouteEmitterAudioRouteChanged$$serializer audioRouteEmitterAudioRouteChanged$$serializer = new AudioRouteEmitterAudioRouteChanged$$serializer();
        INSTANCE = audioRouteEmitterAudioRouteChanged$$serializer;
        j1 j1Var = new j1("com.discord.audio.react.events.AudioRouteEmitterAudioRouteChanged", audioRouteEmitterAudioRouteChanged$$serializer, 2);
        j1Var.k("routeType", false);
        j1Var.k("multipleRoutesAvailable", false);
        descriptor = j1Var;
    }

    private AudioRouteEmitterAudioRouteChanged$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        return new KSerializer[]{v1.a, g.a};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final AudioRouteEmitterAudioRouteChanged deserialize(@NotNull Decoder decoder) {
        String str;
        boolean z5;
        int i5;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            str = beginStructure.decodeStringElement(serialDescriptor, 0);
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
            i5 = 3;
        } else {
            boolean z6 = true;
            boolean z7 = false;
            int i6 = 0;
            str = null;
            while (z6) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z6 = false;
                } else if (decodeElementIndex == 0) {
                    str = beginStructure.decodeStringElement(serialDescriptor, 0);
                    i6 |= 1;
                } else {
                    if (decodeElementIndex != 1) {
                        throw new r(decodeElementIndex);
                    }
                    z7 = beginStructure.decodeBooleanElement(serialDescriptor, 1);
                    i6 |= 2;
                }
            }
            z5 = z7;
            i5 = i6;
        }
        beginStructure.endStructure(serialDescriptor);
        return new AudioRouteEmitterAudioRouteChanged(i5, str, z5, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull AudioRouteEmitterAudioRouteChanged value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        AudioRouteEmitterAudioRouteChanged.write$Self$audio_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
