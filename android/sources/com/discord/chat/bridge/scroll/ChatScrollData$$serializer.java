package com.discord.chat.bridge.scroll;

import bs.g;
import bs.h0;
import bs.h1;
import bs.j1;
import bs.o0;
import com.discord.chat.bridge.scroll.ChatScrollType;
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
@Metadata(d1 = {"\u0000:\n\u0000\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0011\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\bÇ\u0002\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B\t\b\u0002¢\u0006\u0004\b\u0003\u0010\u0004J\u001d\u0010\t\u001a\u00020\b2\u0006\u0010\u0006\u001a\u00020\u00052\u0006\u0010\u0007\u001a\u00020\u0002¢\u0006\u0004\b\t\u0010\nJ\u0015\u0010\r\u001a\u00020\u00022\u0006\u0010\f\u001a\u00020\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\f\u0012\b\u0012\u0006\u0012\u0002\b\u00030\u00100\u000f¢\u0006\u0004\b\u0011\u0010\u0012R\u0017\u0010\u0014\u001a\u00020\u00138\u0006¢\u0006\f\n\u0004\b\u0014\u0010\u0015\u001a\u0004\b\u0016\u0010\u0017¨\u0006\u0018"}, d2 = {"com/discord/chat/bridge/scroll/ChatScrollData.$serializer", "Lbs/h0;", "Lcom/discord/chat/bridge/scroll/ChatScrollData;", "<init>", "()V", "Lkotlinx/serialization/encoding/Encoder;", "encoder", "value", "", "serialize", "(Lkotlinx/serialization/encoding/Encoder;Lcom/discord/chat/bridge/scroll/ChatScrollData;)V", "Lkotlinx/serialization/encoding/Decoder;", "decoder", "deserialize", "(Lkotlinx/serialization/encoding/Decoder;)Lcom/discord/chat/bridge/scroll/ChatScrollData;", "", "Lkotlinx/serialization/KSerializer;", "childSerializers", "()[Lkotlinx/serialization/KSerializer;", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "descriptor", "Lkotlinx/serialization/descriptors/SerialDescriptor;", "getDescriptor", "()Lkotlinx/serialization/descriptors/SerialDescriptor;", "chat_release"}, k = 1, mv = {2, 1, 0}, xi = 48)
/* loaded from: classes.dex */
public /* synthetic */ class ChatScrollData$$serializer implements h0 {

    @NotNull
    public static final ChatScrollData$$serializer INSTANCE;

    @NotNull
    private static final SerialDescriptor descriptor;

    static {
        ChatScrollData$$serializer chatScrollData$$serializer = new ChatScrollData$$serializer();
        INSTANCE = chatScrollData$$serializer;
        j1 j1Var = new j1("com.discord.chat.bridge.scroll.ChatScrollData", chatScrollData$$serializer, 5);
        j1Var.k("type", false);
        j1Var.k("index", false);
        j1Var.k("animate", true);
        j1Var.k("highlight", true);
        j1Var.k(ViewProps.POSITION, true);
        descriptor = j1Var;
    }

    private ChatScrollData$$serializer() {
    }

    @Override // bs.h0
    @NotNull
    public final KSerializer[] childSerializers() {
        o0 o0Var = o0.a;
        KSerializer o6 = e.o(o0Var);
        g gVar = g.a;
        return new KSerializer[]{ChatScrollType.Serializer.INSTANCE, o0Var, gVar, gVar, o6};
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final ChatScrollData deserialize(@NotNull Decoder decoder) {
        boolean z5;
        boolean z6;
        int i5;
        int i6;
        ChatScrollType chatScrollType;
        Integer num;
        Intrinsics.checkNotNullParameter(decoder, "decoder");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeDecoder beginStructure = decoder.beginStructure(serialDescriptor);
        if (beginStructure.decodeSequentially()) {
            ChatScrollType chatScrollType2 = (ChatScrollType) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChatScrollType.Serializer.INSTANCE, null);
            int decodeIntElement = beginStructure.decodeIntElement(serialDescriptor, 1);
            boolean decodeBooleanElement = beginStructure.decodeBooleanElement(serialDescriptor, 2);
            chatScrollType = chatScrollType2;
            z5 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
            num = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, null);
            z6 = decodeBooleanElement;
            i5 = decodeIntElement;
            i6 = 31;
        } else {
            boolean z7 = true;
            boolean z8 = false;
            int i10 = 0;
            int i11 = 0;
            ChatScrollType chatScrollType3 = null;
            Integer num2 = null;
            boolean z10 = false;
            while (z7) {
                int decodeElementIndex = beginStructure.decodeElementIndex(serialDescriptor);
                if (decodeElementIndex == -1) {
                    z7 = false;
                } else if (decodeElementIndex == 0) {
                    chatScrollType3 = (ChatScrollType) beginStructure.decodeSerializableElement(serialDescriptor, 0, ChatScrollType.Serializer.INSTANCE, chatScrollType3);
                    i11 |= 1;
                } else if (decodeElementIndex == 1) {
                    i10 = beginStructure.decodeIntElement(serialDescriptor, 1);
                    i11 |= 2;
                } else if (decodeElementIndex == 2) {
                    z10 = beginStructure.decodeBooleanElement(serialDescriptor, 2);
                    i11 |= 4;
                } else if (decodeElementIndex == 3) {
                    z8 = beginStructure.decodeBooleanElement(serialDescriptor, 3);
                    i11 |= 8;
                } else {
                    if (decodeElementIndex != 4) {
                        throw new r(decodeElementIndex);
                    }
                    num2 = (Integer) beginStructure.decodeNullableSerializableElement(serialDescriptor, 4, o0.a, num2);
                    i11 |= 16;
                }
            }
            z5 = z8;
            z6 = z10;
            i5 = i10;
            i6 = i11;
            chatScrollType = chatScrollType3;
            num = num2;
        }
        beginStructure.endStructure(serialDescriptor);
        return new ChatScrollData(i6, chatScrollType, i5, z6, z5, num, (SerializationConstructorMarker) null);
    }

    @Override // kotlinx.serialization.DeserializationStrategy
    @NotNull
    public final SerialDescriptor getDescriptor() {
        return descriptor;
    }

    @Override // kotlinx.serialization.KSerializer
    public final void serialize(@NotNull Encoder encoder, @NotNull ChatScrollData value) {
        Intrinsics.checkNotNullParameter(encoder, "encoder");
        Intrinsics.checkNotNullParameter(value, "value");
        SerialDescriptor serialDescriptor = descriptor;
        CompositeEncoder beginStructure = encoder.beginStructure(serialDescriptor);
        ChatScrollData.write$Self$chat_release(value, beginStructure, serialDescriptor);
        beginStructure.endStructure(serialDescriptor);
    }

    @Override // bs.h0
    @NotNull
    public KSerializer[] typeParametersSerializers() {
        return h1.f3190b;
    }
}
