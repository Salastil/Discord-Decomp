package com.discord.chat.bridge.channelprompt;

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
import kotlinx.serialization.internal.SerializationConstructorMarker;
import nf.e;
import org.jetbrains.annotations.NotNull;

@d
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/channelprompt/ChannelPromptData.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/channelprompt/ChannelPromptData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/channelprompt/ChannelPromptData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/channelprompt/ChannelPromptData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ChannelPromptData$$serializer implements h0 {

    @NotNull
    public static final ChannelPromptData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ChannelPromptData$$serializer channelPromptData$$serializer = new ChannelPromptData$$serializer();
        INSTANCE = channelPromptData$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.channelprompt.ChannelPromptData", channelPromptData$$serializer, 7);
        j1Var.k("cameraButtonIcon", true);
        j1Var.k("gifButtonIcon", true);
        j1Var.k("emojiButtonIcon", true);
        j1Var.k("gamingStatsButtonText", true);
        j1Var.k("cameraButtonText", true);
        j1Var.k("gifButtonText", true);
        j1Var.k("emojiButtonText", true);
        descriptor = j1Var;
    }

    private ChannelPromptData$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        v1 v1Var = v1.a;
        return new KSerializer[]{e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var), e.o(v1Var)};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ChannelPromptData deserialize(@NotNull Decoder decoder) {
        int i5;
        String str;
        String str2;
        String str3;
        String str4;
        String str5;
        String str6;
        String str7;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        int i6 = 6;
        String str8 = null;
        if (beginStructure.decodeSequentially()) {
            v1 v1Var = v1.a;
            String str9 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1Var, null);
            String str10 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1Var, null);
            String str11 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1Var, null);
            String str12 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1Var, null);
            String str13 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1Var, null);
            String str14 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1Var, null);
            str = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 6, v1Var, null);
            i5 = 127;
            str7 = str14;
            str5 = str12;
            str6 = str13;
            str4 = str11;
            str3 = str10;
            str2 = str9;
        } else {
            boolean z5 = true;
            int i10 = 0;
            String str15 = null;
            String str16 = null;
            String str17 = null;
            String str18 = null;
            String str19 = null;
            String str20 = null;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                switch (decodeElementIndex) {
                    case -1:
                        z5 = false;
                        i6 = 6;
                    case 0:
                        str8 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, v1.a, str8);
                        i10 |= 1;
                        i6 = 6;
                    case 1:
                        str16 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 1, v1.a, str16);
                        i10 |= 2;
                        i6 = 6;
                    case 2:
                        str17 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, v1.a, str17);
                        i10 |= 4;
                    case 3:
                        str18 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, v1.a, str18);
                        i10 |= 8;
                    case 4:
                        str19 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, v1.a, str19);
                        i10 |= 16;
                    case 5:
                        str20 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, 5, v1.a, str20);
                        i10 |= 32;
                    case 6:
                        str15 = (String) beginStructure.decodeNullableSerializableElement(serialDescriptor, i6, v1.a, str15);
                        i10 |= 64;
                    default:
                        throw new r(decodeElementIndex);
                }
            }
            i5 = i10;
            str = str15;
            str2 = str8;
            str3 = str16;
            str4 = str17;
            str5 = str18;
            str6 = str19;
            str7 = str20;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ChannelPromptData(i5, str2, str3, str4, str5, str6, str7, str, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ChannelPromptData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ChannelPromptData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
