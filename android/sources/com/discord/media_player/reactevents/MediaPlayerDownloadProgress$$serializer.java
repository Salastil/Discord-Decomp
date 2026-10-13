package com.discord.media_player.reactevents;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.x;
import com.facebook.react.devsupport.StackTraceHelper;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/media_player/reactevents/MediaPlayerDownloadProgress.$serializer", "Lbs/h0;", "Lcom/discord/media_player/reactevents/MediaPlayerDownloadProgress;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/media_player/reactevents/MediaPlayerDownloadProgress;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/media_player/reactevents/MediaPlayerDownloadProgress;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MediaPlayerDownloadProgress$$serializer implements h0 {

    @NotNull
    public static final MediaPlayerDownloadProgress$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MediaPlayerDownloadProgress$$serializer mediaPlayerDownloadProgress$$serializer = new MediaPlayerDownloadProgress$$serializer();
        INSTANCE = mediaPlayerDownloadProgress$$serializer;
        j1 j1Var = new j1("com.discord.media_player.reactevents.MediaPlayerDownloadProgress", mediaPlayerDownloadProgress$$serializer, 4);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("progressSeconds", false);
        j1Var.k("progressPercent", false);
        j1Var.k("totalDurationSeconds", false);
        descriptor = j1Var;
    }

    private MediaPlayerDownloadProgress$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        x xVar = x.a;
        return new KSerializer[]{xVar, xVar, xVar, xVar};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MediaPlayerDownloadProgress deserialize(@NotNull Decoder decoder) {
        int i5;
        double d6;
        double d7;
        double d8;
        double d10;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            double decodeDoubleElement = beginStructure.decodeDoubleElement(serialDescriptor, 0);
            double decodeDoubleElement2 = beginStructure.decodeDoubleElement(serialDescriptor, 1);
            double decodeDoubleElement3 = beginStructure.decodeDoubleElement(serialDescriptor, 2);
            d6 = beginStructure.decodeDoubleElement(serialDescriptor, 3);
            d7 = decodeDoubleElement3;
            d8 = decodeDoubleElement;
            d10 = decodeDoubleElement2;
            i5 = 15;
        } else {
            double d11 = 0.0d;
            boolean z5 = true;
            int i6 = 0;
            double d12 = 0.0d;
            double d13 = 0.0d;
            double d14 = 0.0d;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    d13 = beginStructure.decodeDoubleElement(serialDescriptor, 0);
                    i6 |= 1;
                } else if (decodeElementIndex == 1) {
                    d14 = beginStructure.decodeDoubleElement(serialDescriptor, 1);
                    i6 |= 2;
                } else if (decodeElementIndex == 2) {
                    d12 = beginStructure.decodeDoubleElement(serialDescriptor, 2);
                    i6 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    d11 = beginStructure.decodeDoubleElement(serialDescriptor, 3);
                    i6 |= 8;
                }
            }
            i5 = i6;
            d6 = d11;
            d7 = d12;
            d8 = d13;
            d10 = d14;
        }
        beginStructure.endStructure(serialDescriptor);
        return new MediaPlayerDownloadProgress(i5, d8, d10, d7, d6, null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MediaPlayerDownloadProgress value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MediaPlayerDownloadProgress.write$Self$media_player_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
