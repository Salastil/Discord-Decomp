package com.discord.chat.bridge.reaction;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/reaction/ReactionsTheme.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/reaction/ReactionsTheme;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/reaction/ReactionsTheme;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/reaction/ReactionsTheme;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ReactionsTheme$$serializer implements h0 {

    @NotNull
    public static final ReactionsTheme$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ReactionsTheme$$serializer reactionsTheme$$serializer = new ReactionsTheme$$serializer();
        INSTANCE = reactionsTheme$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.reaction.ReactionsTheme", reactionsTheme$$serializer, 6);
        j1Var.k("reactionBackgroundColor", true);
        j1Var.k("reactionBorderColor", true);
        j1Var.k("reactionTextColor", true);
        j1Var.k("activeReactionBackgroundColor", true);
        j1Var.k("activeReactionBorderColor", true);
        j1Var.k("activeReactionTextColor", true);
        descriptor = j1Var;
    }

    private ReactionsTheme$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        return new KSerializer[]{e.o(o0Var), e.o(o0Var), e.o(o0Var), e.o(o0Var), e.o(o0Var), e.o(o0Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ReactionsTheme deserialize(@NotNull Decoder decoder) {
        int i5;
        Integer num;
        Integer num2;
        Integer num3;
        Integer num4;
        Integer num5;
        Integer num6;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 5;
        Integer num7 = null;
        if (beginStructure.decodeSequentially()) {
            o0 o0Var = o0.a;
            Integer num8 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, o0Var, null);
            Integer num9 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, o0Var, null);
            Integer num10 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0Var, null);
            Integer num11 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0Var, null);
            Integer num12 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0Var, null);
            num6 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, o0Var, null);
            i5 = 63;
            num4 = num11;
            num5 = num12;
            num3 = num10;
            num2 = num9;
            num = num8;
        } else {
            boolean z5 = true;
            int i10 = 0;
            Integer num13 = null;
            Integer num14 = null;
            Integer num15 = null;
            Integer num16 = null;
            Integer num17 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i6 = 5;
                    case 0:
                        num7 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, o0.a, num7);
                        i10 |= 1;
                        i6 = 5;
                    case 1:
                        num13 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, o0.a, num13);
                        i10 |= 2;
                    case 2:
                        num14 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, o0.a, num14);
                        i10 |= 4;
                    case 3:
                        num15 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, o0.a, num15);
                        i10 |= 8;
                    case 4:
                        num16 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num16);
                        i10 |= 16;
                    case 5:
                        num17 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, o0.a, num17);
                        i10 |= 32;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            num = num7;
            num2 = num13;
            num3 = num14;
            num4 = num15;
            num5 = num16;
            num6 = num17;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ReactionsTheme(i5, num, num2, num3, num4, num5, num6, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ReactionsTheme value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ReactionsTheme.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
