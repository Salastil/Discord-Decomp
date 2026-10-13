package com.discord.chat.bridge.sticker;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import bs.t0;
import bs.v1;
import com.discord.chat.bridge.sticker.StickerFormatType;
import com.facebook.react.devsupport.StackTraceHelper;
import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import com.facebook.react.uimanager.ViewProps;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/sticker/Sticker.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/sticker/Sticker;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/sticker/Sticker;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/sticker/Sticker;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class Sticker$$serializer implements h0 {

    @NotNull
    public static final Sticker$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        Sticker$$serializer sticker$$serializer = new Sticker$$serializer();
        INSTANCE = sticker$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.sticker.Sticker", sticker$$serializer, 9);
        j1Var.k(StackTraceHelper.ID_KEY, false);
        j1Var.k("format_type", false);
        j1Var.k(StackTraceHelper.NAME_KEY, false);
        j1Var.k("asset", false);
        j1Var.k("url", false);
        j1Var.k("width", true);
        j1Var.k("height", true);
        j1Var.k("renderMode", false);
        j1Var.k(ViewProps.ACCESSIBILITY_LABEL, false);
        descriptor = j1Var;
    }

    private Sticker$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        KSerializer o6 = e.o(o0Var);
        KSerializer o7 = e.o(o0Var);
        v1 v1Var = v1.a;
        return new KSerializer[]{t0.a, StickerFormatType.StickerFormatTypeSerializer.INSTANCE, v1Var, v1Var, v1Var, o6, o7, o0Var, v1Var};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final Sticker deserialize(@NotNull Decoder decoder) {
        int i5;
        Integer num;
        Integer num2;
        int i6;
        StickerFormatType stickerFormatType;
        String str;
        String str2;
        String str3;
        String str4;
        long j;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 7;
        int i11 = 6;
        if (beginStructure.decodeSequentially()) {
            long decodeLongElement = beginStructure.decodeLongElement(serialDescriptor, 0);
            StickerFormatType stickerFormatType2 = (StickerFormatType) beginStructure.decodeSerializableElement(serialDescriptor, 1, StickerFormatType.StickerFormatTypeSerializer.INSTANCE, null);
            String decodeStringElement = beginStructure.decodeStringElement(serialDescriptor, 2);
            String decodeStringElement2 = beginStructure.decodeStringElement(serialDescriptor, 3);
            String decodeStringElement3 = beginStructure.decodeStringElement(serialDescriptor, 4);
            o0 o0Var = o0.a;
            Integer num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0Var, null);
            Integer num4 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0Var, null);
            stickerFormatType = stickerFormatType2;
            i5 = beginStructure.decodeIntElement(serialDescriptor, 7);
            num = num4;
            num2 = num3;
            str2 = decodeStringElement2;
            str4 = beginStructure.decodeStringElement(serialDescriptor, 8);
            str3 = decodeStringElement3;
            str = decodeStringElement;
            i6 = 511;
            j = decodeLongElement;
        } else {
            boolean z5 = true;
            int i12 = 0;
            Integer num5 = null;
            String str5 = null;
            String str6 = null;
            String str7 = null;
            long j5 = 0;
            int i13 = 0;
            Integer num6 = null;
            StickerFormatType stickerFormatType3 = null;
            String str8 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i10 = 7;
                    case 0:
                        j5 = beginStructure.decodeLongElement(serialDescriptor, 0);
                        i13 |= 1;
                        i10 = 7;
                        i11 = 6;
                    case 1:
                        stickerFormatType3 = (StickerFormatType) beginStructure.decodeSerializableElement(serialDescriptor, 1, StickerFormatType.StickerFormatTypeSerializer.INSTANCE, stickerFormatType3);
                        i13 |= 2;
                        i10 = 7;
                        i11 = 6;
                    case 2:
                        str8 = beginStructure.decodeStringElement(serialDescriptor, 2);
                        i13 |= 4;
                    case 3:
                        str5 = beginStructure.decodeStringElement(serialDescriptor, 3);
                        i13 |= 8;
                    case 4:
                        str6 = beginStructure.decodeStringElement(serialDescriptor, 4);
                        i13 |= 16;
                    case 5:
                        num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num6);
                        i13 |= 32;
                    case 6:
                        num5 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, i11, o0.a, num5);
                        i13 |= 64;
                    case 7:
                        i12 = beginStructure.decodeIntElement(serialDescriptor, i10);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                    case 8:
                        str7 = beginStructure.decodeStringElement(serialDescriptor, 8);
                        i13 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i12;
            num = num5;
            num2 = num6;
            i6 = i13;
            stickerFormatType = stickerFormatType3;
            str = str8;
            str2 = str5;
            str3 = str6;
            str4 = str7;
            j = j5;
        }
        beginStructure.endStructure(serialDescriptor);
        return new Sticker(i6, j, stickerFormatType, str, str2, str3, num2, num, i5, str4, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull Sticker value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        Sticker.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
