package com.discord.media_player.reactevents;

import androidx.recyclerview.widget.RecyclerView;
import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.t0;
import bs.v1;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/media_player/reactevents/MediaPlayFinishedAnalytics.$serializer", "Lbs/h0;", "Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/media_player/reactevents/MediaPlayFinishedAnalytics;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "media_player_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class MediaPlayFinishedAnalytics$$serializer implements h0 {

    @NotNull
    public static final MediaPlayFinishedAnalytics$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        MediaPlayFinishedAnalytics$$serializer mediaPlayFinishedAnalytics$$serializer = new MediaPlayFinishedAnalytics$$serializer();
        INSTANCE = mediaPlayFinishedAnalytics$$serializer;
        j1 j1Var = new j1("com.discord.media_player.reactevents.MediaPlayFinishedAnalytics", mediaPlayFinishedAnalytics$$serializer, 14);
        j1Var.k("playWallTimeMs", false);
        j1Var.k("stallMs", false);
        j1Var.k("stallCount", false);
        j1Var.k("seekCount", false);
        j1Var.k("firstPlayWaitingMs", false);
        j1Var.k("mediaSource", false);
        j1Var.k("fileDurationSec", false);
        j1Var.k("mimeType", false);
        j1Var.k("fatalErrorCount", false);
        j1Var.k("nonFatalErrorCount", false);
        j1Var.k("totalDroppedFrames", false);
        j1Var.k("totalBandwidthBytes", false);
        j1Var.k("errorCode", true);
        j1Var.k("errorMessage", true);
        descriptor = j1Var;
    }

    private MediaPlayFinishedAnalytics$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        v1 v1Var = v1.a;
        KSerializer o6 = e.o(v1Var);
        KSerializer o7 = e.o(v1Var);
        KSerializer o10 = e.o(o0Var);
        KSerializer o11 = e.o(v1Var);
        t0 t0Var = t0.a;
        return new KSerializer[]{t0Var, t0Var, o0Var, o0Var, t0Var, o6, g0.a, o7, o0Var, o0Var, t0Var, t0Var, o10, o11};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final MediaPlayFinishedAnalytics deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        String str3;
        Integer num;
        long j;
        long j5;
        int i6;
        float f2;
        int i10;
        int i11;
        int i12;
        long j7;
        long j10;
        long j11;
        int i13;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i14 = 11;
        int i15 = 4;
        if (beginStructure.decodeSequentially()) {
            long decodeLongElement = beginStructure.decodeLongElement(serialDescriptor, 0);
            long decodeLongElement2 = beginStructure.decodeLongElement(serialDescriptor, 1);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 2);
            int decodeIntElement2 = beginStructure.decodeIntElement(serialDescriptor, 3);
            long decodeLongElement3 = beginStructure.decodeLongElement(serialDescriptor, 4);
            v1 v1Var = v1.a;
            String str4 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            float decodeFloatElement = beginStructure.decodeFloatElement(serialDescriptor, 6);
            String str5 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1Var, null);
            int decodeIntElement3 = beginStructure.decodeIntElement(serialDescriptor, 8);
            int decodeIntElement4 = beginStructure.decodeIntElement(serialDescriptor, 9);
            long decodeLongElement4 = beginStructure.decodeLongElement(serialDescriptor, 10);
            long decodeLongElement5 = beginStructure.decodeLongElement(serialDescriptor, 11);
            i5 = 16383;
            num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, o0.a, null);
            str3 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1Var, null);
            j5 = decodeLongElement5;
            i6 = decodeIntElement4;
            str2 = str5;
            f2 = decodeFloatElement;
            str = str4;
            i10 = decodeIntElement2;
            i11 = decodeIntElement3;
            i12 = decodeIntElement;
            j7 = decodeLongElement2;
            j10 = decodeLongElement3;
            j11 = decodeLongElement4;
            j = decodeLongElement;
        } else {
            long j12 = 0;
            float f10 = 0.0f;
            int i16 = 0;
            int i17 = 0;
            int i18 = 0;
            int i19 = 0;
            String str6 = null;
            String str7 = null;
            boolean z5 = true;
            long j13 = 0;
            long j14 = 0;
            long j15 = 0;
            long j16 = 0;
            i5 = 0;
            String str8 = null;
            Integer num2 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        i13 = i15;
                        z5 = false;
                        i15 = i13;
                        i14 = 11;
                    case 0:
                        i13 = i15;
                        j12 = beginStructure.decodeLongElement(serialDescriptor, 0);
                        i5 |= 1;
                        i15 = i13;
                        i14 = 11;
                    case 1:
                        i13 = i15;
                        j14 = beginStructure.decodeLongElement(serialDescriptor, 1);
                        i5 |= 2;
                        i15 = i13;
                        i14 = 11;
                    case 2:
                        i13 = i15;
                        i19 = beginStructure.decodeIntElement(serialDescriptor, 2);
                        i5 |= 4;
                        i15 = i13;
                        i14 = 11;
                    case 3:
                        i17 = beginStructure.decodeIntElement(serialDescriptor, 3);
                        i5 |= 8;
                        i15 = i15;
                        i14 = 11;
                    case 4:
                        int i20 = i15;
                        j15 = beginStructure.decodeLongElement(serialDescriptor, i20);
                        i5 |= 16;
                        i15 = i20;
                    case 5:
                        str6 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str6);
                        i5 |= 32;
                        i15 = 4;
                    case 6:
                        f10 = beginStructure.decodeFloatElement(serialDescriptor, 6);
                        i5 |= 64;
                        i15 = 4;
                    case 7:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, v1.a, str8);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i15 = 4;
                    case 8:
                        i18 = beginStructure.decodeIntElement(serialDescriptor, 8);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                        i15 = 4;
                    case 9:
                        i16 = beginStructure.decodeIntElement(serialDescriptor, 9);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                        i15 = 4;
                    case 10:
                        j16 = beginStructure.decodeLongElement(serialDescriptor, 10);
                        i5 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_OVERFLOW_INSET;
                        i15 = 4;
                    case 11:
                        j13 = beginStructure.decodeLongElement(serialDescriptor, i14);
                        i5 |= RecyclerView.ItemAnimator.FLAG_MOVED;
                        i15 = 4;
                    case 12:
                        num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 12, o0.a, num2);
                        i5 |= RecyclerView.ItemAnimator.FLAG_APPEARED_IN_PRE_LAYOUT;
                        i15 = 4;
                    case 13:
                        str7 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 13, v1.a, str7);
                        i5 |= 8192;
                        i15 = 4;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            str = str6;
            str2 = str8;
            str3 = str7;
            num = num2;
            j = j12;
            j5 = j13;
            i6 = i16;
            f2 = f10;
            i10 = i17;
            i11 = i18;
            i12 = i19;
            j7 = j14;
            j10 = j15;
            j11 = j16;
        }
        int i21 = i5;
        beginStructure.endStructure(serialDescriptor);
        return new MediaPlayFinishedAnalytics(i21, j, j7, i12, i10, j10, str, f2, str2, i11, i6, j11, j5, num, str3, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull MediaPlayFinishedAnalytics value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        MediaPlayFinishedAnalytics.write$Self$media_player_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
