package com.discord.chat.input.bridge;

import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import com.discord.span.utilities.common.BackgroundStyle;
import com.discord.span.utilities.common.BackgroundStyle$$serializer;
import com.facebook.react.uimanager.ViewProps;
import ds.r;
import fo.d;
import kotlin.Lazy;
import kotlin.Metadata;
import kotlin.jvm.internal.Intrinsics;
import kotlinx.serialization.DeserializationStrategy;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/input/bridge/ChatInputNodeStyle.$serializer", "Lbs/h0;", "Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/input/bridge/ChatInputNodeStyle;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/input/bridge/ChatInputNodeStyle;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_input_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ChatInputNodeStyle$$serializer implements h0 {

    @NotNull
    public static final ChatInputNodeStyle$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ChatInputNodeStyle$$serializer chatInputNodeStyle$$serializer = new ChatInputNodeStyle$$serializer();
        INSTANCE = chatInputNodeStyle$$serializer;
        j1 j1Var = new j1("com.discord.chat.input.bridge.ChatInputNodeStyle", chatInputNodeStyle$$serializer, 4);
        j1Var.k(ViewProps.FONT_SIZE, true);
        j1Var.k(ViewProps.COLOR, false);
        j1Var.k("backgroundStyle", false);
        j1Var.k(ViewProps.FONT_WEIGHT, true);
        descriptor = j1Var;
    }

    private ChatInputNodeStyle$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        Lazy[] lazyArr;
        lazyArr = ChatInputNodeStyle.$childSerializers;
        o0 o0Var = o0.a;
        return new KSerializer[]{e.o(o0Var), o0Var, e.o(BackgroundStyle$$serializer.INSTANCE), e.o((KSerializer) lazyArr[3].getValue())};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ChatInputNodeStyle deserialize(@NotNull Decoder decoder) {
        Lazy[] lazyArr;
        int i5;
        int i6;
        Integer num;
        BackgroundStyle backgroundStyle;
        ChatInputNodeFontWeight chatInputNodeFontWeight;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        lazyArr = ChatInputNodeStyle.$childSerializers;
        if (beginStructure.decodeSequentially()) {
            Integer num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, o0.a, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            BackgroundStyle backgroundStyle2 = (BackgroundStyle) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, BackgroundStyle$$serializer.INSTANCE, null);
            chatInputNodeFontWeight = (ChatInputNodeFontWeight) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), null);
            num = num2;
            backgroundStyle = backgroundStyle2;
            i5 = 15;
            i6 = decodeIntElement;
        } else {
            boolean z5 = true;
            int i10 = 0;
            Integer num3 = null;
            BackgroundStyle backgroundStyle3 = null;
            ChatInputNodeFontWeight chatInputNodeFontWeight2 = null;
            int i11 = 0;
            while (z5) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z5 = false;
                } else if (decodeElementIndex == 0) {
                    num3 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 0, o0.a, num3);
                    i10 |= 1;
                } else if (decodeElementIndex == 1) {
                    i11 = beginStructure.decodeIntElement(serialDescriptor, 1);
                    i10 |= 2;
                } else if (decodeElementIndex == 2) {
                    backgroundStyle3 = (BackgroundStyle) beginStructure.decodeNullableSerializableElement(serialDescriptor, 2, BackgroundStyle$$serializer.INSTANCE, backgroundStyle3);
                    i10 |= 4;
                } else {
                    if (decodeElementIndex != 3) {
                        throw new r(decodeElementIndex);
                    }
                    chatInputNodeFontWeight2 = (ChatInputNodeFontWeight) beginStructure.decodeNullableSerializableElement(serialDescriptor, 3, (DeserializationStrategy) lazyArr[3].getValue(), chatInputNodeFontWeight2);
                    i10 |= 8;
                }
            }
            i5 = i10;
            i6 = i11;
            num = num3;
            backgroundStyle = backgroundStyle3;
            chatInputNodeFontWeight = chatInputNodeFontWeight2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ChatInputNodeStyle(i5, num, i6, backgroundStyle, chatInputNodeFontWeight, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ChatInputNodeStyle value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ChatInputNodeStyle.write$Self$chat_input_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
