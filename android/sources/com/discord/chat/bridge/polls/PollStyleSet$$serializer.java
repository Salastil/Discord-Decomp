package com.discord.chat.bridge.polls;

import bs.g0;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import com.discord.chat.bridge.polls.PollRadioStyle;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/polls/PollStyleSet.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/polls/PollStyleSet;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/polls/PollStyleSet;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/polls/PollStyleSet;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class PollStyleSet$$serializer implements h0 {

    @NotNull
    public static final PollStyleSet$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        PollStyleSet$$serializer pollStyleSet$$serializer = new PollStyleSet$$serializer();
        INSTANCE = pollStyleSet$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.polls.PollStyleSet", pollStyleSet$$serializer, 10);
        j1Var.k("border", true);
        j1Var.k(ViewProps.BORDER_WIDTH, true);
        j1Var.k("fill", true);
        j1Var.k("label", true);
        j1Var.k(ViewProps.OPACITY, true);
        j1Var.k("answerBackground", true);
        j1Var.k("answerFill", true);
        j1Var.k("radioStyle", true);
        j1Var.k("radioBackground", true);
        j1Var.k("radioForeground", true);
        descriptor = j1Var;
    }

    private PollStyleSet$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        return new KSerializer[]{e.o(o0Var), o0Var, e.o(o0Var), e.o(o0Var), g0.a, e.o(o0Var), e.o(o0Var), e.o(PollRadioStyle.Serializer.INSTANCE), e.o(o0Var), e.o(o0Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final PollStyleSet deserialize(@NotNull Decoder decoder) {
        int i5;
        Integer num;
        Integer num2;
        Integer num3;
        PollRadioStyle pollRadioStyle;
        Integer num4;
        Integer num5;
        Integer num6;
        float f2;
        int i6;
        Integer num7;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i10 = 9;
        if (beginStructure.decodeSequentially()) {
            o0 o0Var = o0.a;
            Integer num8 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, o0Var, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            Integer num9 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0Var, null);
            Integer num10 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0Var, null);
            float decodeFloatElement = beginStructure.decodeFloatElement(serialDescriptor, 4);
            Integer num11 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0Var, null);
            Integer num12 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0Var, null);
            PollRadioStyle pollRadioStyle2 = (PollRadioStyle) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, PollRadioStyle.Serializer.INSTANCE, null);
            Integer num13 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0Var, null);
            num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 9, o0Var, null);
            i5 = 1023;
            pollRadioStyle = pollRadioStyle2;
            num3 = num12;
            num4 = num11;
            num5 = num10;
            num2 = num13;
            f2 = decodeFloatElement;
            num6 = num9;
            i6 = decodeIntElement;
            num7 = num8;
        } else {
            boolean z5 = true;
            int i11 = 0;
            Integer num14 = null;
            Integer num15 = null;
            Integer num16 = null;
            PollRadioStyle pollRadioStyle3 = null;
            Integer num17 = null;
            Integer num18 = null;
            Integer num19 = null;
            float f10 = 0.0f;
            int i12 = 0;
            Integer num20 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                    case 0:
                        num19 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, o0.a, num19);
                        i12 |= 1;
                        i10 = 9;
                    case 1:
                        i11 = beginStructure.decodeIntElement(serialDescriptor, 1);
                        i12 |= 2;
                        i10 = 9;
                    case 2:
                        num20 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0.a, num20);
                        i12 |= 4;
                        i10 = 9;
                    case 3:
                        num18 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0.a, num18);
                        i12 |= 8;
                        i10 = 9;
                    case 4:
                        f10 = beginStructure.decodeFloatElement(serialDescriptor, 4);
                        i12 |= 16;
                        i10 = 9;
                    case 5:
                        num17 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0.a, num17);
                        i12 |= 32;
                        i10 = 9;
                    case 6:
                        num16 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, o0.a, num16);
                        i12 |= 64;
                        i10 = 9;
                    case 7:
                        pollRadioStyle3 = (PollRadioStyle) beginStructure.decodeNullableSerializableElement(serialDescriptor, 7, PollRadioStyle.Serializer.INSTANCE, pollRadioStyle3);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT;
                        i10 = 9;
                    case 8:
                        num15 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 8, o0.a, num15);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER;
                    case 9:
                        num14 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, i10, o0.a, num14);
                        i12 |= IntBufferBatchMountItem.INSTRUCTION_UPDATE_PADDING;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i12;
            num = num14;
            num2 = num15;
            num3 = num16;
            pollRadioStyle = pollRadioStyle3;
            num4 = num17;
            num5 = num18;
            num6 = num20;
            f2 = f10;
            i6 = i11;
            num7 = num19;
        }
        beginStructure.endStructure(serialDescriptor);
        return new PollStyleSet(i5, num7, i6, num6, num5, f2, num4, num3, pollRadioStyle, num2, num, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull PollStyleSet value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        PollStyleSet.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
